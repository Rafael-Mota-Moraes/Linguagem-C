#include <stdio.h>

int main()
{
    float C, P;

    printf("Digite o valor em centimetros: ");
    scanf("%f", &C);

    P = C / 2.54;

    printf("Valor em polegadas: %f", P);

    return 0;
}
