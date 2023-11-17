#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);

    printf("Endereco de %d eh %p\n", n1, &n1);
    printf("Endereco de %d eh %p\n", n2, &n2);

    if (&n1 > &n2)
    {
        printf("Endereco de %d eh maior.\n", n1);
    }
    else
    {
        printf("Endereco de %d eh maior.\n", n2);
    }

    return 0;
}
