#include <stdio.h>

int main() {
	int m, i, salidaScanf;
	unsigned int aux = 0, aux2 = 1;
	unsigned long n_fibonacci = 0;
	
	salidaScanf = scanf("%d", &m);
	
	if(salidaScanf != 1)
		return 1;
	
	for(i = 0; i < m; i++) {
		aux = aux2;
		aux2 = n_fibonacci;
		n_fibonacci = aux + aux2;
	}
	
	printf("%ld", n_fibonacci);

	return 0;
}
