#include<stdio.h>
#include<time.h>

int recursivo_fibbonacci(int numero){
    /*
    Esta función está encargada de hacer la sucesión de fibonacci hasta
    un número especificado por el usuario de manera recursiva.
    Esta función tiene como entrada numero siendo de tipo int.
    Esta función tiene como salida acumulador siendo de tipo int.
    */
   // Se usan estos casos bases necesarios para utilizar este algoritmo
    if(numero==0)
        return 0;
    else if(numero==1)
        return 1;
    else
        // Llama a la función nuevamente pero con numero-1 y numero-2
        return recursivo_fibbonacci(numero-1)+recursivo_fibbonacci(numero-2);
}

int fibonacci_iterativo(int numero){
    /*
    Esta función está encargada de hacer la sucesión de fibonacci hasta
    un número especificado por el usuario de manera iterativa.
    Esta función tiene como entrada numero siendo de tipo int.
    Esta función tiene como salida acumulador siendo de tipo int.
    */
    // Usa los dos primeros casos bases debido que para estos números
    // la complejidad del algoritmo es de orden constante
    if(numero == 0)
        return 0;
    else if(numero == 1)
        return 1;
    else{
        int acumulador = 0;
        int caso_base_0 = 0;
        int caso_base_1 = 1;
        // Se hace una suma, se acumula y se cambian de posicion los
        // numeros
        for(int i = 0; i < numero; i ++){
            acumulador = caso_base_0 + caso_base_1;
            caso_base_1 = caso_base_0;
            caso_base_0 = acumulador;
        }
        // Retorna el resultado
        return acumulador;
    }
}

int main(){
    /*
    Esta función se encarga de hacer la sucesión de fibonacci hasta
    un número especificado por el usuario.
    Esta función no posee entradas.
    Esta función tiene como salida el resultado que se imprimirá en
    consola.
    */
    // Se declara una variable de tipo int
    int numero;
    // Se pide el número al usuario
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    // Se obtiene el tiempo inicial
    clock_t tiempo_inicial = clock();
    // Se llama a la función recursiva
    int resultado_recursivo = recursivo_fibbonacci(numero);
    // Se obtiene el tiempo final
    clock_t tiempo_final = clock();
    // Se obtiene el tiempo total
    double tiempo_total = (double)(tiempo_final - tiempo_inicial) / CLOCKS_PER_SEC;
    // Se imprime el resultado
    printf("El resultado de la sucesión de fibonacci es: %d\n", resultado_recursivo);
    // Se imprime el tiempo total
    printf("El tiempo total que tardó en ejecutar la función recursiva fue: %f\n", tiempo_total);
    // Se obtiene el tiempo inicial
    tiempo_inicial = clock();
    // Se llama a la función iterativa
    int resultado_iterativo = fibonacci_iterativo(numero);
    // Se obtiene el tiempo final
    tiempo_final = clock();
    // Se obtiene el tiempo total
    tiempo_total = (double)(tiempo_final - tiempo_inicial) / CLOCKS_PER_SEC;
    // Se imprime el resultado
    printf("El resultado de la sucesión de fibonacci es: %d\n", resultado_iterativo);
    // Se imprime el tiempo total
    printf("El tiempo total que tardó en ejecutar la función iterativa fue: %f\n", tiempo_total);
    return 0;
}
