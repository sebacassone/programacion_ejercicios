#include<stdio.h>
#include<stdlib.h>

// ########################  TDA ######################################

typedef struct grafo{
    int n; // numero de vertices
    int m; // numero de aristas
    int **matriz; // matriz de adyacencia
} grafo;

typedef struct nodo{
    int dato; // dato del nodo
    struct nodo *sig; // puntero al siguiente nodo
} nodo;

typedef struct lista{
    nodo *inicio; // puntero al primer nodo
    nodo *fin; // puntero al ultimo nodo
} lista;

typedef struct pila{
    nodo *inicio; // puntero al primer nodo
} pila;

typedef struct cola{
    nodo *inicio; // puntero al primer nodo
    nodo *fin; // puntero al ultimo nodo
} cola;

//######## Funciones Principales para los TDA Lineales###########

nodo *crear_nodo(){
    nodo *n = (nodo *)malloc(sizeof(nodo));
    n->sig = NULL;
    return n;
}

lista *crear_lista(){
    lista *l = (lista *)malloc(sizeof(lista));
    l->inicio = NULL;
    l->fin = NULL;
    return l;
}

nodo *eliminar_inicio_lista(lista *l){
    nodo *aux = l->inicio;
    // si la lista esta vacia
    if(l->inicio != NULL){
        l->inicio = l->inicio->sig;
        // si la lista tiene un solo nodo
        if(l->inicio == NULL)
            l->fin = NULL;
    }
    return aux;
}

nodo *eliminar_final_lista(lista *l){
    nodo *aux = l->fin;
    if(l->fin != NULL){
        // si la lista tiene un solo nodo
        if(l->inicio == l->fin){
            l->inicio = NULL;
            l->fin = NULL;
        }
        else{
            nodo *aux2 = l->inicio;
            // busco el penultimo nodo
            while(aux2->sig != l->fin){
                aux2 = aux2->sig;
            }
            // elimino el ultimo nodo
            l->fin = aux2;
            // elimino el puntero al siguiente nodo
            l->fin->sig = NULL;
        }
    }
    return aux;
}

lista *agregar_inicio_lista(lista *l, int dato){
    // creo el nodo
    nodo *nuevo = (nodo *)malloc(sizeof(nodo));
    // 
    nuevo->dato = dato;
    nuevo->sig = l->inicio;
    l->inicio = nuevo;
    if(l->fin == NULL)
        l->fin = nuevo;
    return l;
}

lista *agregar_final_lista(lista *l, int dato){
    nodo *nuevo = (nodo *)malloc(sizeof(nodo));
    nuevo->dato = dato;
    nuevo->sig = NULL;
    if(l->inicio == NULL){
        l->inicio = nuevo;
        l->fin = nuevo;
    }
    else{
        l->fin->sig = nuevo;
        l->fin = nuevo;
    }
    return l;
}

cola *crear_cola(){
    cola *c = (cola *)malloc(sizeof(cola));
    c->inicio = NULL;
    c->fin = NULL;
    return c;
}

nodo *desencolar(cola *c){
    nodo *aux = c->inicio;
    if(c->inicio != NULL){
        c->inicio = c->inicio->sig;
        if(c->inicio == NULL)
            c->fin = NULL;
    }
    return aux;
}

cola *encolar(cola *c, nodo *n){
    if(c->inicio == NULL){
        c->inicio = n;
        c->fin = n;
    }
    else{
        c->fin->sig = n;
        c->fin = n;
    }
    return c;
}

pila *crear_pila(){
    pila *p = (pila *)malloc(sizeof(pila));
    p->inicio = NULL;
    return p;
}

nodo *pop(pila *p){
    nodo *aux = p->inicio;
    if(p->inicio != NULL){
        p->inicio = p->inicio->sig;
    }
    return aux;
}

pila *push(pila *p, nodo *n){
    if(p->inicio == NULL){
        p->inicio = n;
    }
    else{
        n->sig = p->inicio;
        p->inicio = n;
    }
    return p;
}

// ########################  Funciones para el TDA Grafo ######################################

