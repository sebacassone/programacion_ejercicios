#include <stdio.h>

int invertir(int R[], int n){
    /*
    Esta función se encarga de invertir un arreglo.
    La función tiene como entrada R siendo de tipo int.
    Tiene como salida R siendo de tipo int.
    */
    int i;
    int temp;
    for (i = 0; i < n / 2; i++){
        temp = R[i];
        R[i] = R[n - i - 1];
        R[n - i - 1] = temp;
    }
    return R;
}

int operaciones(int R[], int n){
    int serie_de_numeros[] = {
        2,
        3,
        4,
        5,
        6,
        7,
        2,
        3,
        4,
        5,
        6,
        7
    };
    int acum = 0;
    // Se procede a multiplicar cada número
    for(int i=0; i<n; i++){
        R[i] *= serie_de_numeros[i];
        acum += R[i];
    }

    // Se divide la suma
    int primer_resultado = acum / 11;
    primer_resultado *= 11;

    // Se resta
    acum = valorAbsoluto(acum - primer_resultado);

    // Se vuelve a restar
    acum = 11 - acum;

    return acum;    
}

int len(int A[]){
    int resultado = sizeof(A) / sizeof(A[0]);
    return resultado;
}

double valorAbsoluto(double numero){
    if (numero < 0){
        return numero * -1;
    }
    return numero;
}


int main(void){
    int rut;
    printf("Ingrese un RUT sin puntos ni guion, con el numero verificador a comprobar: ");
    scanf("%s", rut);
    int codigo_a_verificar = len(rut);

    return 0;
}
