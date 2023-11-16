#include <stdio.h>

// Protótipo da função
/*
Assinatura das funções
- Tipo de retorno
- Nome
- Parâmetros de entrada
*/
int soma(int num1, int num2);
void mensagem();

int main()
{
    int n1, n2;
    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);

    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    int retorno = soma(n1, n2);
    printf("Resultado da soma: %d\n", retorno);
    mensagem();

    return 0;
}

int soma(int num1, int num2)
{
    return num1 + num2;
}

void mensagem()
{
    printf("Bem vindo!");
}
