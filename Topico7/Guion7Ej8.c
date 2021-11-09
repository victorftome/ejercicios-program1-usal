#include <stdio.h>

#define SIZE 15

#define MIN 1000
#define MAX 7000

short checkDuplicates(int n, int arr[], int limit);
int* searchForKey(int value, int arr[]);

int main() {
	int claves[SIZE];
	int* ordenado[SIZE];
	int* aux = NULL;
	int n, i, j;

	for(i = 0; i < SIZE; i++) {
		printf("Introduzca el numero [%d]: ", i + 1);
		scanf(" %d", &n);
		
		claves[i] = n;
		
		if(n < MIN || n > MAX || checkDuplicates(n, claves, i)) i--;
	}

	i = 0;

	for(j = MIN; j <= MAX; j++) {
		if(aux = searchForKey(j, claves)) {
			printf("%d %p\n", *aux, aux);
			ordenado[i] = aux;
			i++;
		}
	}
	
	printf("El vector ordenado es:\n");
	for(i = 0; i < SIZE; i++) {
		printf("Valor: %d | Direccion: %p\n", *ordenado[i], ordenado[i]);
	}

	return 0;
}

short checkDuplicates(int n, int arr[], int limit) {
	int i;

	for(i = 0; i < limit; i++)
		if(n == arr[i]) return 1;

	return 0;
}

int* searchForKey(int value, int arr[]) {
	int i;
	
	for(i = 0; i < SIZE; i++)
		if(value == arr[i]) return (int *) &arr[i];
		
	return NULL;
}
