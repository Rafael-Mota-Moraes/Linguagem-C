#include <stdio.h>

int main()
{
    float metro_quadrado, acre;
    printf("Digite em metro_quadrado: ");
    scanf("%f", &metro_quadrado);

    acre = metro_quadrado * 0.000247;

    printf("%f", acre);

    return 0;
}
