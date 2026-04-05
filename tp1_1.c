#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=3, *p;
    p=&a;
    printf("hola mundo");
    printf("\nContenido del puntero: %d",*p);
    printf("\nLa direccion de memoria almacenada por el puntero: %p",p);
    printf("\nLa direccion de memoria de la variable: %p",&a);
    printf("\nLa direccion de memoria del puntero: %p",&p);
    printf("\nEl tamano de memoria utilizado por la variable: %d",sizeof(a));

    getchar();
    return 0;
}