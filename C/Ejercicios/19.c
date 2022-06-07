#include<stdio.h>
#include<stdlib.h>

typedef struct cola{
    nodo *inicio;
    nodo *fin;
} cola;

typedef struct nodo{
    int info;
    nodo *next;
} nodo;

cola *crearcola(){
    cola *c; 
    c = (cola *)malloc(sizeof(nodo) * 2);
    c -> inicio = NULL;
    c -> fin = NULL;
    return c;
}

cola *encolar(cola *c, int dato){
    cola *nuevo_nodo;
    nuevo_nodo = crear_nodo(dato);
    if(!vacio(c)){
        c -> fin -> next = nuevo_nodo;
    }
    c -> fin = nuevo_nodo;
}

cola *desencolar(cola *c){
    if(!vacio(c)){
        c -> inicio = c -> inicio -> next;
    }
}

nodo *crear_nodo(int valor){
    nodo *nuevo;
    nuevo = (nodo *)malloc(sizeof(nodo) + sizeof(int));
    nuevo -> info = valor;
    nuevo -> next = NULL;
    return nuevo;
}

int main(void){
    return 0;
}
