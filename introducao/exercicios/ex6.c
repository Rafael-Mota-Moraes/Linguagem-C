#include <stdio.h>

int main()
{
    float celsius;

    printf("Digite a temperatura em celsius: ");
    scanf("%f", &celsius);

    float f = celsius * (9.0 / 5.0) + 32.0;

    printf("Temperatura convertida: %f", f);
}