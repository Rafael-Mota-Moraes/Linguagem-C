#include <stdio.h>

int main()
{
    float jardas, metros;
    printf("Digite o comprimento em metros: ");
    scanf("%f", &metros);

    jardas = metros / 0.91;

    printf("Convertido para jardas: %f", jardas);

    return 0;
}
