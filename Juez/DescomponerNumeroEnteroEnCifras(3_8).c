#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "spanish");
    int n, unidades, decenas, centenas, millar, temp, salidaScanf;

    salidaScanf = scanf("%d", &n);

    if (salidaScanf != 1)
        return 1;

    unidades = n % 10;
    temp = n / 10;

    decenas = temp % 10;
    temp /= 10;

    centenas = temp % 10;
    temp /= 10;

    millar = temp;

    printf("Número introducido........: %d", n);
    printf("\nUnidades de millar........: %d", millar);
    printf("\nCentenas..................: %d", centenas);
    printf("\nDecenas...................: %d", decenas);
    printf("\nUnidades..................: %d", unidades);

    return 0;
}