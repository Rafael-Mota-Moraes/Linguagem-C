#include <stdio.h>

/*
Aula sobre funções - usando funções
main -> principal

*/

void mensagem()
{
    printf("Bem-vindo!\n");
}

int soma(int num1, int num2)
{
    return num1 + num2;
}

void proximo_char(char caractere)
{
    printf("%c", caractere + 1);
}

int main()
{
    printf("Ola\n"); // printf é uma função!

    mensagem();

    int dez = soma(4, 6);
    printf("Resultado da soma: %d\n", dez);
    printf("Resultado da soma: %d\n", soma(5, 19));

    char caracter = 'a';
    proximo_char(caracter);

    return 0;
}
