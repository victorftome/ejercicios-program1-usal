#include <stdio.h>

int perfecto(int);

int main() {
	printf("Los primeros 4 numeros perfectos son: \n");
	int cont = 1;
	int centinela = 1;

	while(centinela <= 4) {
		if(perfecto(cont)) {
			printf("El numero %d es perfecto.\n", cont);
			++centinela;
		}

		++cont;
	}

	return 0;
}

int perfecto(int n) {
	int i, suma = 0;

	for(i = 1; i <= n/2; i++) {
		if(!(n%i)) suma += i;
	}

	if(suma == n) return 1;

	return 0;
}
