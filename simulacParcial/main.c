#include <stdio.h>
#include <strings.h>
#include "adl.h"
#include "registroMateria.h"

#define DIM 100

int cargaArreglo(char nombreArchivo[], celda adl[], int dimension);

stAlumno getAlumno(stMateria materia);


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