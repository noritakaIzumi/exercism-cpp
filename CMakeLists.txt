cmake_policy(SET CMP0048 NEW)

# Name the project after the exercise
project(${exercise} CXX)

# Basic CMake project
cmake_minimum_required(VERSION 3.5.1)

# Exercism configs
add_compile_definitions(EXERCISM_RUN_ALL_TESTS)

# Projects
add_subdirectory(hello-world)
add_subdirectory(leap)
add_subdirectory(reverse-string)
