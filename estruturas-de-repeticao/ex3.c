#include <stdio.h>

int main()
{
    int atual, menor = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &atual);

        if (i == 0)
        {
            menor = atual;
        }

        if (atual <= menor)
        {
            menor = atual;
        }
    }

    printf("Menor numero: %d", menor);

    return 0;
}
