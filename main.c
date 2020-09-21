#include <stdio.h>
#include <stdlib.h>

int main(){

    char nombre[150];
    unsigned int edad;

    printf("Hello World\n");
    printf("Nombre: ");
    fgets(nombre,sizeof(nombre),stdin);
    printf("Hola %s", nombre);
    printf("Edad: ");
    scanf("%u",&edad);
    printf("Vas a cumplir %u", edad+1);

    return 0;

}




