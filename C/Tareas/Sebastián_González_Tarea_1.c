/*
Autor: Sebastián González Cassone
Sección: A-1
Profesor: Mario Inostroza
Descripción del programa: Este programa tiene como entrada un archivo
y entrega la cantidad de caracteres numéricos, minúsculas, mayúsculas,
y otros caracteres.
*/
#include<stdio.h>

// El archivo que se abrirá será variable global
FILE *archivo;

int contador(int *mayusculas, int *minusculas, int *numericos, int *otros){
    // Se inicia variable linea
    char linea;
    // Se comienza a recorrer el archivo
    while(fscanf(archivo, "%c", &linea) != EOF){
        // Se omiten los saltos de linea
        if(linea != '\n'){
            // Se cuentan caracteres númericos
            if('0' <= linea && linea <= '9')
                *numericos += 1;
            // Se cuentan minúsculas
            else if('a' <= linea && linea <= 'z')
                *minusculas += 1;
            // Se cuentan mayúsculas
            else if('A' <= linea && linea <= 'Z')
                *mayusculas += 1;
            // Se cuentan todos los demás caracteres
            else
                *otros += 1;
        }
    }

    return 0;
}

int main(){
    // Se declaran variables
    char nombre_archivo[200];
    int c_mayusculas = 0, c_minusculas = 0, c_numericos = 0, c_otros = 0;

    // Entrada
    printf("Ingrese el nombre del archivo que se leerá: ");
    scanf("%s", &nombre_archivo);

    // Procesamiento
    // Se abre el archivo en modo lectura
    archivo = fopen(nombre_archivo, "r");
    // Se verifica que el archivo se haya abierto correctamente
    if(archivo == NULL){
        printf("Error al abrir el archivo de nombre %s", nombre_archivo);
        return 0;
    }
    // Se llama a la función contador
    contador(&c_mayusculas, &c_minusculas, &c_numericos, &c_otros);
    
    // Se cierra el archivo
    fclose(archivo);

    // Salida
    printf("La cantidad de mayusculas que tiene el archivo es %d,"
    " minusculas %d, caracteres numericos %d, y otros caracteres %d\n", 
    c_mayusculas, c_minusculas, c_numericos, c_otros);
    
    return 0;
}
