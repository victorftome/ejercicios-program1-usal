#include <stdio.h>

#define MAX_SIZE 25

void leer_matriz(long (*ma)[MAX_SIZE], int filas, int columnas);
void escribir_matriz(long (*ma)[MAX_SIZE], int filas, int columnas);
void producto_matriz(long (*ma)[MAX_SIZE], int f_a, int c_a, long (*mb)[MAX_SIZE], int c_b, long (*mp)[MAX_SIZE]);

int main() {
	long matrizA[MAX_SIZE][MAX_SIZE];
	long matrizB[MAX_SIZE][MAX_SIZE];
	long matrizP[MAX_SIZE][MAX_SIZE];
	int f_a, c_a, c_b;

	do {
		printf("Introduzca el numero de filas de la primera matriz (MAX: %ld): ", MAX_SIZE);
		scanf(" %d", &f_a);
	} while(f_a > 25);

	do {
		printf("Introduzca el numero de columnas de la primera matriz (MAX: %ld): ", MAX_SIZE);
		scanf(" %d", &c_a);
	} while(c_a > 25);

	do {
		printf("Introduzca el numero de columnas de la segunda matriz (MAX: %ld): ", MAX_SIZE);
		scanf(" %d", &c_b);
	} while(c_b > 25);

	printf("Introduzca la matriz A:\n ");
	leer_matriz(matrizA, f_a, c_a);

	printf("Introduzca la matriz B:\n ");
	leer_matriz(matrizB, c_a, c_b);
	
	printf("\n MATRIZ A: \n");
	escribir_matriz(matrizA, f_a, c_a);

	printf("\n MATRIZ B: \n");
	escribir_matriz(matrizB, c_a, c_b);

	producto_matriz(matrizA, f_a, c_a, matrizB, c_b, matrizP);

	printf("\n MATROZ PRODUCTO: \n");
	escribir_matriz(matrizP, f_a, c_b);

	return 0;
}

void leer_matriz(long (*ma)[MAX_SIZE], int filas, int columnas) {
	int i, j;

	for(i = 0; i < filas; i++)
		for(j = 0; j < columnas; j++) {
			printf("Elemento (%d, %d) => ", i + 1, j + 1);
			scanf(" %d", &ma[i][j]);
		}
}

void escribir_matriz(long (*ma)[MAX_SIZE], int filas, int columnas) {
	int i, j;
	
	for(i = 0; i < filas; i++) {
		for(j = 0; j < columnas; j++)
			printf("%5d", ma[i][j]);
		
		printf("\n");
	}
}

void producto_matriz(long (*ma)[MAX_SIZE], int f_a, int c_a, long (*mb)[MAX_SIZE], int c_b, long (*mp)[MAX_SIZE]) {
	int i, j, k;

	for(i = 0; i < f_a; i++) {
		for(j = 0; j < c_b; j++) {
			mp[i][j] = 0;

			for(k = 0; k < c_a; k++) {
				mp[i][j] += ma[i][k] * mb[k][j];
			}
		}
	}
}
