#ifndef EMPLEADOS_PILAEMPLEADO_H
#define EMPLEADOS_PILAEMPLEADO_H
#include "empleado.h"

typedef struct{
    stEmpleado *arregloEmp;
    stEmpleado *otroArreglo;
    int v;
    int dim;
}PilaEmpleados;

void inicPilaEmpleados(PilaEmpleados *p);
void apilarEmpleado(PilaEmpleados *p, stEmpleado e);
stEmpleado desapiloEmpleado(PilaEmpleados *p);
stEmpleado topeEmpleado(PilaEmpleados *p);
int pilaVaciaEmpleado(PilaEmpleados *p);


#endif //EMPLEADOS_PILAEMPLEADO_H
