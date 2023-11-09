#include <stdio.h>

int main()
{
    float valor_da_hora;
    int qtd_horas;

    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valor_da_hora);

    printf("Agora digite a quantidade de horas trabalhadas: ");
    scanf("%d", &qtd_horas);

    float total = qtd_horas * valor_da_hora;
    float total_com_acrescimo = total * 1.1;

    printf("Total: %.2f", total_com_acrescimo);

    return 0;
}
