cmake_minimum_required(VERSION 3.24)
project(snake_eyes)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(snake_eyes main.cpp die.cpp die.h)
