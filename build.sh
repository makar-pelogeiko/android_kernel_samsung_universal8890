#!/bin/bash


export CROSS_COMPILE=/media/user/DATA/course_work/android-ndk-r12b/toolchains/aarch64-linux-android-4.9/prebuilt/linux-x86_64/bin/aarch64-linux-android-
export ANDROID_MAJOR_VERSION=o
make ARCH=arm64 exynos8890-herolte_defconfig
make ARCH=arm64 -j4
