#include <stdio.h>

int main()
{
    int degrau;
    float altura;
    printf("Digite a altura do degrau: ");
    scanf("%d", &degrau);

    printf("Digite a altura da escada: ");
    scanf("%f", &altura);

    int total_degraus = altura / degrau;

    printf("Total de degraus: %d", total_degraus);

    return 0;
}
