#include <stdio.h>

int numero(void){
    // Se inicializa variable n
    int n;
    // Se pide número
    printf("Introduce un número: ");
    scanf("%d", &n);

    return n;
}

int main(void){
    // Se inicializa variable acum
    int acum = 0;
    // Se inicializa variable i
    int i = 0;

    // Se obtiene n
    int n = numero();

    // Se inicia el bucle
    while(i <= n){
        acum += i;
        i += 1;
    }

    // Salida
    printf("El valor de acum es: %d\n", acum);

    return 0;
}
