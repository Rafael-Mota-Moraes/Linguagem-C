#include <stdio.h>

int main()
{
    float ms, kmh;

    printf("Digite a velocidade em metros por segundo: ");
    scanf("%f", &ms);

    kmh = ms * 3.6;

    printf("Velocidade em km/h: %f", kmh);

    return 0;
}
