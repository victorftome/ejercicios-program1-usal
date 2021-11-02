#include <stdio.h>

#define MAX_COL 25
#define MAX_ROW 25

int main() {
	int tabla[MAX_ROW][MAX_COL];
	int maximo, minimo;
	int columnas, filas, i, j;

	scanf(" %d %d", &filas, &columnas);

	for(i = 0; i < filas; i++)
		for(j = 0; j < columnas; j++)
			scanf(" %d", &tabla[i][j]);
		
	maximo = tabla[0][0];
	minimo = tabla[0][0];
	
	for(i = 0; i < filas; i++)
		for(j = 0; j < columnas; j++) {
			if(maximo < tabla[i][j]) {
				maximo = tabla[i][j];
			}
			
			if(minimo > tabla[i][j]) {
				minimo = tabla[i][j];
			}
		}

	printf("%d", maximo);

	for(i = 0; i < filas; i++)
		for(j = 0; j < columnas; j++) {
			if(maximo == tabla[i][j])
				printf("\n%d,%d", i + 1, j + 1);
		}

	return 0;
}
