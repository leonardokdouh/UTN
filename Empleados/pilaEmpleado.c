#include "pilaEmpleado.h"
#include <stdlib.h>


void inicPilaEmpleados(PilaEmpleados *p){
    p->dim = 50;
    p->v=0;
    p->arregloEmp =(stEmpleado*) malloc(sizeof(stEmpleado *)*p->dim);
}

void apilarEmpleado(PilaEmpleados *p, stEmpleado e){
    if(p->v==p->dim){
        p->dim+=60;
        p->arregloEmp =(stEmpleado*) reallocf(p->arregloEmp, sizeof(stEmpleado *)*p->dim);

    }
    p->arregloEmp [p->v]=e;
    p->v ++;
}

stEmpleado desapiloEmpleado(PilaEmpleados *p){
    stEmpleado emp = p->arregloEmp[p->v-1]; //porque v es la primera posicion libre.
    p->v--;
    return emp;
}

stEmpleado topeEmpleado(PilaEmpleados *p){
    return p->arregloEmp[p->v-1];
}

int pilaVaciaEmpleado(PilaEmpleados *p){
    return (p->v==0)? 1:0;
}

