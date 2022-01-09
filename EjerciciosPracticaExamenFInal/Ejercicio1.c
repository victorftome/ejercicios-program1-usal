#include <stdio.h>

long sumar(long, long, long);
long producto(long, long, long);
long calcular_mayor(long, long, long);

int main() {
	long n1, n2, n3;
	
	printf("Introduzca los numeros a sumar, multiplicar y buscar el mayor: ");
	scanf("%ld %ld %ld", &n1, &n2, &n3);

	printf("La suma es: %ld\nEl producto es: %ld\nEl mayor de los numeros es: %ld\n", sumar(n1, n2, n3), producto(n1, n2, n3), calcular_mayor(n1, n2, n3));

	return 0;
}

long sumar(long n1, long n2, long n3) {
	return n1 + n2 + n3;
}

long producto(long n1, long n2, long n3) {
	return n1 * n2 * n3;
}

long calcular_mayor(long n1, long n2, long n3) {
	if(n1 >= n2 && n1 >= n3) return n1;
	if(n2 >= n1 && n2 >= n3) return n2;
	if(n3 >= n1 && n3 >= n2) return n3;
}
