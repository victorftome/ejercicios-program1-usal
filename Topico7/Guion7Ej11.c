#include <stdio.h>
#include <string.h>

#define MAX 1000

int main() {
	char cadena [MAX];
	int posiciones [MAX];

	char c;
	int cont = 0, i;
	printf("Introduzca su cadena: ");
	gets(cadena);
	
	printf("Introduzca el caracter a buscar en la cadena: ");
	scanf(" %c", &c);

	printf("La longitud de la frase es de: %d", strlen(cadena));
	
	for(i = 0; i < strlen(cadena); i++) {
		if(*(cadena + i) == c) {
			*(posiciones + cont) = i + 1;
			cont++;
		}
	}
	
	printf("\nEl numero de caracteres se ha encontrado un total de %d veces en las posiciones: ", cont);
	for(i = 0; i < cont; i++)
		printf("%d, ", *(posiciones + i));

	return 0;
}
