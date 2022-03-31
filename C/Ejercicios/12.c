#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Para entenderlo el struct es como una plantilla para cada variable
struct persona_1{
    char nombre[100];
    int edad;
    float altura;
};
int cantidad = 0;

// EL tipo de dato de salida se debe a que la función malloc devuelve
// la posición del primer elemento del espacio de memoria dinámico
// creado.
struct persona_1 * entrada(){
    // Se crea una variable de tipo struct persona
    struct persona_1 *L;
    // Se pide la cantidad de personas que se ingresará
    printf("Ingrese la cantidad de individuos a ingresar: ");
    scanf("%d", &cantidad);
    // Se crea un bloque de memoria y devuelve el puntero hacia el
    // primer elemento
    L = (struct persona_1 *)malloc(sizeof(struct persona_1) * cantidad);
    // Comienza a almacenar los datos en L
    for(int i = 0; i < cantidad; i++){
        printf("Ingrese un nombre: ");
        scanf("%s", (L + i) -> nombre);
        printf("Ingrese una edad: ");
        scanf("%d", &(L + i) -> edad);
        printf("Ingrese una altura: ");
        scanf("%f", &(L + i) -> altura);
    }
    return L;
}

int buscar(struct persona_1 *L, char *nombre_b){
    // Recorre la lista de arreglos
    for(int i = 0; i < cantidad; i++){
        if(strcmp((L + i) -> nombre, nombre_b) == 0){
            return 1;
        }
    }
    printf("No se encontró");
    return 0;
}

int main(void){
    struct persona_1 *L;
    L = entrada();
    printf("La edad de la persona es %d, la altura es %f, el nombre es %s", L[0].edad, L[0].altura, L[0].nombre);
    return 0;
}
