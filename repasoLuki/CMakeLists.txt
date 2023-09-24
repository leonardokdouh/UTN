cmake_minimum_required(VERSION 3.26)
project(repasoLuki C)

set(CMAKE_C_STANDARD 11)

add_executable(repasoLuki main.c
        articulo.c
        lista.c
        lista.h
)
