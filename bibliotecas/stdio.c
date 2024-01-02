#include <stdio.h>

// Funções de entrada e saída

// Acesso a arquivos:
// fclose();
// fflush(); limpar o buffer. (corrige um bug no windows + C)
// fopen();
// Entradas e saídas formatadas
// fscanf();
// printf();
// scanf();

// entradas e saídas de caracteres
// gets()
// fputs()
// getchar()
// fgets()

// tratamento de erros
// feof()

// tipos e macros
// FILE -> TIpo de dado para abrir arquivo
// EOF -> Representa o fim do arquivo
// NULL -> Valor nulo

int main()
{
    int num1, num2, soma;

    printf("Informe o num1: ");
    fflush(stdout);
    scanf("%d", &num1);

    printf("Informe o num2: ");
    fflush(stdout);
    scanf("%d", &num2);

    soma = num1 + num2;
    printf("A soma de %d com %d é %d\n", num1, num2, soma);

    return 0;
}
