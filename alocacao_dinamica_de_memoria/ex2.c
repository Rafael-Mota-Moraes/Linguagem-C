#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa aloque inicialmente um vetor com 3 inteiros, pergunte ao usuário quantos valores ele quer informar, use REALLOC caso seja mais que 3 valores, leia e apresente os valores.
*/
int main()
{
    int *arr, qtd;
    arr = (int *)malloc(qtd * sizeof(int));

    printf("Quantos números deseja armazenar? ");
    scanf("%d", &qtd);

    arr = realloc(arr, qtd * sizeof(int));

    for (int i = 0; i < qtd; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < qtd; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
