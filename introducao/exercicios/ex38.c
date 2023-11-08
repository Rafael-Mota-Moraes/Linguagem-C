#include <stdio.h>

int main()
{
    float salario;
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    float salario_com_aumento = salario * 1.25;

    printf("Salario com aumento: %.2f", salario_com_aumento);

    return 0;
}
