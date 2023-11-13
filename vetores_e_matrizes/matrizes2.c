#include <stdio.h>

// matrizes parte 2

int main()
{
    float valores[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            valores[i][j] = i + j;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%.2f ", valores[i][j]);
        }
        printf("\n");
    }

    return 0;
}
