cmake_minimum_required(VERSION 3.26)
project(arboles C)

set(CMAKE_C_STANDARD 11)

add_executable(arboles main.c
        arbol.c
        arbol.h
)
