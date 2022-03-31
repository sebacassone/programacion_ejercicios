#include<stdio.h>

int existe(int A[], int x, int n){
    int i;
    for(i=0; i<n; i++){
        if(A[i] == x){
            return 1;
        }
    }
    return 0;
}

int main(void){
    int A[] = {
        1,
        6,
        3,
        8
    };
    if(existe(A, 2, 4)){
        printf("Se encuentra el valor 6");
    } else{
        printf("No se encuentra el valor 6");
    }
}
