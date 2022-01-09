#include <stdio.h>

int divisores(int);
int amigos(int, int);

int main() {
	int n1, n2;

	do {
		printf("Introduzca dos numeros enteros positivos a comprobar si son primos: ");
		scanf(" %d %d", &n1, &n2);
	} while(n1 <= 0 || n2 <= 0);

	if(amigos(n1, n2)) printf("Los numeros son amigos.");
	else printf("Los numeros no son amigos");

	return 0;
}

int divisores(int n) {
	int suma = 0, i;

	for(i = 1; i <= n/2; i++)
		if(!(n%i)) suma += i;

	return suma;
}

int amigos(int n1, int n2) {
	if(divisores(n1) == n2 && divisores(n2) == n1) return 1;

	return 0;
}
