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

    // Se obtiene n
    int n = numero();

    // Se inicia el bucle
    for (int i = 0; i <= n; i += 1){
        acum += i;
    }

    // Salida
    printf("El valor de acum es: %d", acum);

    return 0;
}
