#include <stdio.h>

#define FIL 5
#define COL 3
float mat[FIL][COL];

void iniciar (float (*m)[COL], int filas, float valor_ini);

int main() {
	int i, j;
	float initial_value;
	printf("Introduzca el valor al que inicializar la variable: ");
	scanf(" %f", &initial_value);

	iniciar(mat, FIL, initial_value);


	printf("\n==== MATRIZ INICIALIZADA ====\n");
	for(i = 0; i < FIL; i++) {
		for(j = 0; j < COL; j++)
			printf("%5.2f | ", mat[i][j]);
			
		printf("\n");
	}

	return 0;
}

void iniciar (float (*m)[COL], int filas, float valor_ini) {
	int i, j;
	for(i = 0; i < filas; i++)
		for(j = 0; j < sizeof m[i] / sizeof m[i][j]; j++)
			m[i][j] = valor_ini;
}
