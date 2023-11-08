#include <stdio.h>

int main()
{
    float milhas, kms;

    printf("Informe a velocidade em kilometros: ");
    scanf("%f", &kms);

    milhas = kms / 1.61;

    printf("A velocidade em milhas eh: %f", milhas);
    return 0;
}
