#include <stdio.h>

int main()
{
    int A[10] = {1, 0, 5, 4, 3, 7, 10, 3, 11, 122};
    int qtd_pares = 0;
    for (int i = 0; i < 10; i++)
    {
        if (A[i] % 2 == 0)
        {
            printf("%d eh par\n", A[i]);
            qtd_pares++;
        }
    }

    printf("Quantidade de numeros pares: %d", qtd_pares);

    return 0;
}
