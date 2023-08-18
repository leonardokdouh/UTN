
#ifndef UTN_DOMICILIO_H
#define UTN_DOMICILIO_H


typedef struct {
    int id;
    char calleNombre [25];
    char calleNumero[6];
    char localidad [25];
    char codPostal [8];
    char provincia [25];
}stDomicilio;

void muestraDomicilio(stDomicilio domicilio);
//Mostrar el domicilio completo
void domicilioToString(stDomicilio domicilio, char s []);
stDomicilio getDomicilio();
stDomicilio cargarUnDomicilio();
char* domicilioToString2(stDomicilio dom);

#endif //UTN_DOMICILIO_H
