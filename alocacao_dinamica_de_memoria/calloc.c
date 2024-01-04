#include <stdio.h>
#include <stdlib.h>

/*
qtd = 3

Malloc
    [3][5][99]
    Malloc não remove lixo da memória

Calloc
    [0][0][0]
    Calloc zera o espaço em memória
*/
int main()
{
    int qtd, *p;
    printf("Informe a quantidade de elementos para o vetor: ");
    scanf("%d", &qtd);

    int bytes = qtd * sizeof(int);

    p = (int *)calloc(qtd, sizeof(int));

    if (p)
    {
        for (int i = 0; i < qtd; i++)
        {
            printf("Informe o valor para a posição %d do vetor: ", i);
            scanf("%d", &p[i]);
        }

        for (int i = 0; i < qtd; i++)
        {
            printf("No vetor 'numeros[%d]' está o valor: %d\n", i, p[i]);
        }
    }
    else
    {
        printf("Erro: Memória insuficiente!\n");
        return 1;
    }
    printf("A variável 'numeros' ocupa %d bytes em memória.\n", bytes);

    // SEMPRE liberar a memória
    free(p);
    p = NULL;
    return 0;
}
