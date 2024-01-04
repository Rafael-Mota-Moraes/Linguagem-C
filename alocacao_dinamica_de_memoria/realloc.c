#include <stdio.h>
#include <stdlib.h>

// Realoc - Realocação de memória

/*
Malloc
Calloc
*/

int main()
{
    int qtd, *p;
    printf("Informe a quantidade de elementos para o vetor: ");
    scanf("%d", &qtd);

    p = (int *)malloc(qtd * sizeof(int));

    if (p)
    {
        printf("A variável 'numeros' ocupa %ld bytes em memória.\n", qtd * sizeof(int));

        printf("Informe a quantidade de elementos para o vetor: ");
        scanf("%d", &qtd);

        p = (int *)realloc(p, qtd * sizeof(int));

        if (p)
        {
            printf("A variável 'numeros' ocupa %ld bytes em memória.\n", qtd * sizeof(int));
        }
        else
        {
            printf("Memória insuficiente!");
        }
    }
    else
    {
        printf("Memória insuficiente!");
    }

    // SEMPRE liberar a memória
    free(p);
    p = NULL;
    return 0;
}
