#include <stdio.h>

int main()
{
    int n, salidaScanf, i;
    double suma = 0;

    salidaScanf = scanf("%d", &n);

    if (salidaScanf != 1)
        return 1;

    for (i = 1; i <= n; i++)
        suma += 1.0 / i;

    printf("%lg", suma);

    return 0;
}