#include <stdio.h>

int getMCD(int, int);
int getMCM(int, int, int);

int main() {
	int x, y;

	printf("Introduzca los dos numeros enteros a calcular su MCM y MCD: ");
	scanf("%d %d", &x, &y);

	printf("El MCD es: %d\n", getMCD(x, y));
	printf("El MCM es: %d\n", getMCM(x, y, getMCD(x, y)));

	return 0;
}

int getMCD(int x, int y) {
	int c;
	
	do {
		c =  x % y;
		
		if(c) {
			x = y;
			y = c;
		}
	} while(c);
	
	return y;
}

int getMCM(int x, int y, int mcd) {
	return x * y / mcd;
}
