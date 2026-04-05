#include <stdio.h>

int cuadrado(int a);
void cuadrado2(int *numero);
void contenido(int a);
void Invertir(int *a, int *b);
void orden(int *menor, int *mayor);

int main(){
    int a,b,menor,mayor,c,d=5;
    c=cuadrado(d);
    printf("Cuadrado del numero 5:%d",c);

    cuadrado2(&d);
    printf("\nCuadrado del numero 5 usando funcion void:%d",d);

    contenido(d);

    printf("\nIngrese primer valor para invertir: ");
    scanf("%d",&a);
    printf("\nIngrese segundo valor para invertir: ");
    scanf("%d",&b);

    printf("\nAntes de invertir: Variable a:%d. Variable b:%d.",a ,b );
    Invertir(&a,&b);
    printf("\nDespues de invertir: Variable a:%d. Variable b:%d",a ,b );

    printf("\nIngrese valor menor: ");
    scanf("%d",&menor);
    printf("\nIngrese valor mayor: ");
    scanf("%d",&mayor);

    printf("\nAntes de usar funcion para ordenar: Menor:%d. Mayor:%d",menor,mayor);
    orden(&menor,&mayor);
    printf("\nLuego de ordenar: Menor:%d. Mayor:%d",menor,mayor);

    getchar();
    return 0;
}

int cuadrado(int a){
    return (a*a);
}

void cuadrado2(int *numero){
    *numero= (*numero) * (*numero);
}

void contenido(int a){
    printf("\nContenido de la variable d:%d",a);
    printf("\nDireccion de la variable d:%p",&a);
}

void Invertir(int *a, int *b){
    int aux;
    aux=*a;
    *a = *b;
    *b = aux;
}

void orden(int *menor, int *mayor){
    int aux;
    if ((*menor) > (*mayor)){
        aux=*mayor;
        *mayor = *menor;
        *menor = aux;
    }
}