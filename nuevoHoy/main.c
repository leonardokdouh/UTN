#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    FILE * nuevo;

    //read binary
    //wb write binary
    //ab
    nuevo = fopen("hola.dat", "wb");

    if(nuevo){
        for(int i=0; i<10; i++){
            fwrite(&i, sizeof (int), 1, nuevo);
        }
    }


    fclose(nuevo);

    int j=0;
    nuevo= fopen("hola.dat", "rb");
    if(nuevo){
        while (fread(&j, sizeof (int), 1, nuevo)>0){
            printf("\nEl numero es:    %d", j);

        }

    }

    fclose(nuevo);


    return 0;
}
