#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct plano{
    float x, y, z;
    int largo;
} cartesiano_3d;

cartesiano_3d* crear_punto(int numero){
    // Se declara variable tipo estructura
    cartesiano_3d *nuevo_punto;
    // Se asigna espacio en memoria para la estructura
    nuevo_punto = (cartesiano_3d *)malloc(sizeof(cartesiano_3d));
    if(numero){
        // Se le pide los datos al usuario
        printf("Ingrese los valores para x: ");
        scanf("%f", &nuevo_punto -> x);
        printf("Ingrese los valores para y: ");
        scanf("%f", &nuevo_punto -> y);
        printf("Ingrese los valores para z: ");
        scanf("%f", &nuevo_punto -> z);
    }
    // Se le asigna el largo del arreglo
    nuevo_punto -> largo = 3;
    // Retorna el punto
    return nuevo_punto;    
}

double distancia(cartesiano_3d *punto){
    // Para calcular la distancia se sacará la norma del punto.
    float c_x = punto -> x;
    float c_y = punto -> y;
    float c_z = punto -> z;
    double d = sqrt(c_x * c_x + c_y * c_y + c_z * c_z);
    return d;
}

void imprimir_punto(cartesiano_3d *punto){
    float c_x = punto -> x;
    float c_y = punto -> y;
    float c_z = punto -> z;
    // Se imprime por consola el punto
    printf("El punto es: (%f; %f; %f)\n", c_x, c_y, c_z);
}

cartesiano_3d* punto_medio(cartesiano_3d *punto){
    // Se crean variables
    cartesiano_3d *nuevo_punto;
    cartesiano_3d *punto_2;
    // Se crea el espacio en memoria para el nuevo punto 3d
    punto_2 = crear_punto(1);
    nuevo_punto = crear_punto(0);
    // Se obtiene el punto medio y se guarda el
    // resultado en nuevo_punto
    nuevo_punto -> x = ((punto -> x) + (punto_2 -> x)) / 2;
    nuevo_punto -> y = ((punto -> y) + (punto_2 -> y)) / 2;
    nuevo_punto -> z = ((punto -> z) + (punto_2 -> z)) / 2;
    // Retorna el punto medio
    return nuevo_punto;
}

cartesiano_3d* despalzar_punto(cartesiano_3d *punto){
    float d_x, d_y, d_z;
    printf("Cuanto desea desplazar el punto en x: ");
    scanf("%f", &d_x);
    printf("Cuanto desea desplazar el punto en y: ");
    scanf("%f", &d_y);
    printf("Cuanto desea desplazar el punto en z: ");
    scanf("%f", &d_z);
    punto -> x += d_x;
    punto -> y += d_y;
    punto -> z += d_z;
    return punto;
}

int main(void){
    cartesiano_3d *punto, *resultado_2;
    int opcion;
    double resultado_1;
    punto = crear_punto(1);
    while(opcion != 5){
        printf("Que desea hacer: \n");
        printf("1- Obtener la distancia al origen\n");
        printf("2- Imprimir el punto\n");
        printf("3- Obtener punto medio\n");
        printf("4- Desplazar el punto\n");
        printf("5- Salir\n");
        scanf("%d", &opcion);
        switch(opcion){
        case 1:
            resultado_1 = distancia(punto);
            printf("La distancia es: %lf\n", resultado_1);
            break;
        case 2:
            imprimir_punto(punto);
            break;
        case 3:
            resultado_2 = punto_medio(punto);
            imprimir_punto(resultado_2);
            break;
        case 4:
            resultado_2 = despalzar_punto(punto);
            imprimir_punto(resultado_2);
            break;
        case 5:
            break;
        default:
            printf("No es una opcion válida");
            break;
        }
    }
    return 0;
}
