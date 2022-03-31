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
    scanf("%f", &L -> peso);
    printf("El peso %.2f", L[0].peso);
}
