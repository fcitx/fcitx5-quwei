cmake_minimum_required(VERSION 3.21)
project(fcitx5-quwei)

find_package(Gettext REQUIRED)
find_package(Fcitx5Core REQUIRED)

# Setup some compiler option that is generally useful and compatible with Fcitx 5 (C++17)
include("${FCITX_INSTALL_CMAKECONFIG_DIR}/Fcitx5Utils/Fcitx5CompilerSettings.cmake")

add_subdirectory(src)
add_subdirectory(po)
