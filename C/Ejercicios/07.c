#include<stdio.h>

void prom(int A[], int n){
    // Se declaran variables
    int i;
    int mayor = A[0];
    int menor = A[0];
    int prom = A[0];
    for(i=1; i<n; i++){
        // Se determina el número mayor del arreglo
        if(A[i] > mayor)
            mayor = A[i];
        else
            menor = A[i];
        prom += A[i];
    }
    prom = prom / 2;

    printf("El número mayor del arreglo es %d, el menor es %d,"
    " y el promedio es %d\n", mayor, menor, prom);
}

int main(void){
    int A[] = {
        2,
        5,
        1,
        8
    };
    int largo = 4;
    prom(A, largo);
}
