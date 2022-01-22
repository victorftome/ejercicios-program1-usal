#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main()
{
    float x, y, radio, angulo, salidaScanf;

    salidaScanf = scanf("%f %f", &x, &y);

    if (salidaScanf != 2)
        return 1;

    radio = sqrt(pow(x, 2) + pow(y, 2));
    angulo = atan2(y, x) * 180 / PI;

    if (angulo < 0)
        angulo += 360;

    printf("%f %f", radio, angulo);

    return 0;
}