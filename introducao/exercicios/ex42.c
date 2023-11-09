#include <stdio.h>

int main()
{
    float salario, desconto;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    desconto = salario * 0.07;
    printf("Recebera: %f", (salario * 1.05 - desconto));

    return 0;
}
