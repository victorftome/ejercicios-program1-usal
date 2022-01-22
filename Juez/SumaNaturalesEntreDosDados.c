#include <stdio.h>

int main()
{
    int a, b, i, suma, salidaScanf;

    salidaScanf = scanf("%d %d", &a, &b);

    if (salidaScanf != 2)
        return 1;

    suma = 0;

    for (i = a; i <= b; i++)
        suma += i;

    printf("%d", suma);

    return 0;
}