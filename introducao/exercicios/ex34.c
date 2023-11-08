#include <stdio.h>

int main()
{
    float raio;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    float area = 3.14 * (raio * raio);

    printf("Area: %f", area);

    return 0;
}
