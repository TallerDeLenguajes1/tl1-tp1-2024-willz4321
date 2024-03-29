#include<stdio.h>
//Funciones
int elevadoAlCuadra(int n);
void cuadradoVoid(int n);
void memoriaDireccion(int n);
void invertir(int n,int m);
void orden(int a,int b);

int main(int argc, char const *argv[])
{

    int n, m;
   //Apartado A)
    printf("\n\t\tIngrese dos valores!");
     printf("\n\nIngrese el valor de 'n' : ");
        scanf("%d", &n);

    printf("\n\nIngrese el valor de 'm' : ");
    scanf("%d", &m);

    printf("\nEl cuadrado de %d es: %d", n, elevadoAlCuadra(n));
     
    //Aparatado B)
    cuadradoVoid(n); 

    //Aparatado C)
    memoriaDireccion(n);

    //Aparatado D)
    invertir(n,m);

    //Aparatado E)
    orden(m,n);

    return 0;
}

int elevadoAlCuadra(int n){
    return (n*n);
}
void cuadradoVoid(int n){
      printf("\n\nEl Cuadrado de %d es: %d", n, n*n);
}
void memoriaDireccion(int n){
    printf("\n\nDirección de memoria de la variable: %p\n", &n);
    printf("Contenido de la variable: %d\n", n);
}
void invertir(int n,int m){
     int camb=0;
     printf("\n\nLas variables a invertir son n=%d y m=%d", n,m);

     camb=m;
     m=n;
     n=camb;

     printf("\nNuevo valor de n: %d", n);
     printf("\nNuevo valor de m: %d", m);
}
void orden(int a,int b) {
    
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
        printf("\n\nSe realizo un cambio!!!");
    }
  printf("\n\nEl menor valor A es: %d\nEl mayor valor B es: %d ",a,b);  
}