#include <stdio.h>

int main()
{
    float valor;
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    float valor_final = valor * (1.0 - 0.12);

    printf("Valor com desconto: %.2f", valor_final);

    return 0;
}
