#include <stdio.h>

int main()
{
    float metros_cubicos, litros;
    printf("Digite o valor em metros cubicos: ");
    scanf("%f", &metros_cubicos);

    litros = 1000 * metros_cubicos;

    printf("Em litros: %f", litros);

    return 0;
}
