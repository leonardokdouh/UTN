#include <stdio.h>
#include "empleado.h"
#include "pilaEmpleado.h"


int main() {

    PilaEmpleados piEmp;
    inicPilaEmpleados(&piEmp);


    for(int i=0; i<50; i++){
        apilarEmpleado(&piEmp, cargarUnEmpleado());
    }


    while (!pilaVaciaEmpleado(&piEmp)){
        mostrarUnEmpleado(desapiloEmpleado(&piEmp));
    }




}
