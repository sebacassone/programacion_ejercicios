#include<stdio.h>
#include<stdlib.h>

typedef struct mochila
{
    float peso, division;
    int valor;
} branco;

int main(void){
    branco *L;
    L = (branco *)malloc(sizeof(branco)*10);
    // Se ocupa -> para asignar valores en peso siendo L de tipo
    // puntero
    // L[0] == L (memoria)
    // L[1] == L + 1
    // -> solo se ocupa para punteros
    L[0].peso = 23.4;
    printf("El peso %.2f", L[0].peso);
}
