#include <stdio.h>

/*
Do..While

Faça um programa, no qual receba e some numeros inteiros
até que o numero de entrada seja 0 e apresente a soma no final;
*/

int main()
{
    int numero, soma = 0;

    do
    {
        printf("Informe um numero: ");
        scanf("%d", &numero);
        soma += numero;

    } while (numero != 0);

    printf("Soma: %d", soma);

    return 0;
}
