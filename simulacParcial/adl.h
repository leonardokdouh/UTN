//
// Created by Leonardo Kdouh on 10/10/2023.
//

#ifndef SIMULACPARCIAL_ADL_H
#define SIMULACPARCIAL_ADL_H

#include "nodoAlumno.h"

typedef struct {
    char materia[20];
    nodoAlumno* listaAlumnos;
}celda;

int altaMateria(celda adl[], int v, char materia[], stAlumno alumno);
int buscaPosicionMateria(celda adl[], char materio[], int v);
int agregarMateria(celda adl[], char materia[], int v);
void muestraADL(celda adl[], int v);
void muestraUnaCelda(celda c);



#endif //SIMULACPARCIAL_ADL_H
