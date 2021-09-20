#include <stdio.h>

int main() {
	int x, y;
	
	printf("Introduzca dos numeros enteros: ");

	scanf("%d %d", &x, &y);
	
	printf("Valores inicales:");
	printf("\nx = %d" , x);
	printf("\ny = %d" , y);
	
	int aux = x;
	x = y;
	y = aux;
	
	printf("\nDespues de intercambiar:");
	printf("\nx = %d" , x);
	printf("\ny = %d" , y);
	
	return 0;
}
