#include <stddef.h>
#include <stdlib.h>
#include <printf.h>
#include "arbol.h"

//
// Created by Leonardo Kdouh on 02/10/2023.
//
arbol * inicArbol(int dato){
    return NULL;
}

arbol* crearNodoArbol(int dato){

    arbol* nodoArbol = malloc(sizeof (arbol));
    nodoArbol->dato=dato;
    nodoArbol->izq=NULL;
    nodoArbol->der=NULL;
}

arbol* insertarArbol(arbol* arbol, int dato){
    if(!arbol){
        arbol = inicArbol(dato);
    }else{
       if(dato>arbol->dato){
           arbol->der=insertarArbol(arbol, dato);
       }else{
           arbol->izq= insertarArbol(arbol, dato);
       }
    }
    return arbol;
}

void preorder(arbol * arbol) {
    if (arbol) {
        printf("%d", arbol->dato);
        preorder(arbol->der);
        preorder(arbol->izq);
    }
}

void inorder(arbol * arbol){
    if (arbol) {
        preorder(arbol->der);
        printf("%d", arbol->dato);
        preorder(arbol->izq);
    }
}

void posorder(arbol * arbol){
    if (arbol) {
        preorder(arbol->der);
        preorder(arbol->izq);
        printf("%d", arbol->dato);
    }
}
