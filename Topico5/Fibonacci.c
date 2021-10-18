#include <stdio.h>

int main() {
	int m;
	unsigned int aux = 0, aux2 = 1, i;
	unsigned long n_fibonacci = 1;
	
	printf("Introduzca el numero POSITIVO entre 1 y 50: ");
	scanf("%d", &m);
	
	if(m < 1 || m > 50) {
		printf("Numero entre 1 y 50\nSaliendo...");
		return 1;
	}
	
	for(i = 1; i <= m; i++) {
		printf("%ld ", n_fibonacci);
		n_fibonacci = aux + aux2;
		aux = aux2;
		aux2 = n_fibonacci;
	}

	return 0;
}
