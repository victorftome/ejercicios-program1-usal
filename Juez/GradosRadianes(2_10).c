#include <stdio.h>

#define PI 3.14159

int main()
{
    int grados, retornoScanf;
    double radianes;

    retornoScanf = scanf("%d", &grados);

    if (retornoScanf != 1)
        return 1;

    radianes = (PI / 180) * grados;

    printf("%lf", radianes);

    return 0;
}