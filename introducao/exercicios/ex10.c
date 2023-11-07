#include <stdio.h>

int main()
{
    float km, ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &km);

    ms = km / 3.6;

    printf("Velocidade em metros por segundo: %f", ms);

    return 0;
}