#include <stdio.h>

#define MAX_COL 100
#define KEYS_VEC_SIZE 15
#define MIN_KEY_VALUE 100
#define MAX_KEY_VALUE 8000

int EsPuntoSillaMatriz(int (*matriz)[MAX_COL], int filas, int columnas, int x, int y);
void PrimerPuntoSillaMatriz(int (*matriz)[MAX_COL], int filas, int columnas, int* indice_fila, int* indice_columna);

int main() {
	int i, j, cont = 0, aux = 1;

	int keyVector[KEYS_VEC_SIZE];
	int* keyVectorSorted[KEYS_VEC_SIZE];
	int indice_fila, indice_columna;
	int matriz_ejemplo[MAX_COL][MAX_COL];
/*
	for(i = 0; i < KEYS_VEC_SIZE; i++) {
		printf("Introduzca la clave %d: ", i + 1);
		scanf(" %d", &keyVector[i]);

		if(keyVector[i] > MAX_KEY_VALUE || keyVector[i] < MIN_KEY_VALUE) --i;
		for(j = 0; j < i; j++)
			if(keyVector[j] == keyVector[i]) {
				i--;
				break;
			}
	}

	for(i = MIN_KEY_VALUE; i <= MAX_KEY_VALUE; i++) {
		for(j = 0; j < KEYS_VEC_SIZE; j++) {
			if(keyVector[j] == i) {
				keyVectorSorted[cont++] = &keyVector[j];
				break;
			}
		}
		
		if(cont == KEYS_VEC_SIZE) break;
	}

	printf("\n === El vector ordenado === \n");
	for(i = 0; i < KEYS_VEC_SIZE; i++) {
		printf("%d ", *keyVectorSorted[i]);
	}

	printf("\n === El vector original === \n");
	for(i = 0; i < KEYS_VEC_SIZE; i++) {
		printf("%d ", keyVector[i]);
	}
	*/

	printf("\n Introduzca los elementos de la matriz q es punto de silla: ");
	for(i = 0; i < 4; i++)
		for(j = 0; j < 3; j++) {
			printf("\nElemento (%d, %d): ", i + 1, j + 1);
			scanf(" %d", &matriz_ejemplo[i][j]);
		}

	printf("\n");
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 3; j++) {
			printf("%3d", matriz_ejemplo[i][j]);
		}

		printf("\n");
	}
	printf("\n");

	PrimerPuntoSillaMatriz(matriz_ejemplo, 4, 3, &indice_fila, &indice_columna);

	if(indice_fila < 0) printf("\nLa matriz no tiene punto de silla");
	else printf("\nEl punto de silla se encuentra en x = %d e y = %d, con valor de: %d", indice_fila + 1, indice_columna + 1, matriz_ejemplo[indice_fila][indice_columna]);

	return 0;
}

int EsPuntoSillaMatriz(int (*matriz)[MAX_COL], int filas, int columnas, int x, int y) {
	int i, aux;

	if(x >= filas || y >= columnas) return -1;
	if(x < 0 || y < 0) return -1;

	aux = matriz[x][y];
	for(i = 0; i < columnas; i++) {
		if(aux > matriz[x][i])
			return 0;
	}

	for(i = 0; i < filas; i++) {
		if(aux < matriz[i][y])
			return 0;
	}

	return 1;
}

void PrimerPuntoSillaMatriz(int (*matriz)[MAX_COL], int filas, int columnas, int* indice_fila, int* indice_columna) {
	int i, j;
	
	for(i = 0; i < filas; i++) {
		for(j = 0; j < columnas; j++) {
			if(EsPuntoSillaMatriz(matriz, filas, columnas, i, j)) {
				*indice_fila = i;
				*indice_columna = j;
				return;
			}
		}
	}

	*indice_fila = -1;
	*indice_columna = -1;
}
