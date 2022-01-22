#include <stdio.h>

#define MAX 9999

int main()
{
    int n, i, aux;

    scanf(" %d", &n);

    int nums[MAX];

    for (i = 0; i < n; i++)
    {
        scanf(" %d", &nums[i]);
    }

    for (i = 0; i < n / 2; i++)
    {
        aux = nums[i];
        nums[i] = nums[n - i - 1];
        nums[n - i - 1] = aux;
    }

    for (i = 0; i < n; i++)
        printf("%d ", nums[i]);

    return 0;
}