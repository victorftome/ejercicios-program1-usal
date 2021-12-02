#include <stdio.h>

#define MAX 100

void cargar_vector(int* vec, int size);
void mostrar_vector(int* vec, int size);
void getMaxAndMin(int* vec, int size, int* max, int* min);

int main() {
	int n[MAX];
	int size, max, min;
	
	printf("Introduzca la cantidad de numeros a almacenar: ");
	scanf("%d", &size);

	cargar_vector(n, size);

	printf("El vector es: ");
	mostrar_vector(n, size);

	getMaxAndMin(n, size, &max, &min);

	printf("\nTeniendo como valores minimo y maximos los siguientes: (%d, %d)", min, max);
	return 0;
}

void cargar_vector(int* vec, int size) {
	int i;

	for(i = 0; i < size; i++) {
		printf("valor[%d]: ", i + 1);
		scanf("%d", vec++);
	}
}

void mostrar_vector(int* vec, int size) {
	int i;

	for(i = 0; i < size; i++)
		printf("%d ", *vec++);
}

void getMaxAndMin(int* vec, int size, int* max, int* min) {
	int i;

	*max = *vec;
	*min = *vec++;

	for(i = 1; i < size; i++) {
		if(*max < *vec) *max = *vec;
		if(*min > *vec) *min = *vec;

		vec++;
	}
}
