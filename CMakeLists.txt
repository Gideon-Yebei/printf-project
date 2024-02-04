cmake_minimum_required(VERSION 3.27)
project(printf C)

set(CMAKE_C_STANDARD 99)

add_executable(printf main.c
        _printf.c
        _printf.h)
