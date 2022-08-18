/*
Este programa tiene el propósito de identificar si
todos los elementos de una pila son positivos.
*/
#include<stdio.h>

typedef struct nodo{
    int info;
    nodo *next;
} nodo;

typedef struct stack{
    nodo *top;
} stack;

int positivos(stack *c){
    // Se crea una variable auxiliar
    stack *aux;
    // Se verifica si la pila está vacía
    if(c -> top == NULL){
        printf("La pila está vacía");
    }
    // Se crea un nodo para aux
    aux = c;
    // Se hace un ciclo hasta el primer elemento
    // de abajo
    while(aux -> top -> next != NULL){
        // Se verifica que el elemento de arriba
        // sea positivo
        if(aux -> top -> info < 0){
            return 0;
        }
        pop(aux);
    }
    // Si sale del ciclo es de tipo entero
    return 1;
}

stack* pop(stack *c){
    stack *aux;
    aux = c;

    // Se retorna la pila con el elemento eliminado
    return c;
}

nodo* crear_nodo(){
    // Se declara variable nuevo
    stack *nuevo;
    // Se asigna memoria de manera dinamica a nuevo
    nuevo = (nodo *)malloc(sizeof(int) + sizeof(nodo *));
    // Se le asignan valores por defecto
    nuevo -> top = NULL;
    // Retorna el nuevo nodo
    return nuevo;
}

int main(void){
    return 0;
}
