#include <stdio.h>

int main()
{
    float f;

    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &f);

    float celsius = 5.0 * (f - 32.0) / 9.0;

    printf("Temperatura convertida: %f", celsius);
}