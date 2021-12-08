#include <stdio.h>

#define MIN_FIL 1
#define MIN_COL 1

#define MAX_FIL 100
#define MAX_COL 100

void cargarMatriz(int (*mat)[MAX_COL], int nfil, int ncol, int num);
void verMatriz(int (*mat)[MAX_COL], int nfil, int ncol);
int extraeColumnaMaximo(int (*mat)[MAX_COL], int nfil, int ncol, int* vectorX);
void verColumna(int* vectorX, int dim);

int main() {
	int dim_fil, dim_col, num;
	int vec[MAX_FIL];
	int mat[MAX_FIL][MAX_COL];

	do {
		printf("Introduzca las filas de la matriz (entre %d y %d): ", MIN_FIL, MAX_FIL);
		scanf(" %d", &dim_fil);
	} while(dim_fil < MIN_FIL || dim_fil > MAX_FIL);

	do {
		printf("Introduzca las columnas de la matriz (entre %d y %d): ", MIN_COL, MAX_COL);
		scanf(" %d", &dim_col);
	} while(dim_col < MIN_COL || dim_col > MAX_COL);

	do {
		printf("Introduzca un numero entero comprendido entre %d y %d: ", 1, MAX_COL * MAX_FIL);
		scanf(" %d", &num);
	} while(num < 1 || num > MAX_FIL * MAX_COL);

	cargarMatriz(mat, dim_fil, dim_col, num);

	printf("======== MATRIZ CARGADA ========\n");
	verMatriz(mat, dim_fil, dim_col);

	extraeColumnaMaximo(mat, dim_fil, dim_col, vec);

	printf("\n======== COLUMNA EXTRAIDA ========\n");
	verColumna(vec, dim_fil);

	return 0;
}

void cargarMatriz(int (*mat)[MAX_COL], int nfil, int ncol, int num) {
	int i, j, cont = 3, signo = 1;
	
	for(i = 0; i < nfil; i++)
		for(j = 0; j < ncol; j++) {
			if(!i && !j) {
				mat[i][j] = num;
				continue;
			}

			mat[i][j] = ((j) ? mat[i][j - 1] : mat[i - 1][ncol - 1]) + cont++ * signo;
			signo *= -1;
		}
}

void verMatriz(int (*mat)[MAX_COL], int nfil, int ncol) {
	int i, j;
	
	for(i = 0; i < nfil; i++){
		for(j = 0; j < ncol; j++)
			printf("%10d | ", mat[i][j]);

		printf("\n");
	}
}

int extraeColumnaMaximo(int (*mat)[MAX_COL], int nfil, int ncol, int* vectorX) {
	int max, col, i, j;

	if(mat == NULL || vectorX == NULL) return -1;
	if(nfil < MIN_FIL || nfil > MAX_FIL || ncol < MIN_COL || ncol > MAX_COL) return -1;

	max = mat[0][0];

	for(j = 0; j < ncol; j++)
		for(i = 0; i < nfil; i++)
			if(mat[i][j] >= max) {
				col = j;
				max = mat[i][j];
			}

	for(i = 0; i < nfil; i++)
		vectorX[i] = mat[i][col];

	return 0;
}

void verColumna(int* vectorX, int dim) {
	int i;

	for(i = 0; i < dim; i++)
		printf("%d\n---\n", *vectorX++);
}
