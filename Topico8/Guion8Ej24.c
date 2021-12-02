#include <stdio.h>

#define MAX 100

int compara_listas(double* v1, double* v2, int dim);

int main() {
	double v1[MAX], v2[MAX];
	int size, i;

	printf("Introduzca el numero de elementos a guardar en el vector: ");
	scanf("%d", &size);

	printf("DATOS PARA EL PRIMER VECTOR: \n");
	for(i = 0; i < size; i++) {
		printf("Primer vector[%d]: ", i + 1);
		scanf("%lf", &v1[i]);
	}

	printf("DATOS PARA EL SEGUNDO VECTOR: \n");
	for(i = 0; i < size; i++) {
		printf("Segundo vector[%d]: ", i + 1);
		scanf("%lf", &v2[i]);
	}

	if(compara_listas(v1, v2, size)) printf("Los vectores son iguales");
	else printf("Los vectores no son iguales");

	return 0;
}

int compara_listas(double* v1, double* v2, int dim) {
	int i;

	for(i = 0; i < dim; i++)
		if(*v1++ != *v2++)
			return 0;

	return 1;
}
