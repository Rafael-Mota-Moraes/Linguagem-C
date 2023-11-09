#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero entre 100 e 999: ");
    scanf("%d", &num);

    int cent, dez, un;

    un = num % 10;
    num = num / 10;
    dez = num % 10;
    num = num / 10;
    cent = num;

    printf("%d%d%d", un, dez, cent);

    return 0;
}
