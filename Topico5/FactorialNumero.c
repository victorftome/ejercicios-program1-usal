#include <stdio.h>

int main() {
	int n, i;
	unsigned long factorial = 1;

	printf("Introduzca el numero POSITIVO a calcular su factorial: ");
	scanf("%d", &n);

	if(n <= 0) {
		printf("El programa no funciona con numeros negativos. Y tampoco el 0.\nSaliendo...");
		return 1;
	}	

	// Usando un FOR
	for(i = n; i > 0; i--)
		factorial *= i;

	printf("El factorial de %d es %ld (bucle for)", n, factorial);
	
	// Usando un while
	int aux = n;
	factorial = 1;

	while(aux > 1) 
		factorial *= aux--;

	printf("\nEl factorial de %d es %ld (bucle while)", n, factorial);
	
	// Usando un do_while
	aux = n;
	factorial = 1;

	do {
		factorial *= aux--;
	}while(aux > 1);
	
	printf("\nEl factorial de %d es %ld (bucle do_while)", n, factorial);

	return 0;
}
