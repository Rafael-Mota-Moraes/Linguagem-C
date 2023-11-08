#include <stdio.h>

int main()
{
    int dias_trabalhados;

    printf("Qtd dias trabalhados: ");
    scanf("%d", &dias_trabalhados);

    float valor_recebido = (dias_trabalhados * 30) * 0.92;

    printf("Valor recebido: %f", valor_recebido);

    return 0;
}
