import os

import lit.util  # pylint: disable=import-error

import libcxx.test.config
import libcxx.test.target_info
import libcxx.android.build
import libcxx.ndk.test.format


class AndroidTargetInfo(libcxx.test.target_info.DefaultTargetInfo):
    def platform(self):
        return 'android'

    def system(self):
        raise NotImplementedError

    def add_cxx_compile_flags(self, flags):
        flags.extend(['-D__STDC_FORMAT_MACROS'])

    def platform_ver(self):
        raise NotImplementedError

    def platform_name(self):
        raise NotImplementedError

    def supports_locale(self, loc):
        raise NotImplementedError


class Configuration(libcxx.test.config.Configuration):
    def __init__(self, lit_config, config):
        super(Configuration, self).__init__(lit_config, config)
        self.cxx_under_test = None
        self.build_cmds_dir = None
        self.cxx_template = None
        self.link_template = None
        self.with_availability = False

    def configure(self):
        self.configure_target_info()
        self.configure_cxx()
        self.configure_triple()
        self.configure_src_root()
        self.configure_obj_root()
        self.configure_cxx_stdlib_under_test()
        self.configure_cxx_library_root()
        self.configure_compile_flags()
        self.configure_link_flags()
        self.configure_features()

    def configure_target_info(self):
        self.target_info = AndroidTargetInfo(self)

    def configure_compile_flags(self):
        super(Configuration, self).configure_compile_flags()
        self.cxx.flags.append('-stdlib=libc++')

        arch = self.get_lit_conf('arch')

        if arch == 'arm':
            self.cxx.flags.extend([
                '-march=armv7-a',
                '-mfloat-abi=softfp',
                '-mfpu=vfpv3-d16',
                '-mthumb',
            ])

    def configure_link_flags(self):
        triple = self.get_lit_conf('target_triple')
        if triple.startswith('arm-') or triple.startswith('armv7-'):
            self.cxx.link_flags.append('-Wl,--exclude-libs,libunwind.a')

        self.cxx.link_flags.append('-lcompiler_rt-extras')
        self.cxx.link_flags.append(
            '-Wl,--exclude-libs,libcompiler_rt-extras.a')

        self.cxx.link_flags.append('-Wl,--exclude-libs,libatomic.a')
        self.cxx.link_flags.append('-Wl,--exclude-libs,libgcc.a')

        self.cxx.link_flags.append('-pie')

    def configure_features(self):
        self.config.available_features.add(self.get_lit_conf('std'))
        self.config.available_features.add('long_tests')

    def get_test_format(self):
        # Note that we require that the caller has cleaned this directory,
        # ensured its existence, and copied libc++_shared.so into it.
        tmp_dir = getattr(self.config, 'device_dir', '/data/local/tmp/libcxx')
        build_only = self.get_lit_conf('build_only', False)
        build_dir = self.get_lit_conf('build_dir')

        return libcxx.ndk.test.format.TestFormat(
            self.cxx,
            self.libcxx_src_root,
            self.libcxx_obj_root,
            build_dir,
            tmp_dir,
            getattr(self.config, 'timeout', '300'),
            exec_env={'LD_LIBRARY_PATH': tmp_dir},
            build_only=build_only)
