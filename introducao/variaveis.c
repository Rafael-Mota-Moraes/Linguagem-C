#include <stdio.h>

int main()
{ // a chave delimita um bloco de código (início do bloco de código)
    // Declarando variáveis
    int idade; // Inteiro (1, 2, 3, 4...)

    // Declarando e inicializando variáveis
    // int idade = 0;

    // Função para escrever algo na saída padrão (console)
    printf("Qual eh a sua idade? "); // Em c, o ponto e vírgula finaliza um comando

    // Receber dados do usuário
    scanf("%d", &idade);

    printf("Voce tem %d anos", idade);

    return 0;
} // (fim do bloco de código)