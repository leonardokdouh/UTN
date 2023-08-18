#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "domicilio.h"


void saludo(char name []);


int main(){

    char domicilioEntero[200];
    char* domicilioPuntero= malloc(200);

    stDomicilio domi;
    domi=getDomicilio();
    muestraDomicilio(domi);

    domicilioToString(domi, domicilioEntero);
    domicilioPuntero=domicilioToString2(domi);

    printf("\nDomicilio Entero sin puntero");
    printf("%s", domicilioEntero);

    printf("\nDomicilio Entero con puntero");
    printf("%s", domicilioPuntero);



    /*
    char name [25];
    printf("Ingrese su nombre \n");
    fflush(stdin);
    scanf("%s", name);
    saludo(name);
     */


    return 0;
};

void saludo(char name []){
    printf("\nHello %s", name);
}
