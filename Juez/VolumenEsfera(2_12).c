#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main()
{
    int salidaScanf;
    double r;

    salidaScanf = scanf("%lf", &r);

    if (salidaScanf != 1)
        return 1;

    printf("%.3lf", 4.0 / 3 * PI * pow(r, 3));

    return 0;
}