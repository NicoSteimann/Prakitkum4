cmake_minimum_required(VERSION 3.20)
project(untitled C)

set(CMAKE_C_STANDARD 90)

add_executable(untitled main.c header.c header.h)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pedantic -pedantic-errors -Wall -Wextra")