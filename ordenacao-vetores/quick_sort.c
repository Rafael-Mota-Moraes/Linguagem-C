#include <stdio.h>

// Protótipo da função de ordenação Quick Sort
void quick_sort(int vetor[], int inicio, int fim);

// Função de ordenação Quick Sort
void quick_sort(int vetor[], int inicio, int fim)
{
    int i, j, grupo, troca;

    // Critério de parada da recursividade
    if (inicio < fim)
    {
        grupo = vetor[(inicio + fim) / 2];
        i = inicio - 1;
        j = fim + 1;

        // fazendo um loop único se comportar como 2
        while (1)
        {
            // Fazermos a movimentação dos elementos no vetor
            while (vetor[++i] < grupo)
                ;

            // Fazermos a movimentação dos elementos no vetor
            while (vetor[--j] > grupo)
                ;

            // Critério de parada do loop
            if (i >= j)
            {
                break;
            }
            else
            {
                // Onde ocorrem as trocas
                troca = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = troca;
            }
        }

        // Usar a recursividade para ordenar os grupos
        quick_sort(vetor, inicio, j);
        quick_sort(vetor, j + 1, fim);
    }
}

// Função principal
int main()
{
    // Vetor desordenado
    int vetor[6] = {8, 3, 1, 42, 12, 5};

    // Chamando a função de ordenação usando Quick Sort
    quick_sort(vetor, 0, 5);

    // Exibindo o vetor ordenado
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");
    return 0;
}
