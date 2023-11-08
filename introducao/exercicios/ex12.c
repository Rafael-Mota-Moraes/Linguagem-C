#include <stdio.h>

int main()
{
    float milhas, kms;

    printf("Informe a velocidade em milhas: ");
    scanf("%f", &milhas);

    kms = 1.61 * milhas;

    printf("A velocidade em km/h eh: %f", kms);

    return 0;
}
