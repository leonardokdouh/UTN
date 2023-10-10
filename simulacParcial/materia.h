//
// Created by Leonardo Kdouh on 10/10/2023.
//

#ifndef SIMULACPARCIAL_MATERIA_H
#define SIMULACPARCIAL_MATERIA_H

typedef struct {
    char materia[20];
    char nombreAlumno[20];
    char apellidoAlumno[20];
    int nota;
} stMateria;


void muestraUnaMateria(stMateria materia);


#endif //SIMULACPARCIAL_MATERIA_H
