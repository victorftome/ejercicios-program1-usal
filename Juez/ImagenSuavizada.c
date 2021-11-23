#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
	int matriz[MAX_ROWS][MAX_COLS];
	float valores_suavizados[MAX_ROWS][MAX_COLS];
	int rows, cols, i, j, k, l;
	
	scanf(" %d %d", &rows, &cols);

	for(i = 0; i < rows; i++)
		for(j = 0; j < cols; j++)
			scanf("%1d", &matriz[i][j]);

	int suavizados_rows = rows - 2;
	int suavizados_cols = cols - 2;

	for(i = 1; i < rows - 1; i++)
		for(j = 1; j < cols - 1; j++) {
			for(k = i - 1; k < i - 1 + 3; k++)
				for(l = j - 1; l < j - 1 + 3; l++)
					valores_suavizados[i - 1][j - 1] += matriz[k][l];
					
			valores_suavizados[i - 1][j - 1] /= (float) 9;
		}
		
	for(i = 0; i < suavizados_rows; i++) {
		for(j = 0; j < suavizados_cols; j++)
			printf("%.5f ", valores_suavizados[i][j]);

		printf("\n");		
	}

	return 0;
}
