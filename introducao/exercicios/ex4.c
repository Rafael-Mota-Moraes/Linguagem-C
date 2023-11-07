#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    int quadrado = num * num;
    printf("O quadrado de %d eh %d", num, quadrado);
    return 0;
}