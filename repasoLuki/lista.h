//
// Created by Leonardo Kdouh on 22/09/2023.
//

#ifndef REPASOLUKI_LISTA_H
#define REPASOLUKI_LISTA_H
#include "articulo.h"

typedef struct _nodo{

    stArticulo dato;

    struct _nodo* siguiente;

}nodo;



nodo * inicLista();
nodo * crearNodo(stArticulo dato);

nodo * agregarPrincipio(nodo* lista, nodo* nuevo);
nodo * agregarFinal(nodo* lista, nodo* nuevo);
nodo * buscarUltimo(nodo* lista);
nodo * borrarPrimerNodo(nodo* lista);
void muestraNodo (nodo* nodo);
nodo * borrarNodo(nodo* lista, char codig[]);

int cuentaNodosRecursivo(nodo* lista);
int cuentaNodosRecursivoConFiltro(nodo* lista);
int sumaNodosRecursivo(nodo* lista);

nodo* borrarLista(nodo* lista);
void muestraLista(nodo* lista);
void muestraListaRecursiva(nodo* lista);
nodo* buscarMenorLista(nodo* lista);

#endif //REPASOLUKI_LISTA_H