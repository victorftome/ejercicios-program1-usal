#include <stdio.h>
#include <ctype.h>
#include <locale.h>

#define ROWS 3
#define COLS 4

const char VLETRAS[] = {'A', 'F', 'H', 'K', 'L', 'O', 'S', 'U', 'X', 'Z'};

char* searchLetter(char* c);

int main() {
	setlocale(LC_ALL, "spanish");

	int i, j;
	char c;

	char* mapa [ROWS][COLS];

	for(i = 0; i < ROWS; i++) {
		for(j = 0; j < COLS; j++) {
			printf("Introduzca carácter [%d][%d]: ", i + 1, j + 1);
			scanf(" %c", &c);
			
			mapa[i][j] = searchLetter(&c);
		}
		
		printf("\n");
	}
	
	for(i = 0; i < ROWS; i++) {
		for(j = 0; j < COLS; j++) {
				printf("| %c ", (mapa[i][j]) ? *(mapa[i][j]) : '*');
		}
		
		printf("|\n");
	}

	return 0;
}

char* searchLetter(char* c) {
	int i;

	for(i = 0; i < sizeof(VLETRAS) / sizeof(char); i++) {
		if(toupper(*c) == VLETRAS[i])
			return (char *) &VLETRAS[i];
	}
	
	return NULL;
}
