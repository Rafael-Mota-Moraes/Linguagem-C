#include <stdio.h>

// Vetores - parte 12

int main()
{
    // vetores de inteiros
    int numeros[5]; // 0..4
    numeros[0] = 1;
    numeros[1] = 3;
    numeros[2] = 5;
    numeros[3] = 7;
    numeros[4] = 9;

    // vetores de reais
    float valores[5]; // 0..4

    for (int i = 0; i < 5; i++)
    {
        valores[i] = (float)numeros[i] / 2.0;
    }

    for (int i = 4; i >= 0; i--)
    {
        printf("%.2f ", valores[i]);
    }

    return 0;
}
