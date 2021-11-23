#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "spanish");
	int vector[] = {25, 40, 55, 70, 85, 100, 115};
	int tabla[][4] = {15, 25, 35, 45, 115, 125, 135, 145, 215, 225, 235, 245};
	int i, j;
	int* p = vector;
	int* vector_tabla_p = *tabla;
	
	printf("=============== Procesos sobre el array unidimensional ===============\n");
	printf("\nRecorrido y presentacion utilizando un índice\n");
	
	for(i = 0; i < sizeof(vector) / sizeof(int); i++)
		printf("vector[%d] = %d\n", i, vector[i]);
	
	printf("\nRecorrido y presentación utilizando el nombre del array como puntero constante");
	
	for(i = 0; i < sizeof(vector) / sizeof(int); i++)
		printf("*(vector (%p) + %d) = %d\n", vector + i, i, *(vector + i));
	
	printf("\nRecorrido y presentación utilizando una variable puntero de tipo entero\n");
	for(i = 0; i < sizeof(vector) / sizeof(int); i++)
		printf("*p++ (%p) = %d\n", p, *p++);
	
	printf("\n=============== Procesos sobre el array bidimensional ===============\n");
	printf("\nRecorrido y presentacion utilizando dos índices\n");
	for(i = 0; i < sizeof(tabla) / sizeof(tabla[i]); i++) {
		for(j = 0; j < sizeof(tabla[i]) / sizeof(tabla[i][j]); j++)
			printf("tabla[%d][%d] = %d\n", i, j, tabla[i][j]);
		
		printf("\n");
	}

	printf("\nRecorrido y presentación en pantalla utilizando el nombre de la tabla como puntero constante\n");
	for(i = 0; i < sizeof(tabla) / sizeof(tabla[i]) * sizeof(tabla[i]) / sizeof(tabla[i][0]); i++)
		printf("*(*(tabla (%p)) (%p) + %d) = %d\n", tabla, *tabla + i, i, *(*tabla + i));
		
	printf("\nRecorrido y presentación en pantalla utilizando un puntero al tipo básico\n");
	for(i = 0; i < sizeof(tabla) / sizeof(tabla[i]) * sizeof(tabla[i]) / sizeof(tabla[i][0]); i++)
		printf("*p++ (%p) = %d\n", vector_tabla_p, *vector_tabla_p++);
}
