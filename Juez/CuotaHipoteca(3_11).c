#include <stdio.h>
#include <math.h>

int main()
{
    int capital, years, plazoMeses, salidaScanf;
    double interes, interesMensual;

    salidaScanf = scanf("%d %lf %d", &capital, &interes, &years);

    if (salidaScanf != 3)
        return 1;

    interesMensual = interes / 12;
    plazoMeses = years * 12;

    printf("%.13lf", (capital * interesMensual) / (100 * (1 - pow(1 + interesMensual / 100, plazoMeses * -1))));

    return 0;
}