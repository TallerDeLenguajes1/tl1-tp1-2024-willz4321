#include <stdio.h>

int main(int argc, char *argv[]) {
    
    //Enunciado A)
    printf("\n\t\t\t\t\t\tHola Mundo\n\n");

    //Enunciado E)
    int variable = 10;

    int *puntero = &variable;

    // Imprime el contenido del puntero
    printf("Contenido del puntero: %d\n", *puntero);

    // Imprime la dirección de memoria almacenada por el puntero
    printf("Dirección de memoria almacenada por el puntero: %p\n", puntero);

    // Imprime la dirección de memoria de la variable
    printf("Dirección de memoria de la variable: %p\n", &variable);

    // Imprime la dirección de memoria del puntero
    printf("Dirección de memoria del puntero: %p\n", &puntero);

    // Imprime el tamaño de memoria utilizado por la variable usando sizeof()
    printf("Tamaño de memoria utilizado por la variable: %lu bytes\n", sizeof(variable));

    return 0;
}
