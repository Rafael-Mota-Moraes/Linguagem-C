#include <stdio.h>

int main()
{
    float metros_cubicos, litros;
    printf("Digite o valor em litros: ");
    scanf("%f", &litros);

    metros_cubicos = litros / 1000;

    printf("Em metros_cubicos: %f", metros_cubicos);

    return 0;
}
