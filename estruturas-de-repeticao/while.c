#include <stdio.h>

/*
While

Faça um programa, no qual receba e some numeros inteiros
até que o numero de entrada seja 0 e apresente a soma no final;
*/

int main()
{
    int numero, soma = 0;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    while (numero != 0)
    {
        soma += numero;

        printf("Informe um numero: ");
        scanf("%d", &numero);
    }

    printf("Soma: %d", soma);

    return 0;
}
