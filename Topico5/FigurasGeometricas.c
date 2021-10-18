#include <stdio.h>

int main(){
	int n, i, j;
	char interior, exterior;

	printf("Introduzca el caracter exterior e interior: ");
	scanf("%c %c", &exterior, &interior);
	
	printf("Introduzca la altura: ");
	scanf("%d", &n);

	for(i = 0; i <= n; i++) {
		for(j = 1; j <= n - i; j++)
			printf(" ");

		for(j = 1; j <= i * 2; j++)
			printf("%c", interior);
			
		for(j = 1; j <= n - i; j++)
			printf(" ");
			
		printf("\n");
	}
	
	for(i = n - 1; i >= 0; i--) {
		for(j = 1; j <= n - i; j++)
			printf(" ");

		for(j = 1; j <= i * 2; j++)
			printf("%c", interior);
			
		for(j = 1; j <= n - i; j++)
			printf(" ");
			
		printf("\n");
	}
	
	printf("\n");
	
	for(i = 0; i <= n; i++) {
		for(j = 1; j <= n - i; j++)
			printf("%c", exterior);

		for(j = 1; j <= i * 2; j++)
			printf(" ");
			
		for(j = 1; j <= n - i; j++)
			printf("%c", exterior);
			
		printf("\n");
	}
	
	for(i = n - 1; i >= 0; i--) {
		for(j = 1; j <= n - i; j++)
			printf("%c", exterior);

		for(j = 1; j <= i * 2; j++)
			printf(" ");
			
		for(j = 1; j <= n - i; j++)
			printf("%c", exterior);
			
		printf("\n");
	}
	
	printf("\n");
	
	for(i = 0; i <= n; i++) {
		for(j = 1; j <= n - i; j++)
			printf("%c", exterior);

		for(j = 1; j <= i * 2; j++)
			printf("%c", interior);
			
		for(j = 1; j <= n - i; j++)
			printf("%c", exterior);
			
		printf("\n");
	}
	
	for(i = n - 1; i >= 0; i--) {
		for(j = 1; j <= n - i; j++)
			printf("%c", exterior);

		for(j = 1; j <= i * 2; j++)
			printf("%c", interior);
			
		for(j = 1; j <= n - i; j++)
			printf("%c", exterior);
			
		printf("\n");
	}

	return 0;
}
