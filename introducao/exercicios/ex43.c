#include <stdio.h>

int main()
{
    float valor;
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Valor com desconto: %.2f\n", (valor * 0.9));
    printf("Valor de cada parcela: %.2f\n", (valor / 3));
    printf("Comissao a vista: %.2f\n", ((valor * 0.9) * 0.05));
    printf("Comissao parcelada: %.2f\n", (valor * 0.05));

    return 0;
}
