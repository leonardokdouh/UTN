#include <stdio.h>
#include "arbol.h"

int main() {

    /*2. Desarrollar funciones:
a. Retornar la cantidad de nodos terminales. (hojas)
b. Retornar la cantidad de nodos de grado 1.
c. Informar si se encuentra un dato buscado en el árbol.
d. Mostrar el contenido del árbol mediante el recorrido
preorden.
     */


    int a[10]= {1,10,2,45,9,15,46,33,25,20};
    arbol * arbol = inicArbol();
    for (int i=0; i<10; i++)
    {
        arbol = insertarArbol(arbol, a[i]);
    }
    printf("PREORDER :");
    preorder(arbol);
    printf("\nINORDER :");
    inorder(arbol);

    printf("\nLa cantidad de nodos es :");
    printf("%d", cuentaNodoArbol(arbol));

    printf("\nLa suma de los nodos es :");
    printf("%d", sumaNodosArbol(arbol));

    printf("\nLos nodos de nivel uno son :");
    printf("%d", contarNivelUno(arbol));
    printf("\n");
    printf("\n");

    dibujarArbol(arbol, 0);

    return 0;
}
