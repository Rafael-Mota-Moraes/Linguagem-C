#include <stdio.h>

// Função de ordenação Shell Sort
void quick_sort(int vetor[], int tam)
{
    int grupo = 1;

    // Gerar a sequência de lacunas com base no tamanho do vetor
    while (grupo < tam)
    {
        grupo = 3 * grupo + 1;
    }

    // Iterar pelo vetor enquanto houver grupos para ordenar
    while (grupo > 1)
    {
        // Dividir o grupo em 3 elementos
        grupo /= 3;

        // Iterar sobre o grupo
        for (int i = grupo; i < tam; i++)
        {
            int troca = vetor[i];
            int j = i - grupo;

            // Realizar a ordenação por inserção dentro do grupo
            while (j >= 0 && troca < vetor[j])
            {
                vetor[j + grupo] = vetor[j];
                j -= grupo;
            }

            vetor[j + grupo] = troca;
        }
    }
}

// Função principal
int main()
{
    // Vetor desordenado
    int vetor[6] = {8, 3, 1, 42, 12, 5};

    // Chamando a função de ordenação usando Shell Sort
    quick_sort(vetor, 6);

    // Exibindo o vetor ordenado
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");
    return 0;
}
