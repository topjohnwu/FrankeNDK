# FrankeNDK

*Support SDK: 14 - 28*
*Host Platform: Linux, macOS, Windows*
*Host Arch: x86_64*
*Target Arch: ARMv7, ARM64, x86, x86_64 (64 bit only on SDK 21+)*

## Downloads
[Latest Release](https://github.com/topjohnwu/FrankeNDK/releases/latest)

## Why FrankeNDK?
Starting from NDK r11, all built dynamically linked binaries will cause linker warning on Android 5.1 (details: [android-ndk/ndk: #622](https://github.com/android-ndk/ndk/issues/622)). To overcome this issue, Magisk's binaries were always built with the extremely obsolete NDK r10e, which means all improvements in later NDKs like [Unified Header](https://android.googlesource.com/platform/ndk/+/master/docs/UnifiedHeaders.md), modern Clang, and C++17 cannot be used. This became more and more annoying.

Another reason is that newer NDK versions ship with significant larger static libraries (like `libc.a`) than the old ones. Magisk is optimized to build the smallest binary as possible, so we have to also find a way to overcome this.

## How FrankeNDK?
First step is to strip out the unsupported DT entries in all shared libraries with [elf-cleaner](https://github.com/termux/termux-elf-cleaner) to prevent linker warnings. Then, we "Frankenstein" r10e's static platform libraries, forcing the build system to use super small static libraries when building static binaries.

## Notes
The latest FrankeNDK (r2) is based on official r17c because it is the last version with GCC included (BusyBox **requires** GCC to compile properly). Only SDK 16 and 21 have the static libraries replaced with r10e's, as these are the 2 SDK targets Magisk will be using. For other SDK versions, the only difference from official NDK is the stripped out DT entries.
