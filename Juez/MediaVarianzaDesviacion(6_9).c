#include <stdio.h>
#include <math.h>

#define MAX 1000

int main()
{
    double nums[MAX];
    int n, i;
    double media = 0, varianza = 0, desviacion;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%lf", &nums[i]);
        media += nums[i];
    }

    media /= n;

    for (i = 0; i < n; i++)
        varianza += pow(nums[i] - media, 2);

    varianza /= n;

    desviacion = sqrt(varianza);

    printf("%lf\n%lf\n%lf", media, varianza, desviacion);

    return 0;
}