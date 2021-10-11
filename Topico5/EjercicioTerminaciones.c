#include <stdio.h>
#include <limits.h>

int main() {
	int i, suma, bandera, aux = INT_MIN;

	printf("\n--------------------CONTADOR-----------------\n");

	for(i = 0; i <= 20; i++) 
		printf("%d\t", i);

	printf("\n--------------------ACUMULADOR-----------------\n");

	suma = 0;
	i = 0;

	while(suma <= 100) {
		printf("%d\t", i);
		suma += i++;
	}
	
	printf("\n--------------------CENTINELA-----------------\n");

	while(i != -1) {
		printf("\nIntroduzca el numero a mostrar (-1 para salir): ");
		scanf("%d", &i);
		printf("%d", i);
	}
	
	printf("\n--------------------BANDERA-----------------\n");
	
	bandera = 1;
	
	while(bandera) {
		printf("\nIntroduzca numeros en orden creciente: ");
		scanf("%d", &i);
		printf("%d", i);
		
		bandera = (i <= aux) ? 0 : 1;
		aux = i;
	}

	return 0;
}
