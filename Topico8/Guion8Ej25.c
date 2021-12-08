#include <stdio.h>

#define FIL 4
#define COL 4
float mat[FIL][COL] = {1.34, 2.45, 3.12, 4.56, 2.45, 3.78, -4.0, 5.92, 3.12, -4.0, 12.12, 6.34, 4.56, 5.92, 6.34, 7.56};
float mat2[FIL][COL] = {1.87, 1.34, 3.15, 3.06, 2.09, -3.45, -4.78, 5.33, 3.15, -4.78, -9.08, 6.56, 4.01, 5.33, 5.65, 7.77};

float traza(float (*m)[COL]);
int simetrica(float (*m)[COL]);

int main() {
	int i, j;

	printf("================== MATRIZ 1 =================\n");
	for(i = 0; i < FIL; i++){
		for(j = 0; j < COL; j++)
			printf("%5.2f | ", mat[i][j]);
			
		printf("\n");
	}

	printf("Traza: %.2f\nSimetrica: %s\n\n", traza(mat), (simetrica(mat) ? "SI" : "NO"));
	
	printf("\n================== MATRIZ 2 =================\n");
	for(i = 0; i < FIL; i++){
		for(j = 0; j < COL; j++)
			printf("%5.2f | ", mat2[i][j]);
			
		printf("\n");
	}

	printf("Traza: %.2f\nSimetrica: %s", traza(mat2), (simetrica(mat2) ? "SI" : "NO"));

	return 0;
}

float traza(float (*m)[COL]) {
	int i;
	float sumatorio = 0;

	for(i = 0; i < FIL; i++)
		sumatorio += m[i][i];
		
	return sumatorio;
}

int simetrica(float (*m)[COL]) {
	int i, j;
	
	for(i = 1, j = 1; i < FIL; i++, j++)
		if(m[i][0] != m[0][i])
			return 0;
			
	for(i = FIL - 1, j = COL - 1; i >= 0; i--, j--)
		if(m[i][0] != m[0][i])
			return 0;
			
	return 1;
}
