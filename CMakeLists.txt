cmake_minimum_required(VERSION 3.29)
project(FomixCLibs C)

set(CMAKE_C_STANDARD 11)

file(GLOB_RECURSE SOURCES "include/*.h")
add_library(FomixCLibs STATIC main.c)
add_library(Localizer STATIC localizer.c ${SOURCES})

target_include_directories(FomixCLibs PUBLIC include/*.h)