cmake_minimum_required(VERSION 3.9)
project(clibs)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c deps/hash/hash.c deps/hash/hash.h)
add_executable(clibs ${SOURCE_FILES})