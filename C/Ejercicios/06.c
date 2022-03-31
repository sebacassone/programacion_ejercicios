#include<stdio.h>

int punto(int A[], int B[], int n){
    int acum = 0;
    int i;
    for(i=0; i<n; i++){
        acum += A[i] * B[i];
    }
    return acum;
}


int main(void){
    int A[] = {
        2,
        5,
        6,
        10,
        12
    };
    int B[] = {
        4,
        6,
        7,
        2,
        9
    };
    printf("El producto punto del arreglo A y el arreglo B es %d", punto(A, B, 5));
}
