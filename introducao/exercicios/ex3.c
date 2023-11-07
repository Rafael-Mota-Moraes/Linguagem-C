#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    int soma = n1 + n2 + n3;

    printf("Resultado da soma: %d", soma);

    return 0;
}