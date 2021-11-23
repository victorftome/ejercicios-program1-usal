#include <stdio.h>
#include <math.h>

int sumaPrimeroEnteros(int n);
int sumaParesEntreNumeros(int m, int n);
int sumaDeUnaSerie(int x, int n);
long inversoLong(long n);

int main() {
	printf("====== Suma de los n primeros enteros ======\n");
	printf("n: %d | suma: %d\n", 1, sumaPrimeroEnteros(1));
	printf("n: %d | suma: %d\n", 3, sumaPrimeroEnteros(3));
	printf("n: %d | suma: %d\n", 8, sumaPrimeroEnteros(8));
	printf("n: %d | suma: %d\n", 23, sumaPrimeroEnteros(23));

	printf("\n====== Suma de los pares entre dos numeros ======\n");
	printf("m: %d, n: %d | suma: %d\n", 1, 24, sumaParesEntreNumeros(1, 24));
	printf("m: %d, n: %d | suma: %d\n", -8, 3, sumaParesEntreNumeros(-8, 3));
	printf("m: %d, n: %d | suma: %d\n", 100, 145, sumaParesEntreNumeros(100, 145));
	printf("m: %d, n: %d | suma: %d\n", -1, 1, sumaParesEntreNumeros(-1, 1));
	
	printf("\n====== Suma de una serie ======\n");
	printf("x: %d, n: %d | suma: %d\n", 1, 12, sumaDeUnaSerie(1, 12));
	printf("x: %d, n: %d | suma: %d\n", -2, 7, sumaDeUnaSerie(-2, 7));
	printf("x: %d, n: %d | suma: %d\n", 12, 5, sumaDeUnaSerie(12, 5));
	printf("x: %d, n: %d | suma: %d\n", 3, 4, sumaDeUnaSerie(3, 4));

	printf("\n====== Invertido de un long ======\n");
	printf("n: %ld | invertido: %ld\n", 1, inversoLong(1));
	printf("n: %ld | invertido: %ld\n", 330, inversoLong(330));
	printf("n: %ld | invertido: %ld\n", 1789, inversoLong(1789));
	printf("n: %ld | invertido: %ld\n", 178900, inversoLong(178900));
	printf("n: %ld | invertido: %ld\n", 13674368, inversoLong(13674368));

	return 0;
}

int sumaPrimeroEnteros(int n) {
	int i, suma = 0;

	for(i = 0; i <= n; i++) suma += i;
	
	return suma;
}

int sumaParesEntreNumeros(int m, int n) {
	int i, suma = 0;
	
	for(i = (m < n) ? ((m % 2) ? m + 1 : m ) : ((n % 2) ? n + 1 : n); i <= ((m < n) ? n : m); i += 2)
		suma += i;

	return suma;
}

int sumaDeUnaSerie(int x, int n) {
	int i, suma = 1;
	
	for(i = 2; i <= n; i++)
		suma += pow(x, i);

	return suma;
}

long inversoLong(long n) {
	long invertido = 0;

	while(n) {
		invertido *= 10;
		invertido += n % 10;
		n /= 10;
	}

	return invertido;
}
