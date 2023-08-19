//
// Created by Leonardo Kdouh on 19/08/2023.
//

#ifndef UNTITLED_EMPLEADO_H
#define UNTITLED_EMPLEADO_H
typedef struct {
    int id;
    char nombre[25];
    char apellido[25];
    int edad;
}stEmpleado;

stEmpleado cargarUnEmpleado();
void mostrarUnEmpleado(stEmpleado emp);
#endif //UNTITLED_EMPLEADO_H
