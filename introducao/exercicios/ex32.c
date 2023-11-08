#include <stdio.h>

int main()
{
    int num, ant, suc;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    int sucessor_do_triplo = (num * 3) + 1;
    int antecessor_do_dobro = (num * 2) - 1;

    int soma = sucessor_do_triplo + antecessor_do_dobro;

    printf("Soma: %d", soma);

    return 0;
}
