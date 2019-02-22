# FrankeNDK

*Support SDK: 16 - 28*
*Host Platform: Linux, macOS, Windows*
*Host Arch: x86_64*
*Target Arch: ARMv7, ARM64, x86, x86_64*

## Downloads
[Latest Release](https://github.com/topjohnwu/FrankeNDK/releases/latest)

## Why FrankeNDK?
- Starting from NDK r11, all built binaries that is dynamically linked will cause linker warning on Android 5.1 ([android-ndk/ndk: #622](https://github.com/android-ndk/ndk/issues/622)).
- GCC is removed in NDK r18, but BusyBox only works when built with GCC. This means our toolchain and build infrastructure is stuck at r17 ,but we still want benefits in modern NDKs.
- Newer NDK versions ship with significant larger static libraries.

## How FrankeNDK?
- Start from NDK r17c
- Replace `platform` libs and `sysroot` with the latest NDK
- Replace `libc++` with the latest NDK
- Strip unsupported DT entries from all shared libraries with [elf-cleaner](https://github.com/termux/termux-elf-cleaner)
- Replace static libraries of `android-16` with r10e.

## Notes
Only building with `APP_PLATFORM := android-16` will benefit from smaller static binary size.
