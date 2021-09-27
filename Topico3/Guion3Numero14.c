// Ejercicio Guion 3 numero 14

#include <stdio.h>

int main() {
	unsigned int fecha;
	int temp, tarotNumber;

	printf("Introduzca su fecha de nacimiento en formato AAAAMMDD: ");
	scanf("%d", &fecha);

	temp = fecha % 100 + fecha / 100 % 100 + fecha / 10000;

	tarotNumber = temp % 10 + temp / 10 % 10 + temp / 100 % 10 + temp / 1000;

	tarotNumber = (tarotNumber > 9) ? tarotNumber % 10 + tarotNumber / 10 : tarotNumber;

	printf("\nEl numero es: %d", tarotNumber);

	return 0;
}
