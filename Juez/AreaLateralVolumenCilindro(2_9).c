#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main()
{
    double r, h;
    int salidaScanf;

    salidaScanf = scanf("%lf %lf", &r, &h);

    if (salidaScanf != 2)
        return 1;

    printf("%.4lf\n%.4lf", 2 * PI * r * h, PI * pow(r, 2) * h);

    return 0;
}