#include<stdio.h>
#include<stdlib.h>

typedef struct nodo{
	int info;
	struct nodo *sig;
} nodo;

typedef struct lista{
	nodo *inicio;
	nodo *fin;
} lista;

typedef struct pila{
	nodo *top;
} pila;

typedef struct cola{
	nodo *inicio;
	nodo *fin;
} cola;

typedef struct grafo{
	int vertice;
	int arista;
	int **matriz;
	lista *vertices;
} grafo;

// Crear espacios en memoria
// Para el grafo
int **crear_matriz(grafo *grafo_general){
	int **nueva_matriz, *fila;
	// Se crea espacio en memoria para la matriz
	nueva_matriz = (int **)malloc(sizeof(int *) * (grafo_general -> vertice));
	// Se crea espacio en memoria para cada fila
	for(int i = 0; i < (grafo_general -> vertice); i++){
		fila = (int *)malloc(sizeof(int) * (grafo_general -> vertice));
		// Se asignan valores iniciales para fila y columna
		for(int j = 0; j < (grafo_general -> vertice); j++)
			fila[j] = 0;
		// Se agrega cada fila a la matriz
		nueva_matriz[i] = fila;
	}
	return nueva_matriz;
}

grafo *crear_grafo(void){
	grafo *nuevo_grafo;
	// Se crea en memoria espacio para los vertices y aristas
	// Se asignan valores por defecto
	nuevo_grafo = (grafo *)malloc(sizeof(grafo));
	nuevo_grafo -> vertice = 0;
	nuevo_grafo -> arista = 0;
	nuevo_grafo -> matriz = NULL;
	nuevo_grafo -> vertices = NULL;
	return nuevo_grafo;
}

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
	nueva_lista -> inicio = NULL;
	nueva_lista -> fin = NULL;
	return nueva_lista;
}

// Para ordenar
void quicksort(lista *L){
	int i, j, pivote, aux;
	nodo *izq, *der, *piv;
	izq = L -> inicio;
	der = L -> fin;
	piv = L -> inicio;
	pivote = piv -> info;
	while(izq != der){
		while(izq -> info <= pivote && izq != der)
			izq = izq -> sig;
		while(der -> info > pivote && der != izq)
			der = der -> sig;
		if(izq != der){
			aux = izq -> info;
			izq -> info = der -> info;
			der -> info = aux;
		}
	}
	piv -> info = der -> info;
	der -> info = pivote;
	if(izq != L -> inicio)
		quicksort(L);
	if(der != L -> fin)
		quicksort(L);
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
void agregar_final_lista(lista *L, int valor){
	nodo *nuevo_nodo, *aux;
	// Se crea el nodo para agregar a la lista
	nuevo_nodo = crear_nodo(valor);
	if(L -> fin != NULL){
		aux = L -> fin;
		L -> fin = nuevo_nodo;
		L -> fin -> sig = aux;
	}else{
		L -> inicio = nuevo_nodo;
		L -> fin = nuevo_nodo;
	}
}

void agregar_inicio_lista(lista *L, int valor){
	nodo *nuevo_nodo, *aux;
	// Se crea el nodo para agregar a la lista
	nuevo_nodo = crear_nodo(valor);
	if(L -> inicio != NULL){
		aux = L -> inicio;
		L -> inicio = nuevo_nodo;
		L -> inicio -> sig = aux;
	}else{
		L -> inicio = nuevo_nodo;
		L -> fin = nuevo_nodo;
	}
}

nodo *eliminar_inicio_lista(lista *L){
	nodo *aux;
	// Verifica que la cola no esté vacía
	if(L -> inicio != NULL){
		// Se utiliza un auxiliar para retornar el nodo
		aux = L -> inicio;
		aux -> sig = NULL;
		// Se verifica que el nodo de inicio y fin no sean iguales y por lo
		// tanto, al desencolar el nodo se quede sin elementos
		if(L -> inicio -> sig != NULL)
			L -> inicio = L -> inicio -> sig;
		else
			L -> inicio = NULL;
		return aux;
	}
}

nodo *penultimo_lista(lista *L){
	lista *aux;
	aux = L;
	while(aux -> inicio != NULL){
		if(aux -> inicio -> sig == L -> fin){
			return aux -> inicio -> sig;
		}
		eliminar_inicio_lista(aux);
	}
}

nodo *eliminar_final_lista(lista *L){
	nodo *aux, *penultimo;
	// Verifica que la cola no esté vacía
	if(L -> fin != NULL){
		// Se utiliza un auxiliar para retornar el nodo
		aux = L -> fin;
		aux -> sig = NULL;
		// Se verifica que el nodo de inicio y fin no sean iguales y por lo
		// tanto, al desencolar el nodo se quede sin elementos
		penultimo = penultimo_lista(L);
		L -> fin = penultimo;
		return aux;
	}
}

nodo *anterior(lista *L, nodo *N){
	nodo *aux;
	aux = L -> inicio;
	while(aux -> sig != N)
		aux = aux -> sig;
	return aux;
}

nodo *eliminar_otro(lista *L, nodo *N){
	nodo *aux;
	aux = anterior(L, N);
	aux -> sig = N -> sig;
	free(N);
}

nodo *eliminar_nodo_lista(lista *L, nodo *N){
	if(L -> inicio != NULL && L -> fin != NULL){
		// Se obtiene el nodo donde se encuentre el nodo
		if(N == L -> inicio)
			eliminar_inicio_lista(L);
		else if(N == L -> fin)
			eliminar_final_lista(L);
		else
			eliminar_otro(L, N);
	}else
		printf("\nLista vacía");
}

void *eliminar_repetidos_lista(lista *L){
	/*
	Se considera una lista previamente ordenada de menor a mayor
	en el que se guardará en memoria los nodos que se vayan eliminando
	y si el nodo agregado recientemente coincide con el ultimo nodo
	ingresado se elimina de la lista.
	*/
	lista *aux, *aux2;
	aux2 = crear_lista();
	aux = L;
	while(aux -> inicio != NULL){
		agregar_final_lista(aux2, aux -> inicio -> info);
		if(aux2 -> fin -> info == aux -> inicio -> sig -> info){
			eliminar_nodo_lista(L, aux -> inicio -> sig);
		}
		eliminar_inicio_lista(aux);
	}
}

// Funciones para Grafos
grafo *leerGrafo(char *nombre){
	FILE *archivo;
	grafo *grafo_general;
	lista *vertices;
	int i, j, n, a, cont, **G;

	//instrucciones para leer archivo
	archivo = fopen(nombre, "r");
	if (archivo == NULL){
		printf("Error al acceder a archivo\n");
		grafo_general -> vertice = -8;
		return grafo_general;
	}else{
		printf("Archivo leido\n");
	}

	// se crea espacio para la estuctura
	grafo_general = crear_grafo();

	//leer datos del archivo
	fscanf(archivo,"%d %d",&n,&a);

	grafo_general -> vertice = n;   //almacenamos la cantidad de nodos
	grafo_general -> arista = a;

	printf("\nGrafo a leer: %d nodos y %d aristas",n, a);
	
	//crear matriz
	G = crear_matriz(grafo_general);
	// Crea la lista para la lista de vertices
	vertices = crear_lista();

	//leer aristas
	for(int cont = 0; cont < a; cont++){
		//leer datos del archivo
		fscanf(archivo,"%d %d",&i,&j);
		printf("\nArista leido: (%d,%d)",i,j);
		agregar_final_lista(vertices, i);
		agregar_final_lista(vertices, j);	
		G[i-1][j-1] = 1;
		G[j-1][i-1] = 1;
	}

	// Se elimina repetidos de vertices y ordena la lista


	// almacenamos la matriz
	grafo_general -> matriz = G;
	
	printf("\nGrafo leido: %d nodos y %d aristas\n",n, a);

	return grafo_general;
}

int mostrar_grafo(grafo *grafo_general){
    /*
    Esta función está encargada de imprimir la matriz.
    */
    printf("\n");
    for(int i = 0; i < grafo_general -> vertice; i++){
        for(int j = 0; j < grafo_general -> vertice; j ++)
            printf("%d ", grafo_general -> matriz[i][j]);
        printf("\n");
    }
    return 1;
}

int mostrar_adyacente(grafo *grafo_general, int vertice){
	/*
	Esta función está encargada de imprimir los nodos adyacentes a un nodo.
	*/
	printf("\n");
	// Se recorre la matriz
	for(int i = 0; i < grafo_general -> vertice; i++){
		// Si el valor de la matriz es 1, se imprime el nodo
		if(grafo_general -> matriz[vertice][i] == 1)
			printf("%d ", i+1);
	}
	printf("\n");
	return 1;
}

lista *recorrido_amplitud(grafo *grafo_general){
	int i;
	nodo *vertice;
	cola *C;
	lista *recorrido, *visitados;
	// Se crea espacio en memoria para las listas
	recorrido = crear_lista();
	visitados = crear_lista();
	// Se encola el primer vertice
	encolar(C, grafo_general -> vertices -> inicio -> info);
	// Mientras aún queden elementos en la cola
	while(C -> inicio != NULL){
		// Se obtiene el vertice
		vertice = desencolar(C);
		// Si el vertice no ha sido visitado se agregan a la lista de recorrido y visitados
		if(!pertenece_lista(visitados, vertice)){
			agregar_final_lista(recorrido, vertice -> info);
			agregar_final_lista(visitados, vertice -> info);
			// Se agregan a la cola los vertices adyacentes
			for(i = 0; i < grafo_general -> vertice; i++){
				if(grafo_general -> matriz[vertice -> info][i] == 1){
					encolar(C, i);
				}
			}
		}
	}
	eliminar_repetidos_lista(recorrido);
	return recorrido;
}

lista *recorrido_profundidad(grafo *grafo_general){
	int i;
	nodo *vertice;
	pila *P;
	lista *recorrido, *visitados;
	// Se crea espacio en memoria para las listas
	recorrido = crear_lista();
	visitados = crear_lista();
	// Se encola el primer vertice
	push(P, grafo_general -> vertices -> inicio -> info);
	// Mientras aún queden elementos en la pila
	while(P -> top != NULL){
		// Se obtiene el vertice
		vertice = pop(P);
		// Si el vertice no ha sido visitado se agregan a la lista de recorrido y visitados
		if(!pertenece_lista(visitados, vertice)){
			agregar_final_lista(recorrido, vertice -> info);
			agregar_final_lista(visitados, vertice -> info);
			// Se agregan a la pila los vertices adyacentes
			for(i = 0; i < grafo_general -> vertice; i++){
				if(grafo_general -> matriz[vertice -> info][i] == 1){
					push(P, i);
				}
			}
		}
	}
	eliminar_repetidos_lista(recorrido);
	return recorrido;
}

int main(int argc, char *argv[]){
	grafo *grafo_general;
	int opcion = 0, vertice;
    grafo_general = leerGrafo(argv[1]);
	if(grafo_general -> vertice >= 0){
		while(opcion != 5){
			printf("\nIngrese una opción: ");
			printf("\n1. Mostrar el grafo");
			printf("\n2. Mostrar adyacentes de algun vertice");
			printf("\n5. Salir");
			printf("\nIngresa una opción: ");
			scanf("%d", &opcion);
			switch(opcion){
				case 1:
					mostrar_grafo(grafo_general);
					break;
				case 2:
					printf("Ingrese el número del vertice que desear ver"
					" los adyacentes: ");
					scanf("%d", &vertice);
					mostrar_adyacente(grafo_general, vertice);
				case 5:
					break;
				default:
					printf("\nLa opción que ingresaste no es válida");
					break;
			}
		}
	}
	return 0;
}
