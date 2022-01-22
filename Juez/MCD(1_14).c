#include <stdio.h>

int main()
{
    int a, b, c, salidaScanf;

    salidaScanf = scanf("%d %d", &a, &b);

    if (salidaScanf != 2)
        return 1;

    do
    {
        c = a % b;

        if (c != 0)
        {
            a = b;
            b = c;
        }

    } while (c != 0);

    printf("%d", b);

    return 0;
}