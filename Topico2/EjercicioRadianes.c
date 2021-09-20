#include <stdio.h>

int main()
{
	int grados;
	double radianes;
	const double PI = 3.14159;

	printf("Introduzca los grados a pasar a radianes:");
	scanf("%d", &grados);

	radianes = (PI / 180) * grados;

	printf("%lf", radianes);

	return 0;
}
