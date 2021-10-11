#include <stdio.h>

int main(){
	int n, i, j;
	char c;
	
	printf("Introduzca la altura y el caracter a usar: ");
	scanf("%d %c", &n, &c);

	for(i = 0; i < n; i++) {
		for(j = 0; j <= i; j++)
			printf("%c", c);

		for(j = 0; j <= n - 1; j++)
			printf(" ");
			
		printf("\n");
	}
	
	for(i = n; i >= 0; i--) {
		for(j = 0; j <= i; j++)
			printf("%c", c);

		for(j = 0; j <= n - 1; j++)
			printf(" ");
			
		printf("\n");
	}

	return 0;
}
