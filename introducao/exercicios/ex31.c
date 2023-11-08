#include <stdio.h>

int main()
{
    int num, ant, suc;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    ant = num - 1;
    suc = num + 1;

    printf("Sucessor: %d\n", suc);
    printf("Antecessor: %d", ant);

    return 0;
}
