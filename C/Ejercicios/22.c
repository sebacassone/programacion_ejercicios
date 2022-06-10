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

// Funciones de Estructuras de Datos lineales
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

void *eliminar_repetidos_lista(lista *L){
	lista *aux;
	aux = crear_lista();
	aux = L;
	//while(aux -> inicio != NULL){
		
	//}
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
	cola *C;
	lista *recorrido, *visitados;
	encolar(C, grafo_general -> matriz[0][0]);
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
