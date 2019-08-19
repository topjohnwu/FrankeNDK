#!/usr/bin/env python
#
# Copyright (C) 2018 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
"""Symbolizes stack traces from logcat.
See https://developer.android.com/ndk/guides/ndk-stack for more information.
"""

from __future__ import print_function

import argparse
import os
import re
import subprocess
import sys


def find_llvm_symbolizer():
    """Finds the NDK llvm-symbolizer(1) binary.

    Returns: An absolute path to llvm-symbolizer(1)."""

    # ndk-stack is installed to $NDK/prebuilt/<platform>/bin, so from
    # `~/Downloads/android-ndk-r18/prebuilt/linux-x86_64/bin/ndk-stack`...
    # ...get `/usr/enh/Downloads/android-ndk-r18/`:
    ndk_bin = os.path.dirname(os.path.realpath(__file__))
    ndk_root = os.path.abspath(os.path.join(ndk_bin, '../../..'))
    # ...get `linux-x86_64`:
    arch = os.path.basename(os.path.abspath(os.path.join(ndk_bin, '../')))
    # And from there construct the llvm-symbolizer path.
    llvm_bin = os.path.join(ndk_root, 'toolchains', 'llvm', 'prebuilt', arch,
                            'bin')
    path = os.path.join(llvm_bin, 'llvm-symbolizer')
    if os.path.exists(path):
        return path

    # Okay, maybe we're a standalone toolchain? (https://github.com/android-ndk/ndk/issues/931)
    # In that case, llvm-symbolizer and ndk-stack are conveniently in
    # the same directory...
    return os.path.abspath(os.path.join(ndk_bin, 'llvm-symbolizer'))


def main():
    """"Program entry point."""
    parser = argparse.ArgumentParser(
        description='Symbolizes Android crashes.',
        epilog='See <https://developer.android.com/ndk/guides/ndk-stack>.')
    parser.add_argument(
        '-sym',
        '--sym',
        dest='symbol_dir',
        required=True,  # TODO: default to '.'?
        help='directory containing unstripped .so files')
    parser.add_argument(
        '-i',
        '-dump',
        '--dump',
        dest='input',
        default='-',
        type=argparse.FileType('r'),
        help='input filename')
    args = parser.parse_args()

    if not os.path.exists(args.symbol_dir):
        sys.exit('{} does not exist!\n'.format(args.symbol_dir))

    cmd = [
        find_llvm_symbolizer(), '--demangle', '--functions=linkage',
        '--inlining=true', '--use-symbol-table=true'
    ]
    proc = subprocess.Popen(cmd, stdin=subprocess.PIPE, stdout=subprocess.PIPE)

    banner = '*** *** *** *** *** *** *** *** *** *** *** *** *** *** *** ***'
    in_crash = False
    saw_frame = False
    for line in args.input:
        line = line.rstrip()

        if not in_crash:
            if banner in line:
                in_crash = True
                saw_frame = False
                print('********** Crash dump: **********')
            continue

        for tag in ['Build fingerprint:', 'Abort message:']:
            if tag in line:
                print(line[line.find(tag):])
                continue

        # See Backtrace::FormatFrameData in libbacktrace.
        # We're deliberately very loose because NDK users are likely to be
        # looking at crashes on ancient OS releases.
        # TODO: support asan stacks too?
        m = re.match('.* +(#[0-9]+) +pc ([0-9a-f]+) +(([^ ]+).*)', line)
        if m:
            saw_frame = True
            frame = m.group(1)
            pc = m.group(2)
            tail = m.group(3)
            lib = m.group(4)

            lib_path = os.path.join(args.symbol_dir, os.path.basename(lib))

            out_line = '%s 0x%s %s' % (frame, pc, tail)
            indent = (out_line.find('(') + 1) * ' '
            print(out_line)
            if os.path.exists(lib_path):
                print('"%s" 0x%s' % (lib_path, pc), file=proc.stdin)
                while True:
                    symbolizer_output = proc.stdout.readline().rstrip()
                    if not symbolizer_output:
                        break
                    # TODO: rewrite file names based on a source path?
                    print('%s%s' % (indent, symbolizer_output))
        elif saw_frame:
            in_crash = False
            print('Crash dump is completed\n')


if __name__ == "__main__":
    main()
