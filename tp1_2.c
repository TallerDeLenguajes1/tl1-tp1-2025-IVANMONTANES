#include <stdio.h>

int retornarCuadrado(int n);
void retornarCuadradoVoid(int *n);
void mostrarDireccionContenido(int *n);
void invertir(int *a,int *b);
void orden(int *a, int *b);
int main(){
    int n, *puntero_n = &n;
    printf("se obtendra el cuadrado de un numero ingresado por el usuario\n");
    printf("ingrese un numero:");
    fflush(stdin);
    scanf("%d",&n);
    //punto a//
    printf("----------PUNTO A---------\n");
    printf("resultado funcion retornarCuadrado: %d\n",retornarCuadrado(n));
    //punto b//
    printf("----------PUNTO B---------\n");
    retornarCuadradoVoid(puntero_n);
    printf("resultado funcion retornarCuadradoVoid: %d\n",*puntero_n);
    //punto c//
    printf("----------PUNTO C---------\n");
    mostrarDireccionContenido(puntero_n);
    //punto d//
    printf("----------PUNTO D---------\n");
    printf("se invertiran los valores de a y b\n");
    int a, b, *puntero_a = &a, *puntero_b = &b;
    printf("ingrese el valor de a:");
    fflush(stdin);
    scanf("%d",&a);
    printf("ingrese el valor de b:");
    fflush(stdin);
    scanf("%d",&b);
    invertir(puntero_a,puntero_b);
    printf("resultado de la funcion invertir: a = %d, b = %d\n",a,b);
    //punto e//
    printf("----------PUNTO E---------\n");
    printf("se retornara el valor mas chico ingresado en a y el mas grande en b\n");
    printf("ingrese el valor de a:");
    fflush(stdin);
    scanf("%d",&a);
    printf("ingrese el valor de b:");
    fflush(stdin);
    scanf("%d",&b);
    orden(puntero_a,puntero_b);
    printf("resultado de la funcion orden: a = %d, b = %d\n",*puntero_a,*puntero_b);
    //punto f//
    printf("----------PUNTO F---------\n");
    printf("se mostrara la direccion de memoria y el contenido de las variables a y b\n");
    printf("ingrese un par de valores de la forma: a,b:");
    fflush(stdin);
    scanf("%d,%d",&a,&b);
    mostrarDireccionContenido(puntero_a);
    mostrarDireccionContenido(puntero_b);
    return 0;
}

int retornarCuadrado(int n)
{
    return (n * n);
}

void retornarCuadradoVoid(int *n)
{
    *n = (*n) * (*n);
}

void mostrarDireccionContenido(int *n)
{
    printf("direccion de memoria de la variable: %p\n",n);
    printf("contenido de la variable: %d\n",*n);
}

void invertir(int *a,int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b)
{
    int aux;
    if(*a > *b){
        aux = *a;
        *a = *b;
        *b = aux;
    }
}