#include <stdio.h>

int main()
{
    int tam;

    printf("Digite o tamanho da lateral do quadrado: ");
    scanf("%d", &tam);

    int area = tam * tam;
    printf("%d", area);

    return 0;
}
