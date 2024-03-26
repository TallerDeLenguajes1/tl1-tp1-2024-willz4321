#include <stdio.h>

int main()
{
    // apartado E)
    printf("Hola mundo");

    // apartado F)

    int variable = 10;
    int *puntero;

    puntero = &variable;

    printf("contenido del puntero", (void *)puntero);
    printf("dirección de memoria almacenada por el puntero", (void *)variable);
    printf("dirección de memoria de la variable", );
}