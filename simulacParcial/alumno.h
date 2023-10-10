//
// Created by Leonardo Kdouh on 10/10/2023.
//

#ifndef SIMULACPARCIAL_ALUMNO_H
#define SIMULACPARCIAL_ALUMNO_H

typedef struct {
    char nombreAlumno[20];
    char apellidoAlumno[20];
    int nota;
}stAlumno;

void muestraUnAlumno(stAlumno alumno);

#endif //SIMULACPARCIAL_ALUMNO_H
