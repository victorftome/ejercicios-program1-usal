#include <stdio.h>

int main()
{
    int numerador, denominador, salidaScanf;
    int i;

    salidaScanf = scanf("%d/%d", &numerador, &denominador);

    if (salidaScanf != 2)
        return 1;

    if (denominador < 0)
    {
        denominador *= -1;
        numerador *= -1;
    }

    for (i = 2; i < (numerador > denominador) ? denominador / 2 : numerador / 2; i++)
    {
        if (!(numerador % i) && !(denominador % i))
        {
            numerador /= i;
            denominador /= i;
            i--;
            continue;
        }

        break;
    }

    (numerador % denominador) ? printf("%d/%d", numerador, denominador) : printf("%d", numerador / denominador);

    return 0;
}