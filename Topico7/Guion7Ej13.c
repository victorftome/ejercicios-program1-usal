#include <stdio.h>

#define FILAS 2
#define COLUMNAS 4

int main() {
	char mat[FILAS][COLUMNAS]; // Matriz bidimensional
	char *pt; // Puntero
	char (*pt1)[COLUMNAS]; // Un puntero a un arreglo de caracteres
	char (**pt2)[COLUMNAS]; // Un puntero a un puntero que apunta a un arreglo de caracteres
	char *(*pt3[FILAS]); // Un puntero al primer elemento de un arreglo de punteros
	char *(*pt4)[FILAS]; // Un puntero a un arreglo de 2 punteros
	char *pt5[FILAS]; // Un arreglo de 2 punteros
	
	int i, j;
	
	for(i = 0; i < FILAS; i++)
		for(j = 0; j < COLUMNAS; j++)
			mat[i][j] = 0x30 + j + i * COLUMNAS;

	// Esta asignacion sí seria correcta ya que mat es la direccion al primer elemento del vector
	pt = (char*) mat;

	for(i = 0; i < FILAS * COLUMNAS; i++)
		printf("%d = %c\n", i, *pt++);

	printf("\n");

	// Esta asignacion tambien es posible ya que en este caso *mat al ser un vector bidimensional
	// estaria dandonos el valor del primer elemento del arreglo, q en este caso es otro vector
	// con lo cual el valor sería otro puntero al primer elemento, en este caso de las columnas
	pt = *mat;
	
	for(i = 0; i < FILAS * COLUMNAS; i++)
		printf("%d = %c\n", i, *pt++);
	
	
	printf("\n");

	// En este caso, como es un puntero que apunta a un arreglo de 4 caracteres
	// basicamente lo podemos usar como puntero con el que ir recoriendo directamente las filas
	// por eso cada vez q lo aumentamos pasamos de fila a fila
	pt1 = mat;
	
	for(i = 0; i < sizeof(pt1) / COLUMNAS; i++)
		printf("%d = %c\n", i, **pt1++);

	printf("\n");

	pt2 = mat;
	
	for(i = 0; i < sizeof(pt2); i++)
		printf("%d = %c\n", i, *(*pt2) + i);

	// En el caso del pt3, ya que este es un puntero al primer elemento de un arreglo de punteros
	// No se le podra signar mat, ya que mat no es un arreglo de punteros.
	
	// En el caso del pt4 se trata de un puntero a un arreglo de dos punteros.
	
	printf("\n");

	// En el caso del pt5 Se trata simplemente de un arreglo de dos punteros.
	// No tendria mucho sentido asignarselo a mat ya que mat es un arreglo bidimensional
	// de caracteres
	
	pt5[0] = mat;
	pt5[1] = mat + 1;
	
	for(i = 0; i < sizeof(pt5) / sizeof(char *); i++)
		printf("%d = %c\n", i, *pt5[i]);
	return 0;
}
