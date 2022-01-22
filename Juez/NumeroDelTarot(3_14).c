#include <stdio.h>

int main()
{
    unsigned int fecha;
    int temp, tarotNumber, salidaScanf;

    salidaScanf = scanf("%d", &fecha);

    if (salidaScanf != 1)
        return 1;

    temp = fecha % 100 + fecha / 100 % 100 + fecha / 10000;

    tarotNumber = temp % 10 + temp / 10 % 10 + temp / 100 % 10 + temp / 1000;

    tarotNumber = (tarotNumber > 9) ? tarotNumber % 10 + tarotNumber / 10 : tarotNumber;

    printf("%d", tarotNumber);

    return 0;
}