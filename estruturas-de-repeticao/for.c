#include <stdio.h>

// Estruturas de repetição (for, while, do..while)

/*
Utilizando o For.
Faça um programa, no qual receba e some 5 numeros inteiros
e apresente a soma no final;
*/

int main()
{
    // variáveis
    int numero, soma = 0;

    // entrada
    for (int i = 0; i < 5; i++)
    {
        printf("Informe um numero: ");
        scanf("%d", &numero);
        // processamento

        soma = soma + numero;
    }

    // saida

    printf("A soma foi: %d", soma);

    return 0;
}
