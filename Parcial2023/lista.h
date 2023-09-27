//
// Created by Leonardo Kdouh on 27/09/2023.
//

#ifndef PARCIAL2023_LISTA_H
#define PARCIAL2023_LISTA_H

#include <stdio.h>
#include <stdlib.h>
//#include "persona.h"


typedef struct _nodo{
    stPersona dato;
    struct nodo* siguiente;

}nodo;

nodo* inicLista();
nodo* crearNodo(stPersona dato);
nodo* agregarNodo(nodo* lista, nodo* nuevo);
nodo* agregarPpio(nodo* lista, nodo* nuevo);
nodo* agregarEnOrdenPorApellido(nodo* lista, nodo* nuevo);
void muestraUnNodo(nodo* nodo);
void muestraLista(nodo* lista);

#endif //PARCIAL2023_LISTA_H
