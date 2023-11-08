#include <stdio.h>

int main()
{
    float metro_quadrado, acre;
    printf("Digite em acre: ");
    scanf("%f", &acre);

    metro_quadrado = acre * 4048.58;

    printf("%f", metro_quadrado);

    return 0;
}
