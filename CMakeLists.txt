cmake_minimum_required(VERSION 3.15)
project(mfab-firmware)

set(CMAKE_CXX_STANDARD 14)

add_compile_options(
        -Wcast-align
        -Wpedantic
        -Wcast-qual
        -Wconversion
        -Wctor-dtor-privacy
        -Wnon-virtual-dtor
        -Wmissing-include-dirs
        -Wdisabled-optimization
        -Winit-self
        -Wnon-virtual-dtor
        -Wold-style-cast
        -Woverloaded-virtual
        -Wparentheses
        -Wredundant-decls
        -Wshadow
        -Wsign-promo
        -Wstrict-aliasing
        -Wall
        -Wextra
        -Werror
)

set(hardware_dir ${CMAKE_CURRENT_SOURCE_DIR}/src/Hardware)
set(firmware_dir ${CMAKE_CURRENT_SOURCE_DIR}/src/Firmware)

add_subdirectory(test)
