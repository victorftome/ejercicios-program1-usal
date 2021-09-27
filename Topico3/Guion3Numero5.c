// Ejercicio Gruion 3 numero 5

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "spanish");
	
	double n;
	
	printf("Introduzca una numero mayor que 0 y real: ");
	scanf("%lf", &n);

	printf("Número introducido: %lf", n);
	printf("\nCuadrado: %lf", pow(n, 2));
	printf("\nCubo: %lf", pow(n, 3));
	printf("\nLogaritmo neperiano: %lf", log(n));
	printf("\nLogaritmo decimal: %lf", log10(n));
	printf("\nRaíz cuadrada: %lf", sqrt(n));
	
	return 0;
}
