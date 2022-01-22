#include <stdio.h>
#include <string.h>

#define MAX 300000

int main()
{
    int i, size, flag = 0;
    char aux;
    char chars[MAX];

    scanf(" %[^\n]s", &chars);

    size = strlen(chars);

    char cadena[MAX];

    for (i = 0; i < size; i++)
        cadena[i] = chars[i];

    for (i = 0; i < size / 2; i++)
    {
        aux = cadena[i];
        cadena[i] = cadena[size - i - 1];
        cadena[size - i - 1] = aux;
    }

    for (i = 0; i < size; i++)
        printf("%c", cadena[i]);

    return 0;
}