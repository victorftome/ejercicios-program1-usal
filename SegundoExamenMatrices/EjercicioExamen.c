#include <stdio.h>

#define MAX 25
#define MIN 3

int main() {
	float m[MAX][MIN];
	int i, j;
	int a, b;

	do {
		printf("Introduzca el nUmero de filas\n");
		scanf("%d", &a);
	} while(a < MIN || a > MAX);

	do {
		printf("Introduzca el nUmero de Columnas\n");
		scanf("%d", &b);
	} while(a < MIN || a > MAX);

	for(i = 0; i < a - 1; i++) {
		for(j = 0; j < b - 1; j++) {
			printf("Introduzca el dato en la posicion [%d][%d]: ", i + 1, j + 1);
			scanf("%f", &m[i][j]);
		}

		printf("\n");
	}

	for(i = 0; i < a - 1; i++) {
		m[i][b - 1] = m[i][0];

		for(j = 1; j < b - 1; j++) {
			if(m[i][j] > m[i][b - 1])
				m[i][b-1] = m[i][j];
		}

		printf("\n");
	}

	for(j = 0; j < b - 1; j++) {
		m[a - 1][j] = 0;

		for(i = 0; i < a - 1; i++)
			m[a - 1][j] += m[i][j];

		m[a-1][j] /= a - 1;
	}

	m[a - 1][b - 1] = m[0][0];

	for(i = 0; i < a - 1; i++)
		for(j = 0; j < b - 1; j++)
			if(m[i][j] < m[a - 1][b - 1])
				m[a - 1][b - 1] = m[i][j];

	for(i = 0; i < a; i++) {
		for(j = 0; j < b; j++)
			printf("%.2f ", m[i][j]);

		printf("\n");
	}

	return 0;
}
