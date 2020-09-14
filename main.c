#include <stdio.h>
#include <stdlib.h>

int main(){

    char nombre[150];

    printf("Hello World\n");
    printf("Nombre:  ");
    fgets(nombre,sizeof(nombre),stdin);
    printf("Hola %s", nombre);

    return 0;

}




