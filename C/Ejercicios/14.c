#include<stdio.h>
#include<stdlib.h>

// Se declara una estructura
typedef struct Matriz{
    int **M;
    int n, m;
} MAT;

int n, m;

MAT *leer_archivo(void){
    // Se declaran variables
    FILE *ARCHIVO;
    char nombre[200], linea;
    MAT *Matriz;
    int aux;
    // Se pide el nombre del archivo
    printf("Ingrese el nombre del archivo: ");
    scanf("%s", nombre);
    // Se abre el archivo
    ARCHIVO = fopen(nombre, "r");
    // Se recorre la primera linea del archivo para obtener las
    // dimensiones
    fscanf(ARCHIVO, "%d %d", &n, &m);
    // Se crea el espacio para matriz
    Matriz = crear_matriz();
    // Se le da valores a la matriz
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; i++){
            fscanf(ARCHIVO, "%d", &aux);
            (*Matriz).M[i][j] = aux;
        }
    }
    // Se cierra el archivo
    fclose(ARCHIVO);
    return Matriz;
}

MAT *crear_matriz(void){
    // Se declara variable
    MAT *nuevo;
    // Se crea un nuevo espacio de memoria de forma dinámica para la estructura.
    nuevo = (MAT *)malloc(sizeof(MAT));
    // Se asigna las dimensiones de la matriz a la estructura apuntada por nuevo
    (*nuevo).n = n; // Fila
    (*nuevo).m = m; // Columna
    // Se asigna dinamicamente espacio de memoria dentro de M que son punteros que apuntarán a las filas de la matriz.
    (*nuevo).M = (int **)malloc(sizeof(int *) * n);
    // Se recorre el arreglo de punteros creados para crear así un espacio en memoria para cada fila siendo de
    // largo de las columnas
    for(int i = 0; i < n; i ++)
        (*nuevo).M[i] = (int *)malloc(sizeof(int) * m);
    // Se retorna nuevo.
    return nuevo;
}

int imprimir_matriz(MAT A){
    /*
    Esta función está encargada de imprimir la matriz.
    Tiene como entrada la matriz siendo de tipo MAT.
    */
    printf("\n");
    for(int i = 0; i < A.n; i++){
        for(int j = 0; j < A.m; j ++){
            if(A.M[i][j] != A.m - 1)
                printf("%d ", A.M[i][j]);
            else
                printf("%d", A.M[i][j]);
        }
        printf("\n");
    }
    return 1;
}

MAT *suma(MAT A, MAT B){
    // Se declara variable donde contendrá el resultado
    MAT *C;
    // Verifica las dimensiones de las matrices
    if((A.n != B.n) && (A.m != B.m)){
        printf("Las matrices son de distintas dimensiones");
        return NULL;
    }
    // Se crea espacio en memoria para la matriz C
    C = crear_matriz();
    // Si falla es por que no queda espacio en la memoria
    if(C == NULL){
        printf("No se puedo asignar un espacio en memoria");
        return NULL;
    }
    // Hace la suma de las matrices.
    for(int i = 0; i < (*C).n; i ++){
        for(int j = 0; j < (*C).m; j ++)
            (*C).M[i][j] = A.M[i][j] + B.M[i][j];
    }
}

MAT *multiplicacion(MAT A, MAT B){
    // Se declara variable donde contendrá el resultado
    MAT *C;
    // Verifica las dimensiones de las matrices
    if((A.m != B.n)){
        printf("Las matrices no pueden ser multiplicadas");
        return NULL;
    }
    // Se crea espacio en memoria para la matriz C
    C = crear_matriz();
    // Si falla es por que no queda espacio en la memoria
    if(C == NULL){
        printf("No se puedo asignar un espacio en memoria");
        return NULL;
    }
    // Hace la suma de las matrices.
    for(int i = 0; i < A.n; i++){
        for(int j = 0; j < B.m; j++){
            (*C).M[i][j] = A.M[i][0] * B.M[0][j];
            for(int k = 1; k < B.n; k++){
                (*C).M[i][j] = A.M[i][k] * B.M[k][j] + (*C).M[i][j];
            }
        }
    }
    return C;
}


int main(void){
    return 0;
}