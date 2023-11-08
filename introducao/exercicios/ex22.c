#include <stdio.h>

int main()
{
    float jardas, metros;
    printf("Digite o comprimento em jardas: ");
    scanf("%f", &jardas);

    metros = 0.91 * jardas;

    printf("Convertido para metros: %f", metros);

    return 0;
}
