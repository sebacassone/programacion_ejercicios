#include<stdio.h>

typedef struct rgb{
    int *colores;
    int *posicion;
}pixel;

pixel* crear_pixel(int numero){
    // Se declara variable tipo estructura
    pixel *nuevo_pixel;
    // Se asigna espacio en memoria para la estructura
    nuevo_pixel = (pixel *)malloc(sizeof(pixel));
    if(numero){
        // Se le pide los datos al usuario
        printf("Ingrese los valores para x");
        scanf("%f", &nuevo_pixel -> colores);
        printf("Ingrese los valores para y");
        scanf("%f", &nuevo_pixel -> posicion);
    }
    // Retorna el punto
    return nuevo_pixel;   
}

int main(void){
    return 0;
}