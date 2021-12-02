#include <stdio.h>

#define MAX 100

float media_vector(int* la, int dim);

int main() {
	int n[MAX];
	int i, size;

	int vector[] = {-1, 7, 15, 4, 6, -5};
	int vector2[] = {34, -12, 56, 4, 0, 5, 12, 26, -58};
	int vector3[] = {2, -7, -9, -12, 0, 6, -8, 5, 1, -2, 0, -7};

	printf("La media de los vectores de prueba son: %.2f %.2f %.2f\n"
		, media_vector(vector, sizeof vector / sizeof(int))
		, media_vector(vector2, sizeof vector2 / sizeof(int))
		, media_vector(vector3, sizeof vector3 / sizeof(int)));

	printf("Introduzca la cantidad de numeros que va a incluir su vector: ");
	scanf("%d", &size);

	for(i = 0; i < size; i++) {
		printf("Numero[%d]: ", i + 1);
		scanf("%d", &n[i]);
	}

	printf("La media de su vector es: %.2f", media_vector(n, size));

	return 0;
}

float media_vector(int* la, int dim) {
	float media = 0;
	int i;
	
	for(i = 0; i < dim; i++)
		media += *la++;
		
	return media / dim;
}
