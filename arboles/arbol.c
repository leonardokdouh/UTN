#include <stddef.h>
#include <stdlib.h>
#include <printf.h>
#include "arbol.h"

//
// Created by Leonardo Kdouh on 02/10/2023.
//
arbol * inicArbol(){
    return NULL;
}

arbol* crearNodoArbol(int dato){
    arbol* aux= (arbol *)malloc(sizeof (arbol));
    aux->dato=dato;
    aux->izq=NULL;
    aux->der=NULL;
    return aux;
}

arbol* insertarArbol(arbol* arbol, int dato){
    if(arbol==NULL){
        arbol = crearNodoArbol(dato);
    }else{
       if(dato>arbol->dato){
           arbol->der=insertarArbol(arbol->der, dato);
       }else{
           arbol->izq= insertarArbol(arbol->izq, dato);
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
        printf("ACA ESTA");
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

arbol * buscar(arbol * arbol, int dato){
    struct _arbol *rta;

     rta=NULL;

    if(arbol!=NULL)
    {
        if(dato == arbol->dato)
            rta = arbol;
        else
        if(dato>arbol->dato)
            rta = buscar(arbol->der, dato);
        else
            rta = buscar(arbol->izq, dato);
    }
    return rta;
}


int contarTerminales(arbol * arbol){
    int contador =0;

    if(arbol!=NULL){
        if(arbol->der==NULL && arbol->izq==NULL){
            contador++;
        }else{
            contador= contarTerminales(arbol->izq)+ contarTerminales(arbol->der);
        }
    }
return contador;
}

//SERIA QUE SOLO TENGA UN HIJO
//ESTA MAL
int contarNivelUno(arbol * arbol){
    int contador =0;

    if(arbol!=NULL){
        if(arbol->der!=NULL){
            contador++;
        }
        if(arbol->izq!=NULL){
            contador++;
        }
    }
    return contador;
}


arbol * buscaNodoArbol(arbol* arbol, char dni[]){
    struct _arbol * rta = NULL;

    /*
    if(arbol){
        if(atoi(dni) == atoi(arbol->dato.persona.dni)){

            rta = buscaNodoArbol(arbol->der, dni);
        }else{
            rta= buscaNodoArbol(arbol->izq, dni);
        }
    }
     */

    return rta;
}

int cuentaNodoArbol (arbol* arbol){
    int contador = 0;

    if(arbol){
        contador= 1+ cuentaNodoArbol(arbol->izq)
                + cuentaNodoArbol(arbol->der);
    }
    return contador;
}

int sumaNodosArbol (arbol* arbol){
    int total = 0;

    if(arbol){
        total= arbol->dato + sumaNodosArbol(arbol->izq)
                 + sumaNodosArbol(arbol->der);
    }
    return total;
}


void dibujarArbol(arbol * arbol, int nivel)
{
    if (arbol)
    {
        // Imprimir el subárbol derecho
        dibujarArbol(arbol->der, nivel + 1);

        // Imprimir espacios y conectores
        for (int i = 0; i < nivel; i++)
        {
            if (i == nivel - 1)
            {
                printf("+--");
            }
            else
            {
                printf("     ");
            }
        }

        // Imprimir el valor del nodo actual
        printf("|%d|\n", arbol->dato);

        // Imprimir el subárbol izquierdo
        dibujarArbol(arbol->izq, nivel + 1);
    }

}
