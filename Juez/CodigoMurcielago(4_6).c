#include <stdio.h>

int main()
{
    int n, i, n_individuales[4], salidaScanf;
    char cadena[4];

    salidaScanf = scanf("%d", &n);

    if (salidaScanf != 1)
        return 1;

    n_individuales[3] = n % 10;
    n_individuales[2] = n / 10 % 10;
    n_individuales[1] = n / 100 % 10;
    n_individuales[0] = n / 1000;

    for (i = 0; i < (sizeof n_individuales) / (sizeof i); i++)
    {
        switch (n_individuales[i])
        {
        case 9:
            cadena[i] = 'M';
            break;
        case 8:
            cadena[i] = 'U';
            break;
        case 7:
            cadena[i] = 'R';
            break;
        case 6:
            cadena[i] = 'C';
            break;
        case 5:
            cadena[i] = 'I';
            break;
        case 4:
            cadena[i] = 'E';
            break;
        case 3:
            cadena[i] = 'L';
            break;
        case 2:
            cadena[i] = 'A';
            break;
        case 1:
            cadena[i] = 'G';
            break;
        case 0:
            cadena[i] = 'O';
            break;
        }
    }

    printf("%s", cadena);

    return 0;
}