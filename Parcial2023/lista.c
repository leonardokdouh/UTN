//
// Created by Leonardo Kdouh on 27/09/2023.
//


#include <string.h>
#include "lista.h"

nodo* inicLista(){
    return NULL;
}

nodo* crearNodo(stPersona dato){
    nodo* nuevo = (nodo*) malloc(sizeof(nodo));
    nuevo->dato = dato;
    nuevo->siguiente= NULL;

    return nuevo;
}


nodo* agregarNodo(nodo* lista, nodo* nuevo);

nodo* agregarEnOrdenPorApellido(nodo* lista, nodo* nuevo){
    if(!lista) {
        lista = nuevo;
    }else{
        //ASI VA DE LA A A LA Z. Si meto > al reves
        if(strcmp(nuevo->dato.apellido, lista->dato.apellido) <0) {
            lista = agregarPpio(lista, nuevo);
        }else{
            nodo* ante = lista;
            nodo * aux= lista->siguiente;
            while (aux && strcmp(nuevo->dato.apellido, lista->dato.apellido) >0){
            ante= aux;
            aux=aux->siguiente;
}
            nuevo->siguiente=aux;
            ante->siguiente=nuevo;
        }



    }
    return lista;

}


nodo* agregarPpio(nodo* lista, nodo* nuevo){
    nuevo->siguiente = lista;
    return nuevo;
}



void muestraUnNodo(nodo* nodo){
    //DE LA LIBRERIA QUE SERGIO PASO
    muestraUnaPersona(nodo->dato)
}

void muestraLista(nodo* lista){
    nodo* aux= lista;
    while (aux){
        muestraUnNodo(aux);
        aux= aux->siguiente;
    }
}