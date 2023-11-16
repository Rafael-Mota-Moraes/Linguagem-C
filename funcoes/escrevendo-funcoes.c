#include <stdio.h>

/*
Aula sobre funções - escrevendo funções
main -> principal

estrutura das funçoes
- tipo de retorno
- nome
- parametros de entrada (opcional)
- implementação
- retorno (opcional)

*/

void mensagem()
{
    printf("Bem-vindo!");
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

    return 0;
}
