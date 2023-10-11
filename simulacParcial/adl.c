#include <string.h>
#include <printf.h>
#include "adl.h"

//
// Created by Leonardo Kdouh on 10/10/2023.
//
int altaMateria(celda adl[], int v, char materia[], stAlumno alumno) {
    nodoAlumno *nuevo = crearNuevoAlumno(alumno);
    int pos = buscaPosicionMateria(adl, materia, v);

    if (pos == -1) {
        v = agregarMateria(adl, materia, v);
        pos = v - 1;
    }
    adl[pos].listaAlumnos = agregarAlFinalAlumno(adl[pos].listaAlumnos, nuevo);
    return v;
}

int buscaPosicionMateria(celda adl[], char materia[], int v) {
    int pos = -1;
    int i = 0;

    while (i < v && pos == -1) {
        if (strcmp(adl[i].materia, materia) == 0) {
            pos = 1;
        }
        i++;
    }
    return pos;
}


int agregarMateria(celda adl[], char materia[], int v) {

    strcpy(adl[v].materia, materia);
    adl[v].listaAlumnos = inicListaAlumno();
    return v + 1;
}

void muestraADL(celda adl[], int v) {
    for (int i = 0; i < v; i++) {
        muestraUnaCelda(adl[i]);
    }
}

void muestraUnaCelda(celda c){
    printf(".........");
    muestraListaAlumno(c.listaAlumnos);
}