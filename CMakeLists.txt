cmake_minimum_required(VERSION 3.9)
project(clibs)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c deps/hash/hash.c deps/hash/hash.h deps/mt19937ar/mt19937ar.h deps/mt19937ar/mt19937ar.c)
add_executable(clibs ${SOURCE_FILES})