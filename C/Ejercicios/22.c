#include<stdio.h>
#include<stdlib.h>

typedef struct grafo{
	int vertice;
	int arista;
	int **matriz;
} grafo;

grafo *grafo_general;

int **crear_matriz(){
	int **nueva_matriz, *fila;
	// Se crea espacio en memoria para la matriz
	nueva_matriz = (int **)malloc(sizeof(int *) * grafo_general -> vertice);
	// Se crea espacio en memoria para cada fila
	for(int i = 0; i < grafo_general -> vertice; i++){
		fila = (int *)malloc(sizeof(int) * grafo_general -> arista);
		// Se asignan valores iniciales para fila y columna
		for(int j = 0; i < grafo_general -> arista; j++)
			fila[j] = 0;
		// Se agrega cada fila a la matriz
		nueva_matriz[i] = fila;
	}
	return nueva_matriz;
}

void crear_grafo(){
	// Se crea en memoria espacio para los vertices y aristas
	// Se asignan valores por defecto
	int vertice = 0;
	int arista = 0;
	// Se guarda el espacio en memoria en la estructura
	grafo_general -> vertice = vertice;
	grafo_general -> arista = arista;	
}

int leerGrafo(char *nombre){
	FILE *archivo;
	int i, j, n, a, cont, **G;

	//instrucciones para leer archivo
	archivo = fopen(nombre, "r");
	if (archivo == NULL){
		printf("\nError al acceder a archivo\n");
		return 0;
	}else{
		printf("\nAchivo leido");
	}

	// se crea espacio para la estuctura
	crear_matriz();

	//leer datos del archivo
	fscanf(archivo,"%d %d",&n,&a);

	grafo_general -> vertice = n;   //almacenamos la cantidad de nodos
	grafo_general -> arista = a;

	printf("\nGrafo a leer: %d nodos y %d aristas",n, a);
	
	//crear matriz
	G = crear_matriz();
	
	//leer aristas
	for(int cont = 0; cont < a; cont++){
		//leer datos del archivo
		fscanf(archivo,"%d %d",&i,&j);
		printf("\nArista leido: (%d,%d)",i,j);		
		G[i-1][j-1] = 1;
		G[j-1][i-1] = 1;
	}
	
	// almacenamos la matriz
	grafo_general -> matriz = G;
	
	printf("\nGrafo leido: %d nodos y %d aristas\n",n, a);
	return 1;
}

int mostar_grafo(void){
    /*
    Esta función está encargada de imprimir la matriz.
    */
    printf("\n");
    for(int i = 0; i < grafo_general -> vertice; i++){
        for(int j = 0; j < grafo_general -> arista; j ++){
            if(grafo_general -> matriz[i][j] != grafo_general -> vertice - 1)
                printf("%d ", grafo_general -> matriz[i][j]);
            else
                printf("%d", grafo_general -> matriz[i][j]);
        }
        printf("\n");
    }
    return 1;
}

int mostar_adyacente(void){

}

int main(int argc, char *argv[]){

        leerGrafo(argv[1]);

}

