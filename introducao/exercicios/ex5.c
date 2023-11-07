#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    float quinta_parte = num / 5;

    printf("A quinta parte de %d eh %f", num, quinta_parte);

    return 0;
}