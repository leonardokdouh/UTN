cmake_minimum_required(VERSION 3.26)
project(first C)

set(CMAKE_C_STANDARD 11)

add_executable(first first/main.c
        first/domicilio.h
        first/domicilio.c)
