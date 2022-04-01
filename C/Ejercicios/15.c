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
    L -> peso = 3.4;
    printf("El peso %.2f", L[0].peso);
}