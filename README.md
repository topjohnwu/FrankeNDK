# FrankeNDK

*Support SDK: 16 - 29* \
*Host Platform: Linux, macOS, Windows* \
*Host Arch: x86_64* \
*Target Arch: ARMv7, ARM64, x86, x86_64*

## Downloads

[Latest Release](https://github.com/topjohnwu/FrankeNDK/releases/latest)

## FrankeNDK?

- Newer NDK versions ship with a significant larger static libc, resulting to much larger static binaries.
- Start from the latest NDK
- Replace static libraries for API 16 with those from r10e.

## Notes

Only building with `APP_PLATFORM := android-16` will benefit from smaller static binary size.
