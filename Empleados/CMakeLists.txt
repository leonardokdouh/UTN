cmake_minimum_required(VERSION 3.26)
project(Empleados C)

set(CMAKE_C_STANDARD 11)

add_executable(Empleados main.c
        empleado.c
        pilaEmpleado.h
        pilaEmpleado.c)
