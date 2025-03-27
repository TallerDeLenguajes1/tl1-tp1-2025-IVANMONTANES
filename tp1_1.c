#include <stdio.h>

int main(){
    int numero = 12, *puntero = &numero;
    printf("contenido del puntero %d\n",*puntero);
    printf("direccion de memoria almacenado por el puntero %p\n",puntero);
    printf("direccion de memoria de la variable %p\n",&numero);
    printf("direccion de memoria del puntero: %p\n",&puntero);
    printf("tamaño de memoria utilizada por la variable numero: %d\n",sizeof(numero));
    return 0;
}