//
// Created by Leonardo Kdouh on 22/09/2023.
//

#include <string.h>
#include "lista.h"

nodo* inicLista(){
    return NULL;
}

nodo* crearNodo(stArticulo dato){
    nodo* nuevo = (nodo*) malloc(sizeof(nodo));
    nuevo->dato= dato;
    nuevo->siguiente=NULL;

    return nuevo;
}

nodo * agregarPrincipio(nodo* lista, nodo* nuevo){
        nuevo->siguiente = lista;
    return nuevo;
}

nodo* agregarEnOrdenPorParam(nodo* lista, nodo* nuevo){
    if(!lista){
        lista=nuevo;
    }else{
        //si el nuevo es < al de la lista, agrego al ppio
        if(nuevo->dato.codigo<=lista->dato.codigo){
            lista= agregarPrincipio(lista, nuevo);
        }else{
            //buscamos el lugar donde meterlo
            nodo* ante= lista;
            nodo* seg = lista;
            while(seg && (nuevo->dato.codigo>seg->dato.codigo)){
            ante=seg;
            seg= seg->siguiente;
            }
            //inserto el nuevo nodo entre ante ante y sig
            nuevo->siguiente=seg;
            ante->siguiente=nuevo;
        }
    }
    return lista;
}

nodo * buscarUltimo(nodo* lista){
    nodo * seg = lista;
    while(seg->siguiente){
        seg=seg->siguiente;
    }
    return seg;
}

nodo * agregarFinal(nodo* lista, nodo* nuevo){
    if(!lista){
        lista = nuevo;

    }else{
        nodo * ultimo = buscarUltimo(lista);
        ultimo->siguiente = nuevo;
    }
    return lista;
}

void muestraNodo(nodo* nodo){
    printf(" NODO : %p", nodo);
    mostrarUnArticulo(nodo->dato);
    printf("el nodo siguiente es: %`", nodo->siguiente);
}

nodo * borrarPrimerNodo(nodo* lista){
    if(lista){
        nodo* aux = lista;
        lista= lista->siguiente;
        free(aux);
    }
    return lista;
}


nodo * borrarNodo(nodo* lista, char marca[]){

    nodo* aux =NULL;
    if(lista && strcmp(lista->dato.marca, marca)==0){
    // (lista && lista-> dato.codigo ==codigo)

    aux = lista;
    lista = lista->siguiente;
        free(aux);
    } else{
        //me muevo a la derecha
        aux = lista->siguiente;
        //creo un nodo anterior y lo asigno a la lista
        //para no perder la lista
        nodo* ant = lista;
        while(aux && strcmp(lista->dato.marca, marca)!=0){
            ant = aux;
            aux = aux->siguiente;
        }

        //si hay aux, encontro dato, sino no esta.
        if(aux){
            ant->siguiente= aux->siguiente;
            free(aux);
        }
    }
    return lista;
}


void muestraLista (nodo* lista){
    nodo* seg = lista;
    while(lista!=NULL){
        mostrarUnArticulo(seg->dato);
        seg=seg->siguiente;
    }
}


























