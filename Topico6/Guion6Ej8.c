#include <stdio.h>
#include <string.h>

#define MAX 300000

int main() {
	int i, size, flag = 0;
	char aux;
	char chars[MAX];

	do {
		printf("Introduzca la cadena: ");
		scanf(" %[^\n]s", &chars);
		
		size = strlen(chars);
		
		char cadena[size];
		
		for(i = 0; i < size; i++)
			cadena[i] = chars[i];
		
		printf("La cadena es: \n");
		
		for(i = 0; i < size; i++)
			printf("%c", cadena[i]);
			
		printf("\nLa cadena invertida es: \n");
		
		for(i = 0; i < size / 2; i++) {
			aux = cadena[i];
			cadena[i] = cadena[size - i - 1];
			cadena[size - i - 1] = aux;
		}
	
		for(i = 0; i < size; i++)
			printf("%c", cadena[i]);

		printf("\nDesea introducir otra cadena? (0 - no / 1 - si): " );
		scanf(" %d", &flag);
		
		printf("\n\n");
	}while(flag);

	return 0;
}
