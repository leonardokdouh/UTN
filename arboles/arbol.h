//
// Created by Leonardo Kdouh on 02/10/2023.
//

#ifndef ARBOLES_ARBOL_H
#define ARBOLES_ARBOL_H

typedef struct _arbol{
    int dato;
    struct _arbol* izq;
    struct _arbol* der;
}arbol;

arbol * inicArbol(int dato);
arbol * crearNodoArbol(int dato);
arbol* insertarArbol(arbol* arbol, int dato);
void preorder(arbol * arbol);
void inorder(arbol * arbol);
void posorder(arbol * arbol);



#endif //ARBOLES_ARBOL_H

