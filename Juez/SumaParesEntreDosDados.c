#include <stdio.h>

int main()
{
    int x, y, i, salidaScanf;
    unsigned long suma = 0;

    salidaScanf = scanf("%d %d", &y, &x);

    if (salidaScanf != 2)
        return 1;

    for (i = (y % 2 == 0 ? y + 2 : y + 1); i < x; i += 2)
        suma += i;

    printf("%lu", suma);

    return 0;
}