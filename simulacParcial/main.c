#include <stdio.h>
#include <strings.h>
#include "adl.h"
#include "registroMateria.h"

#define DIM 100

int cargaArreglo(char nombreArchivo[], celda adl[], int dimension);

stAlumno getAlumno(stMateria materia);


//El arbol va a ser de clientes, cuentas va a ser un arreglo(lista)
//un arbol de arreglo de listas
// LISTA
/*
 * typedef struc {
 * stCliente dato;
 * nodoArbol * arbolDeCuentas
 * struct _nodo * sig;
 * }nodo
 *
 *
 * //ARBOL DE LISTAS
 *  * typedef struc {
 * stCliente dato;
 * nodo* cuentas;
 * struct _nodoA* izquierda;
 * struct _nodoA* derecha;
 * }nodoA
 *
 *nodoA* alta(nodoA * adl, stCliente cliente, stCuenta cuenta){
 *
 *  nodo* nuevo = crearNodo(cuenta);
 *  nodoA* posicion = buscaNodoArbol(adl, cliente.apellido);
 *
 *  if(!posicion){
 *
 *  posicion->cuentas = agregarAlPpio(posicion->cuentsa, cuenta);
 *  }else{
 *  adl= agregarNuevo(adl, crearNodo(cuenta)
 *  }
 *
 *  return adl,
 * }
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
int main() {
    printf("Hello, World!\n");

    int v = 0;
    celda adl[DIM];

    v = cargaArreglo("ARCHIVO_MATERIAS", adl, DIM);


    return 0;
}


int cargaArreglo(char nombreArchivo[], celda adl[], int dimension) {
    FILE *archi = fopen(nombreArchivo, "rb");
    char materia[20];
    stAlumno alumno;
    stMateria registro;
    int v = 0;

    if (archi) {
        while (v < dimension && fread(&registro, sizeof(materia), 1, archi) > 0) {
            strcpy(materia, registro.materia);
            alumno = getAlumno(registro);
            v= altaMateria(adl, v, materia, alumno);
        }
    }
    fclose(archi);
    return v;
}


stAlumno getAlumno(stMateria materia) {
    stAlumno alumno;
    strcpy(alumno.nombreAlumno, materia.nombreAlumno);
    strcpy(alumno.apellidoAlumno, materia.apellidoAlumno);
    alumno.nota = materia.nota;
}