#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd, *p;
    printf("Informe a quantidade de elementos para o vetor: ");
    scanf("%d", &qtd);

    int bytes = qtd * sizeof(int);

    p = (int *)malloc(qtd * sizeof(int));

    for (int i = 0; i < qtd; i++)
    {
        printf("Informe o valor para a posição %d do vetor: ", i);
        scanf("%d", &p[i]);
    }

    for (int i = 0; i < qtd; i++)
    {
        printf("No vetor 'numeros[%d]' está o valor: %d\n", i, p[i]);
    }

    printf("A variável 'numeros' ocupa %d bytes em memória.\n", bytes);

    // SEMPRE liberar a memória
    free(p);
    p = NULL;
    return 0;
}
