// Ejercicio Guion 3 Numero 8
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "spanish");
	int n, unidades, decenas, centenas, millar, invertido, temp;

	printf("Introduzca un n�mero entero de hasta 4 cifras: ");
	scanf("%d", &n);

	unidades = n % 10;
	temp = n / 10;

	decenas = temp % 10;
	temp /= 10;

	centenas = temp % 10;
	temp /= 10;

	millar = temp;

	printf("N�mero introducido......: %d", n);
	printf("\nUnidades de millar......: %d", millar);
	printf("\nCentenas................: %d", centenas);
	printf("\nDecenas.................: %d", decenas);
	printf("\nUnidades................: %d", unidades);

	invertido = millar + centenas * 10 + decenas * 100 + unidades * 1000;

	printf("\n\nN�mero invertido..........: %d", invertido);
	printf("\nSuma de ambos.............: %d + %d = %d", n, invertido, n + invertido);

	return 0;
}
