cmake_minimum_required(VERSION 3.26)
project(simulacParcial C)

set(CMAKE_C_STANDARD 11)

add_executable(simulacParcial main.c
        materia.h
        materia.c
        adl.h
        adl.c
        nodoAlumno.h
        nodoAlumno.c
        alumno.h)
