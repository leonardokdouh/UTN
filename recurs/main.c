#include <stdio.h>

int factorial(int number);
int factoTernario(int number);
int potencia(int number, int pot);
void imprimeArreglo (int arre []);
void imprimeArregloValidoVuelta(int arre [], int vals);
void imprimeArregloValidoIDA(int arre [], int vals);
int esArregloCapicua(int arre [], int vals, int inicio);
int sumaRecursiva (int arre[], int validos);
int menorDelArreglo (int arre[], int validos, int posMenor);


int main()
{
    int numbArre[10]= {5, 6, 4, 1, 6, 5};
    int esCapicua = esArregloCapicua(numbArre, 5, 0);


// printf("El factorial de 5 es = %d ", factorial(5));
// printf("\n El factorial ternario de 3 es = %d ", factoTernario(3));
// printf("\n La potencia de 4 es = %d ", potencia(5, 3));
//imprimeArreglo(numbArre);

    if( esCapicua==1){
        printf("\n El arreglo no es capicua");
    }
    else if (esCapicua==0){
        printf("\n El arreglo es capicua");
    }

    printf("\n La suma del arreglo es de : %d ", sumaRecursiva(numbArre, 6));

    printf("\n La posicion menor del arreglo es : %d ", menorDelArreglo(numbArre, 6, 0));

    return 0;
}


int factorial(int number){
    int rta;
    if(number ==0){
        rta=1;
    }else{
        rta= number * factorial(number-1);
    }
    return rta;
}


int factoTernario(int number){
    return(number==0)? 1: number*factoTernario(number-1);
}

int potencia(int number, int pot){
    int rta;
    if(pot ==1){
        rta = number;
    }else{
        rta= number * potencia(number, pot-1);
    }
    return rta;
}

//3. Recorrer un arreglo y mostrar sus elementos en forma recursiva.

void imprimeArreglo (int arre []){
    int posicion=0;
    while(arre[posicion]!=0){
        printf("\n La posicion en %d, es de %d", posicion, arre[posicion]);
        posicion++;
    }
}

void imprimeArregloValidoVuelta(int arre [], int vals){
    if(vals>0){
        printf("\n La posicion en %d, es de %d", vals, arre[vals-1]);
        imprimeArregloValidoVuelta(arre, vals-1);
    }
}

void imprimeArregloValidoIDA(int arre [], int vals){
    if(vals>0){
        imprimeArregloValidoIDA(arre, vals-1);
        printf("\n La posicion en %d, es de %d", vals, arre[vals-1]);
    }
}

//5. Determinar en forma recursiva si un arreglo es capicúa.

int esArregloCapicua(int arre [], int vals, int inicio){
    int flag =0;
    if(vals>0){
        if(arre[inicio]==arre[vals-1]){
            flag= esArregloCapicua(arre, vals-1, inicio+1);
        }else{
            flag=1;
        }
    }
    return flag;

}

//6. Sumar en forma recursiva los elementos de un arreglo de enteros y retornar el total de la suma.
int sumaRecursiva (int arre[], int validos){
    int suma =0;
    if(validos>=0){
        suma = arre[validos-1] + sumaRecursiva(arre, validos-1);
    }
    return suma;
}

//7. Buscar el menor elemento de un arreglo en forma recursiva.
int menorDelArreglo (int arre[], int validos, int posMenor){
    if(validos==0){
        return posMenor;
    }else{
        if(arre[validos-1]<arre[posMenor]) {
            posMenor = validos - 1;
        }
    }
    return menorDelArreglo(arre, validos-1, posMenor);
}


//8. Buscar el menor elemento de un archivo de números enteros de forma recursiva. (desde el mismo archivo)