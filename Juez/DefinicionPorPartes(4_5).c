#include <stdio.h>
#include <math.h>

#define e 2.71828

int main()
{
    float n;
    int salidaScanf;

    salidaScanf = scanf("%f", &n);

    if (salidaScanf != 1)
        return 1;

    if (n < -1)
        printf("%f", pow(n, 2) - pow(n, 3));

    if (n >= -1 && n < 2)
        printf("%.16f", pow(e, n + 1));

    if (n >= 2 && n <= 5)
        printf("%.16f", log(n));

    if (n > 5)
        printf("%f", pow(n, 2) - n);

    return 0;
}