#include "domicilio.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void muestraDomicilio(stDomicilio domicilio) {
    printf("\n Id ........: %d", domicilio.id);
    printf("\n Calle ........: %s", domicilio.calleNombre);
    printf("\n Numero ........: %s", domicilio.calleNumero);
    printf("\n Localidad ........: %s", domicilio.localidad);
    printf("\n Provincia ........: %s", domicilio.provincia);
    printf("\n Cod Postal ........: %s", domicilio.codPostal);
}

stDomicilio getDomicilio() {
    stDomicilio dom;
    static int id = 0;
    id++;
    dom.id = id;
    strcpy(dom.calleNombre, "Colon");
    strcpy(dom.calleNumero, "2222");
    strcpy(dom.codPostal, "7600");
    strcpy(dom.localidad, "mardel");
    strcpy(dom.provincia, "buenos aires");
    return dom;
}

void domicilioToString(stDomicilio domicilio, char s[]) {
    //sprintf guarda en la variable lo que esta after la variable.
    sprintf(s, "\n Id: %d  -- Calle: %s  -- Numero: %s -- "
           "Cod Postal: %s  -- Localidad: %s   -- Provincia: %s",
           domicilio.id, domicilio.calleNombre, domicilio.calleNumero,
           domicilio.codPostal, domicilio.localidad,domicilio.localidad);
}

char* domicilioToString2(stDomicilio dom){
    char *s= (char *) malloc(sizeof(char)*200);

    sprintf(s, "\n Id: %d  -- Calle: %s  -- Numero: %s -- "
               "Cod Postal: %s  -- Localidad: %s   -- Provincia: %s",
            dom.id, dom.calleNombre, dom.calleNumero,
            dom.codPostal, dom.localidad,dom.localidad);
    return s;
}