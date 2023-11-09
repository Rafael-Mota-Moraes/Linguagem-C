#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero de 4 digitos: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999)
    {
        printf("O numero digitado nao possui 4 digitos.\n");
    }
    else
    {
        int d1, d2, d3, d4;

        d1 = num / 1000; // Primeiro dígito (mais significativo)
        num %= 1000;
        d2 = num / 100; // Segundo dígito
        num %= 100;
        d3 = num / 10; // Terceiro dígito
        d4 = num % 10; // Quarto dígito (menos significativo)

        printf("Digito 1: %d\n", d1);
        printf("Digito 2: %d\n", d2);
        printf("Digito 3: %d\n", d3);
        printf("Digito 4: %d\n");
    }

    return 0;
}
