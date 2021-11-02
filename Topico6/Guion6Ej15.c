#include <stdio.h>
#include <math.h>

#define MAX 31

int main() {
	int matriz[MAX][MAX];
	int n, i, j, contador = 0, salidaScanf;

	salidaScanf = scanf(" %d", &n);
	
	if(salidaScanf != 1) return 1;

	for(i = 0; i < MAX; i++)
		for(j = 0; j < MAX; j++)
			matriz[i][j] = -1;

	for(i = 0, j = n / 2; contador < pow(n, 2); i--, j++) {
		if(i == -1) i = n - 1;
		if(j == n) j = 0;

		if(matriz[i][j] != -1){
			i = (n + i + 2) % n;
			j = (n + j - 1) % n;
		}

		matriz[i][j] = ++contador;
	}
	
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) 
			printf("%3d ", matriz[i][j]);
			
		printf("\n");
	}

	return 0;
}
