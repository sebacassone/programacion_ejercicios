#include<stdio.h>

void potencia(double *a, double *b, double *resultado){
    /*
    Esta función está encargada de hacer una potencia a**b y guardar el
    resultado en acum para devolverla a la función principal.
    Esta función tiene como entrada dos punteros a y b que apuntan a
    las variables originales.
    Esta función tiene como salida acum siendo de tipo int.
    */
    // Se declara variable
    double acum = 1;
    // Calcula la potencia
    for(int i = 0; i < *b; i ++){
        acum *= (*a);
    }
    *resultado = acum;
}

void division(double *a, double *b, double *c){
    /*
    Esta función está encargada de hacer una division y guarda el
    resultado en c.
    Esta función tiene como entrada punteros de a, b y c.
    Esta función no tiene salidas.
    */
    *a = (*a) / (*b);
}

void menor_n(double *a, double *b, int *menor){
    /*
    Esta función está encargada de verificar cual es el menor número.
    Esta función tiene como entrada punteros de a, b, y menor.
    Esta función no tiene salida
    */
   *menor = *a;
    if(*a > *b)
        *menor = *b;
}

void fibonacci(int *numero, double *resultado){
    /*
    Esta función está encargada de hacer la sucesión de fibonacci hasta
    un número especificado por el usuario de manera iterativa.
    Esta función tiene como entrada numero siendo de tipo int.
    Esta función tiene como salida acumulador siendo de tipo int.
    */
    // Usa los dos primeros casos bases debido que para estos números
    // la complejidad del algoritmo es de orden constante
    if(*numero == 0)
        *resultado = 0;
    else if(*numero == 1)
        *resultado = 1;
    else{
        int acumulador = 0;
        int caso_base_0 = 0;
        int caso_base_1 = 1;
        // Se hace una suma, se acumula y se cambian de posicion los
        // numeros
        for(int i = 0; i < *numero; i ++){
            acumulador = caso_base_0 + caso_base_1;
            caso_base_1 = caso_base_0;
            caso_base_0 = acumulador;
        }
        *resultado = acumulador;
    }
    
}

int main(){
    // Se declaran variables
    int opcion;
    int condicion;
    int menor;
    double a;
    double b;
    double resultado = 0;
    // Se imprime un menú al usuario.
    printf("Seleccione alguna opcion:\n");
    printf("1. Hace una potencia a**b enteros\n");
    printf("2. Hace una division de flotantes\n");
    printf("3. El valor de la sucesion de fibonacci para el numero menor\n");
    printf("4. Salir\n");
    scanf("%d", &opcion);

    switch (opcion){
    case 1:
        // Se llama la función potencia
        // Se piden dos números
        printf("Escribe un primer número: ");
        scanf("%lf", &a);
        printf("Escribe un segundo número: ");
        scanf("%lf", &b);
        // Se llama a la función
        potencia(&a, &b, &resultado);
        // Se obtiene la parte entera. Si da cero es por que es entero.
        condicion = resultado;
        // Se verifica si el número es entero o no
        if(resultado - condicion)
            printf("%.4lf\n", resultado);
        else
            printf("%.0lf\n", resultado);
    case 2:
        // Se piden dos números
        printf("Escribe un primer número: ");
        scanf("%lf", &a);
        printf("Escribe un segundo número: ");
        scanf("%lf", &b);
        // Se llama a la función
        division(&a, &b, &resultado);
        // Se imprime el resultado de la division
        printf("%.4lf", resultado);
    case 3:
        // Se piden dos números
        printf("Escribe un primer número: ");
        scanf("%lf", &a);
        printf("Escribe un segundo número: ");
        scanf("%lf", &b);
        // Se obtiene la parte entera. Si da cero es por que es entero.
        condicion = a;
        // Se verifica si el número es entero o no
        if(a - condicion)
            printf("El valor de a no es entero\n");
        else
            condicion = b;
            if(b - condicion)
                printf("El valor de b no es entero\n");
            else
                menor_n(&a, &b, &menor);
                fibonacci(&menor, &resultado);
                printf("La posición del menor número en la sucesión de fibonacci es %.0lf\n", resultado); 
    case 4:
        break;
    default:
        printf("La opción introducida no es válida");
    }
    
}