//
// Created by Leonardo Kdouh on 10/10/2023.
//

#ifndef SIMULACPARCIAL_NODOALUMNO_H
#define SIMULACPARCIAL_NODOALUMNO_H

#include "alumno.h"

typedef struct _nodoAlumno{
    stAlumno dato;
    struct _nodoAlumno* sig;
}nodoAlumno;


nodoAlumno* inicListaAlumno();
nodoAlumno* crearNuevoAlumno(stAlumno dato);
nodoAlumno* agregarAlPrincipioAlumno(nodoAlumno* lista, nodoAlumno* nuevo);
nodoAlumno* agregarAlFinalAlumno(nodoAlumno* lista, nodoAlumno* nuevo);
nodoAlumno* agregarPorApellidoAlumno(nodoAlumno* lista, nodoAlumno* nuevo);
nodoAlumno* buscarUltimoAlumno(nodoAlumno* lista);
void muestraNodoAlumno(nodoAlumno* nodo);
void muestraListaAlumno(nodoAlumno* lista);

#endif //SIMULACPARCIAL_NODOALUMNO_H
