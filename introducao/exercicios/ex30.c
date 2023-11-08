#include <stdio.h>

int main()
{
    float real, dolar, dolar_preco;

    printf("Digite um valor em real: ");
    scanf("%f", &real);

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &dolar_preco);

    dolar = real * dolar_preco;

    printf("Valor em dolar: %f", dolar);

    return 0;
}
