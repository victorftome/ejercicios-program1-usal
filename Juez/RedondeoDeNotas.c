#include <stdio.h>
#include <math.h>

int main()
{
    float n;
    int salidaScanf;

    salidaScanf = scanf("%f", &n);

    if (salidaScanf != 1)
        return 1;

    if (n < 0)
    {
        printf("%.1f", 0.0);
        return 0;
    }

    if (n > 10)
    {
        printf("%.1f", 10.0);
        return 0;
    }

    printf("%.1f", round(n * 10) / 10);

    return 0;
}