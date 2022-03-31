#include<stdio.h>

int entrada(void){
    /*
    Esta función está encargada de solicitar los elementos del arreglo
    al usuario.
    Esta función no tiene entradas.
    Esta función tiene como salida un arreglo de enteros.
    */
    // Se crea un arreglo de largo 20.
    int A[20];
    // Se piden los elementos del arreglo al usuario
    for(int i = 0; i < 20; i++){
        printf("Ingrese un elemento numero %d: ", i);
        scanf("%d", &A[i]);
    }
    // Retorna A.
    return &A[0];
}

int mayores(int *A, int x){
    // Se declaran variables
    int contador = 0;
    // Se recorre la lista y se cuentan los números mayores a un
    // elemento x
    for(int i = 0; i < 20; i ++){
        if(x < *A + i)
            contador += 1;
    }
    return contador;
}

int promedio(int A[]){
    /*
    Esta función se encarga de obtener el promedio de todos los
    elementos de un arrelo.
    Esta función tiene como entrada un arreglo de enteros.
    Esta función tiene como salida el promedio del arreglo siendo
    de tipo int.
    */
    // Se declaran variables.
    int acum = 0;
    int promedio;
    // Se suman todos los elementos del arreglo
    for(int i = 0; i < 20; i++)
        acum += A[i];
    // Se saca el promedio dividiendo el acumulador por 20.
    promedio = acum / 20;
    // Retorna el promedio de los elementos
    return promedio;
}

int paridad(int A[]){
    /*
    Esta función tiene el propósito de contabilizar la cantidad de
    números pares e impares.
    Esta función tiene como entrada un arreglos de enteros.
    Esta función no tiene salida.
    */
    // Se declaran variables
    int pares = 0;
    int impares = 0;
    // Se recorre la lista
    for(int i = 0; i < 20; i++){
        // Se contabilizan los números pares e impares.
        switch (A[i] % 2){
            case 0:
                pares += 1;
                break;
            default:
                impares += 1;
                break;
        }
    }
    // Salida
    printf("El arreglo tiene %d numeros pares y %d numeros impares",
            pares, impares);
}

int main(void){
    // Se declara un puntero
    int *A, numero, c_mayores;
    // Se obtiene la dirección del primer elemento del arreglo
    *A = entrada();
    // Se pide un elemento
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    c_mayores = mayores(*A, numero);
    // Se imprime la cantidad de números mayores
    printf("La cantidad de números mayores para el numero %d es %d\n", numero, c_mayores);


    return 0;
} 
