# Name the project after the exercise
project(${exercise} CXX)

# Basic CMake project
cmake_minimum_required(VERSION 3.5.1)

# Projects
add_subdirectory(hello-world)
add_subdirectory(leap)
