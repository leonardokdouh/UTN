#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"
#include "string.h"

stEmpleado cargarUnEmpleado(){
    stEmpleado emp;
    static int id=0;
    id++;

    emp.id=id;
    strcpy(emp.nombre, "Leito");
    strcpy(emp.apellido, "XoX");
    emp.edad= 33;
    return emp;
}

void mostrarUnEmpleado(stEmpleado emp){
    printf("\n ID............%d", emp.id);
    printf("\n Nombre........%s", emp.nombre);
    printf("\n Ape...........%s", emp.apellido);
    printf("\n Edad..........%d", emp.edad);

}