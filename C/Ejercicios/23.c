#include<stdio.h>
#include<stdlib.h>

typedef struct nodo{
	int info;
	struct nodo *sig;
} nodo;

typedef struct lista{
	nodo *head;
} lista;

typedef struct pila{
	nodo *top;
} pila;

typedef struct cola{
	nodo *inicio;
	nodo *fin;
} cola;

// Para EDL
nodo *crear_nodo(int valor){
	nodo *nuevo_nodo;
	nuevo_nodo = (nodo *)malloc(sizeof(nodo));
	nuevo_nodo -> info = valor;
	nuevo_nodo -> sig = NULL;
	return nuevo_nodo;
}

cola *crear_cola(void){
	cola *nueva_cola;
	nueva_cola = (cola *)malloc(sizeof(cola));
	nueva_cola -> inicio = NULL;
	nueva_cola -> fin = NULL;
	return nueva_cola;
}

lista *crear_lista(void){
	lista *nueva_lista;
	nueva_lista = (lista *)malloc(sizeof(lista));
	nueva_lista -> head = NULL;
	return nueva_lista;
}

pila *crear_pila(void){
    pila *nueva_pila;
    nueva_pila = (pila *)malloc(sizeof(pila));
    nueva_pila -> top = NULL;
    return nueva_pila;
}


// Funciones de Estructuras de Datos lineales
// Para pila
void push(pila *P, int valor){
	nodo *nuevo_nodo, *aux;
	nuevo_nodo = crear_nodo(valor);
	if(P -> top != NULL){
		aux = P -> top;
		P -> top = nuevo_nodo;
		P -> top -> sig = aux;
	}else{
		P -> top = nuevo_nodo;
	}
}

nodo *pop(pila *P){
	nodo *aux;
	if(P -> top != NULL){
		aux = P -> top;
		aux -> sig = NULL;
		P -> top = P -> top -> sig;
		return aux;
	}
}

// Para Cola
void encolar(cola *C, int valor){
	nodo *nuevo_nodo, *aux;
	// Se crea el nodo para agregar a la cola
	nuevo_nodo = crear_nodo(valor);
	// Se encola el nodo
	if(C -> fin != NULL){
		aux = C -> fin;
		C -> fin = nuevo_nodo;
		C -> fin -> sig = aux;
	}else{
		C -> inicio = nuevo_nodo;
		C -> fin = nuevo_nodo;
	}
}

nodo *desencolar(cola *C){
	nodo *aux;
	// Verifica que la cola no esté vacía
	if(C -> inicio != NULL){
		// Se utiliza un auxiliar para retornar el nodo
		aux = C -> inicio;
		aux -> sig = NULL;
		// Se verifica que el nodo de inicio y fin no sean iguales y por lo
		// tanto, al desencolar el nodo se quede sin elementos
		if(C -> inicio -> sig != NULL)
			C -> inicio = C -> inicio -> sig;
		else
			C -> inicio = NULL;
		return aux;
	}
}

// Para lista
void mostrar_lista(lista *L){
    nodo *aux;
    aux = L -> head;
    printf("[");
    // Se recorren los nodos de la lista
    while(aux != NULL){
        if(aux -> sig != NULL){
            printf("%d, ", aux -> info);
        }else{
            printf("%d", aux -> info);
        }
        aux = aux -> sig;
    }
    printf("]\n");
}

void agregar_final(lista *L, nodo *N){
    nodo *aux, *nuevo_nodo;
    if(L -> head != NULL){
        aux = L -> head;
        while(aux -> sig != NULL){
            aux = aux -> sig;
        }
        aux -> sig = N;
    }else{
        L -> head = N;
    }
}

lista *entrada_por_archivo(char *nombre){
    nodo *numero;
	FILE *archivo;
    lista *L;
    int cantidad;
	// Se crea una lista
	L = crear_lista();
	// Se abre el archivo
	archivo = fopen(nombre, "r");
	// Se comprueba que el archivo se abre correctamente
	if(archivo == NULL){
		printf("\nError al abrir el archivo");
		return NULL;
	}else{
		printf("\nArchivo leido\n");
	}
	// Se hace un ciclo para leer los números que están en el archivo
	while(fscanf(archivo, "%d", &cantidad) != EOF){
		numero = crear_nodo(cantidad);
        agregar_final(L, numero);
        mostrar_lista(L);
	}
    return L; 
}

int main(int argc, char *argv[]){
    entrada_por_archivo(argv[1]);
}
