#include <stdio.h>

#define MAX 100
#define MIN 1

int main() {
	int n, i, aux;
	int nums[MAX];
	
	do{
		printf("Introduzca el numero de valores a introducir: ");
		scanf(" %d", &n);
	}while(n < MIN || n > MAX);
	
	for(i = 0; i < n; i++) {
		printf("%d: Introduzca un numero: ", i + 1);
		scanf(" %d", &nums[i]);
	}
	
	printf("El vector introducido es: \n");
	
	for(i = 0; i < n; i++)
		printf("%d ", nums[i]);
		
	printf("\nEl vector invertido es: \n");
	
	for(i = 0; i < n / 2; i++) {
		aux = nums[i];
		nums[i] = nums[n - i - 1];
		nums[n - i - 1] = aux;
	}

	for(i = 0; i < n; i++)
		printf("%d ", nums[i]);

	return 0;
}
