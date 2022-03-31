#include<stdio.h>
#include<stdlib.h>

int suma(int A[], int n){
    /*
    Esta función se encarga de sumar los elementos de un arreglo A de
    largo n.
    Esta función tiene como entrada A siendo un arreglo de enteros, y n
    siendo de tipo int.
    Tiene como salida acum siendo de tipo int.
    */
    // Suma elementos de un arreglo A de enteros
    int acum = 0;
    // Algoritmo de complejidad n
    for(int i = 0; i < n; i++)
        acum += A[i];
    // Retorna el resultado
    return acum;
}

void declarar_variables_para_suma(void){
    /*
    Esta función está encargada de ejecutar todo lo necesario para
    sumar los elementos de un arreglo.
    Está función no posee entradas, tiene como salida el resultado que
    se imprimirá en consola.
    */
    // Se declara el arreglo
    int arreglo[] = {1, 2, 5};
    // Se obtiene el largo del arreglo
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    // Se declara la variable resultado
    int resultado;
    resultado = suma(arreglo, n);
    // Salida
    printf("La suma de los elementos del arreglo es: %d\n", resultado);
}

int archivo_arreglo(void){
    /*
    Esta función se encarga de leer un archivo con nombre que se le
    solicitará al usuario, tomará los números que se encuentran en
    el archivo y lo guardará en un arreglo.
    Esta función no posee entradas.
    Esta función tiene como salida un arreglo de enteros.
    */
    // Se declaran variables
    FILE *archivo;
    int *arreglo, largo, cantidad, i = 0;
    char nombre[200];
    // Se pide el nombre del archivo y se almacena en nombre
    printf("Ingrese el nombre del archivo: ");
    scanf("%s", &nombre);
    // Se abre el archivo en modo de lectura
    archivo = fopen(nombre, "r");
    // Se verifica que el archivo haya abierto correctamente
    if(archivo == NULL){
        printf("Error al abrir el archivo de nombre %s\n", nombre);
        return 0;
    }
    // Se crea un arreglo
    arreglo = (int *)malloc(sizeof(int) * fscanf(archivo, "%d", &largo));
    // Se recorre el archivo y se guarda en el arreglo
    while(fscanf(archivo,"%d", &cantidad) != EOF){
        arreglo[i] = cantidad;
        i += 1;
    }
    // Se cierra el archivo
    fclose(archivo);
    // Se imprime el arreglo en pantalla
    printf("El arreglo es: {");
    for(int j=0; j < largo; j++){
        if(j != 0)
            printf(", ");
        printf("%d", arreglo[j]);
    }
    printf("}\n");
}

int igualdad_arreglo(int A[], int B[], int largo_A, int largo_B){
    /*
    Esta función tiene el propósito de verfificar que el arreglo A y B
    son iguales, por lo que se verificará el largo de ambos arreglos y
    se comparará elemento por elemento. Si pasa estos filtros significa
    que ambos arreglos son iguales.
    Esta función tiene como entrada el arreglo de enteros A y B,
    largo_A siendo de tipo int, y largo_B siendo de tipo de int.
    Esta función tiene como salida un cero o un uno siendo de tipo int.
    */
    // Verifica el largo del arreglo
    if(largo_A != largo_B)
        return 0;
    // Comienza a verificar elemento por elemento de ambos arreglos
    for(int i = 0; i < largo_A; i ++)
        if(A[i] != B[i])
            return 0;
    return 1;
}

void declarar_variables_comparacion(void){
    /*
    Esta función tiene el propósito de declarar las variables para la
    función igualdad_arreglos,
    Esta función no tiene entrada.
    Esta función tiene como salida un mensaje en consola.
    */
    int A[] = {2, 2, 3};
    int B[] = {1, 2, 3};
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);
    if(igualdad_arreglo(A, B, n, m))
        printf("Los arreglos propuestos son iguales\n");
    else
        printf("Los arreglos son distintos\n");
}

int punto(int A[], int B[], int largo_A, int largo_B){
    /*
    Esta función se encarga de obtener el producto punto de dos
    arreglos.
    Esta función tiene como entrada dos arreglos de enteros A y B,
    largo_A siendo de tipo int, y largo_B siendo de tipo int.
    Tiene como salida el producto punto siendo suma el resultado de
    int.
    */
    // Se declara la variable suma donde se contendrá el resultado
    int suma = 0;
    // Se verifica el largo del arreglo, ya que no se puede hacer el
    // producto punto entre dos vectores distintos.
    if(largo_A != largo_B)
        return 0;
    // Realiza el cálculo del producto punto entre los arreglos.
    for(int i = 0; i < largo_A; i ++)
        suma += A[i] * B[i];
    // Retorna el resultado.
    return suma;
}

void declarar_variables_punto(void){
    /*
    La función tiene el propósito de hacer el producto punto de dos
    arreglos de enteros.
    La función no tiene entradas.
    La función tiene como salida un mensaje en consola.
    */
    // Se declaran variables
    int A[] = {1, 4, 5};
    int B[] = {5, 4, 4};
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);
    // Se verifican que los arreglos sean del mismo largo.
    if(punto(A, B, n, m))
        printf("El producto punto entre los arreglos es %d",
                punto(A, B, n, m));
    else
        printf("Los arreglos no son del mismo largo");
}

int cuadrado(void){
    /*
    Esta función se encarga de elevar un arreglo y dejar su contenido
    al cuadrado.
    Esta función tiene como entrada A siendo una arreglo de entero, y n
    siendo este de tipo int.
    */
    // Se declaran variables (me falto el archivo xd)
    int A[] = {2, 6, 5, 3};
    int n = sizeof(A) / sizeof(A[0]);
    // Recorre la lista, la eleva al cuadrado y lo guarda en la lista
    for(int i = 0; i < n; i ++)
        A[i] *= A[i];
    // Se imprime en consola
    printf("El arreglo al cuadrado es: {");
    for(int i = 0; i < n; i++){
        if(i != 0)
            printf(",");
        printf("%d", A[i]);
    }
    printf("}\n");
    return 0;
}

int main(void){
    // Se declaran variables
    int opcion = 0;
    // Se imprime el menú
    while(opcion != 6){
        printf("Seleccione alguna opcion:\n");
        printf("1. Suma de elementos en un arreglo\n");
        printf("2. Lectura de un archivo y lo almacene en un arreglo\n");
        printf("3. Verificar si dos arreglos de enteros son iguales\n");
        printf("4. Producto punto de dos vectores\n");
        printf("5. Elevar un arreglo al cuadrado\n");
        printf("6. Salir\n");
        // Se almacena la opción
        scanf("%d", &opcion);
        // Se verifica la opción
        switch(opcion){
            case 1:
                declarar_variables_para_suma();
                // Para que no se ejecute el caso siguiente.
                break;
            case 2:
                archivo_arreglo();
                break;
            case 3:
                declarar_variables_comparacion();
                break;
            case 4:
                declarar_variables_punto();
                break;
            case 5:
                cuadrado();
                break;
            case 6:
                break;
            default:
                printf("Opcion no valida\n");
                break;
        }
    }
    return 0;
}
