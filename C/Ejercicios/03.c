#include<stdio.h>
// Nombre y valor
#define MAX 1000
#define FACTOR 1.3

int main(void){
    // La función sizeof, devuelve el tamaño en bytes que ocupa una variable o algún tipo de dato.
    printf("size int: %d\n",sizeof(MAX));
    printf("valor MAX: %d\n",MAX);

    printf("size FACTOR: %d\n",sizeof(FACTOR));
    printf("valor FACTOR: %f\n",FACTOR);

    printf("size type long double: %d\n",sizeof(long double));
    return 0;
}
