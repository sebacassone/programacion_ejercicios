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
    printf("Introduce un peso: ");
    // Se ocupa -> para asignar valores en peso siendo L de tipo
    // puntero
    scanf("%f", &L -> peso);
    printf("El peso %.2f", L[0].peso);
}
