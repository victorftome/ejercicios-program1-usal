#include <stdio.h>
#include <math.h>

int check_primo(long);

int main() {
	long num;

	do {
		printf("Introduzca el numero ENTERO POSITIVO a comprobar si es primo: ");
		scanf(" %ld", &num);
	} while(num <= 0);

	if(check_primo(num))
		printf("El numero es primo");
	else
		printf("El numero no es primo");

	return 0;
}

int check_primo(long num)  {
	int i;

	for(i = 2; i <= sqrt(num); i++)
		if(!(num % i))
			return 0;

	return 1;
}
