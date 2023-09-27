#include <stdio.h>
#include <strings.h>
#include <ctype.h>
#include "lista.h"

#define AR_PERSONAS "personas.dat"

int main() {
int v=0;
stPersonas personas[30];
//CREAR ARREGLO DE PERSONAS

v= archivo2Arreglo(AR_PERSONAS, personas, DIM);
muestraArreglo(personas, v);


//2
nodo * listaPersonas=inicLista();
    listaPersonas= arreglo2Lista(personas, v, listaPersonas);

    //4

    muestraUnaPersona(buscaMenor(listaPersonas));


    //5
    char inicial;
    printf("INGRESE UNA INCIIAL");
    fflush(stdin);
    scanf("%c", inicial);
    inicial=toupper(inicial);
    char nombreArchivo[20];
    nombreArchivo[0]=inicial;
    nombreArchivo[1]='\0';
    strcat(nombreArchivo, ".dat");


    return 0;
}

//descargar parcial + librerias.
//COPIAR LOS DATOS DE las personas del archivo en un arreglo de personas

int archivo2Arreglo(char nombreArchivo[],  int dimens){
    int validos = 0;
    stPersona persona;
    FILE * arch = fopen(nombreArchivo, "rb");
    if(arch){
        while(fread(&persona[validos], sizeof(stPersonas), 1, archi)>0 && validos<dimens){
            validos++;
        }
        fclose(arch);
    }
    return validos;
}

void muestraArreglo(stPersona p[], int validos){
    for (int i=0; i<validos; i++){
        muestraUnaPersona(p[i]);
    }
}

//COPIAR LOS DATOS DEL ARREGLO EN UNA LISTA SIMPLEMENTE ENLAZADA por APELLIDO.

nodo* arreglo2Lista(stPersona persona[], int validos, nodo* lista){
    for(int i=0; i<validos; i++){
        lista= agregarEnOrdenPorApellido(lista, crearNodo(persona[i]));
    }

    return lista;
}


//Punto 3
// FUNCOIN RECURSIVA QUE SUME EDADES PAR Y SEAN MAYOREES DE EDAD

int sumaEdades(nodo* lista, int limiteEdad){
    int total =0;
    if(lista){
        if(atoi(lista->dato.dni %2==0 & lista->dato.edad>=limiteEdad)){
            total = lista->dato.edad + sumaEdades(lista->siguiente, limiteEdad);
        }else{
            total= sumaEdades(lista->siguiente, limiteEdad);
        }
    }
    return total;
}

//Punto 4
// FUNCOIN RECURSIVA QUE busque EL MENOR DE LA LISTA Y LO RETORNE

stPersona buscaMenor(nodo* lista){
    stPersona menor;

    if(lista->siguiente){
        menor= buscaMenor(lista->siguiente);
        if(menor.edad > lista->dato.edad){
            menor = lista->dato;
        }else{
            menor= lista->dato;
        }

    }
    return menor;





}

//Punto 5
// FUNCOIN que recorra la lista y copie los apellidos que comiencen con la letra (eleccion)

void guardaPersonaEnArchivo(nodo * lista, char nombreArch[], char letra){
    stPersona p;
    FILE * archivo= fopen(nombreArch, "ab");

    if(archivo){
        while(lista){
            if(lista->dato.apellido[0] == letra){
                p= lista->dato;
                fwrite(&p, sizeof (stPersona), 1, archivo);
            }
            lista = lista->siguiente;

        }
    }
}

//6

int cuentaPersonasMayoresRecur(nodo*lista, int edadLimite){
    int cont=0;
    if(lista){
        if(lista->dato.edad > edadLimite){
            cont=1+ cuentaPersonasMayoresRecur(lista->siguiente, edadLimite);
        } else{
            cont = cuentaPersonasMayoresRecur(lista->siguiente, edadLimite);
        }
    }
    return cont;
}

//7 FUNCION QUE CALCULE EL PORCENTAJE de personas mayores a cierta edad;
double calcularPorcentajeMayores(nodo* lista, int edadLimite){
    int totalPersonas = cuentaPersonasMayoresRecur(lista, 0);
    int totalMayores = cuentaPersonasMayoresRecur(lista, edadLimite);

    if(lista) return ((float) totalMayores/totalPersonas *100)    ;
}