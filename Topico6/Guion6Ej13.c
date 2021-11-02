#include <stdio.h>

#define ROWS 4
#define COLS 5

int main() {
	int matriz[ROWS][COLS];
	int i, j;
	
	for(i = 0; i < ROWS; i++)
		for(j = 0; j < COLS; j++)
			matriz[i][j] = (i + 1) * 10 + j + 1;
	
	printf("La matriz normal es: \n");	
	for(i = 0; i < ROWS; i++){
		for(j = 0; j < COLS; j++)
			printf("| %d ", matriz[i][j]);
			
		printf("|\n");
	}
	
	printf("\nLa matriz descendente por filas, ascendente por columnas es: \n");
	for(i = ROWS - 1; i >= 0; i--){
		for(j = 0; j < COLS; j++)
			printf("| %d ", matriz[i][j]);
			
		printf("|\n");
	}

	printf("\nLa matriz descendente por columnas, descendente por filas es: \n");
	for(i = COLS - 1; i >= 0; i--){
		for(j = ROWS - 1; j >= 0; j--)
			printf("| %d ", matriz[j][i]);
			
		printf("|\n");
	}
	
	printf("\nLa matriz ascendente por columnas, ascendente por filas es: \n");
	for(i = 0; i < COLS; i++){
		for(j = 0; j < ROWS; j++)
			printf("| %d ", matriz[j][i]);
			
		printf("|\n");
	}

	return 0;
}
