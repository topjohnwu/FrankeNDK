# FrankeNDK

*Support SDK: 14 - 21*  
*Host Platform: Linux, macOS, Windows*  
*Host Arch: x86_64*  
*Target Arch: ARMv7, ARM64, x86, x86_64 (64 bit only exist in SDK 21)*

## Downloads
[Latest Release](https://github.com/topjohnwu/FrankeNDK/releases/latest)

## Why FrankeNDK?
Starting from NDK r11, all dynamically linked binaries built will cause linker warning on Android 5.1 (details: [android-ndk/ndk: #622](https://github.com/android-ndk/ndk/issues/622)). To overcome this issue, Magisk's binaries are always built with the extremely obsolete NDK r10e. All improvements in later NDK, the most significant being [Unified Header](https://android.googlesource.com/platform/ndk/+/master/docs/UnifiedHeaders.md), cannot be used. This became more and more annoying since all headers before Unified Headers is pretty much broken.

The NDK team assigned this issue to r19's milestone, which means it won't be fixed anytime soon. I had no choice but to come up with my own solution.

## What is FrankeNDK?
The cause of the linker warning is that the `libc.so` shipped with NDK later than r11 has an addition versioning label that SDK 22's linker specifically would complain. The solution here is to "Frankenstein" r10e's platform libraries with the latest stable NDK, which is r17b as of writing.

NDK r10e supports SDK 3-21, r17b supports SDK 14-28, so FrankeNDK only supports the intersection of the two, which is SDK 14-21. MIPS is removed in r17, so both MIPS and MIPS64 support are also removed.

An additional advantage of using obsolete platform libraries is that the static C library is extremely small compared to modern NDKs, which means it can build smaller static binaries.

**Be aware** that the r10e platform libraries could have significant less features than modern NDK, especially in the C++ part. Do not try to build complex C++ projects using STL with FrankeNDK. This custom NDK is targeted for ANSI C and system runtime C++ (`/system/lib/libstdc++.so`) projects.
