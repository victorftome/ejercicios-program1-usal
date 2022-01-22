#include <stdio.h>

#define MAX_COL 25
#define MAX_ROW 25

#define MIN_COL 3
#define MIN_ROW 3

int main()
{
    int vectorMarco[MAX_ROW][MAX_COL];
    int rows, cols, i, j, sumaMarco = 0, sumaInteriores = 0;

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
        {
            scanf(" %d", &vectorMarco[i][j]);
        }

    for (i = 0; i < cols; i++)
    {
        sumaMarco += vectorMarco[0][i];
        sumaMarco += vectorMarco[rows - 1][i];
    }

    for (i = 1; i < rows - 1; i++)
    {
        sumaMarco += vectorMarco[i][0];
        sumaMarco += vectorMarco[i][cols - 1];
    }

    for (i = 1; i < rows - 1; i++)
        for (j = 1; j < cols - 1; j++)
            sumaInteriores += vectorMarco[i][j];

    printf("Borde:    %d\n", sumaMarco);
    printf("Interior: %d\n", sumaInteriores);

    (sumaMarco > sumaInteriores) ? printf("La matriz es un marco.") : printf("La matriz no es un marco.");

    return 0;
}