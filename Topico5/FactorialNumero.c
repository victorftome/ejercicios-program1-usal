#include <stdio.h>

int main() {
	int n, i, salidaScanf;
	double factorial = 1;

	salidaScanf = scanf("%d", &n);

	if(n < 0 || salidaScanf != 1)
		return 1;

	for(i = n; i > 0; i--)
		factorial *= i;

	printf("%lg", factorial);

	return 0;
}
