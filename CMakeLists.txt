cmake_minimum_required(VERSION 3.5)
project(GitStory VERSION 0.1 LANGUAGES CXX)

# For better global includes
include_directories(./)

# Project Packages ---------------------------------------------------------------------------------

# To find the Widgets package:
# Add "-DMAKE_PREFIX_PATH=/usr/include/x86_64-linux-gnu/qt5" as a cmake option
find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

# CMake Options ------------------------------------------------------------------------------------
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE TRUE)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Compile Options ----------------------------------------------------------------------------------
add_compile_options(
        -pedantic
        -pedantic-errors
        -Wall
        -Wextra
        -fstack-protector-strong
        -fwrapv
        -Wcast-align
        -Wcast-qual
        -Wconversion
        -Wdouble-promotion
        -Wfloat-equal
        -Wformat=2
        -Wformat-security
        -Wmissing-include-dirs
        -Wnon-virtual-dtor
        -Wold-style-cast
        -Wredundant-decls
        -Wshadow
        -Wsign-conversion
        -Wswitch-enum
        -Wuninitialized
        -Wunused-parameter
)

# Project Directories ------------------------------------------------------------------------------
add_subdirectory(main)
