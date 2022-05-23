cmake_minimum_required(VERSION 3.10)

project(ukladRownan LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CPU_OPTIONS -Werror -Wall -Wextra -pedantic -ffunction-sections -fdata-sections -Os)
add_compile_options(${CPU_OPTIONS})

add_subdirectory(LinearEquations)
add_subdirectory(LZespolona)
add_subdirectory(matrix)
add_subdirectory(target)
add_subdirectory(vector)
