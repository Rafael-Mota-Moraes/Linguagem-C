#include <stdio.h>
#include <stdlib.h>

/*
Crie um programa que:
a) Aloque dinamicamente um array de 5 números inteiros;
b) Peça para o usuário informar os 5 números no espaço alocado;
c) Mostre na tela os 5 valores;
d) Libere a memória alocada;
*/

int main()
{
    int *arr;
    arr = (int *)malloc(5 * sizeof(int));

    if (arr)
    {
        for (int i = 0; i < 5; i++)
        {
            printf("Digite um número: ");
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < 5; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
