#include <stdio.h>

int main()
{
    int n;  // variável que guarda seu valor na memória
    int *p; // ponteiro que aponta para um endereço de memória
    printf("Informe um numero: ");
    scanf("%d", &n);

    printf("O numero informado foi: %d\n", n);
    printf("O endereco de memoria eh: %d\n", &n);
    printf("O endereco de memoria eh: %p\n", p);

    return 0;
}
