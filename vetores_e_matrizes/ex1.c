#include <stdio.h>

int main()
{
    int A[6] = {1, 0, 5, -1, -5, 7}, soma = 0;

    soma = A[0] + A[1] + A[5];

    A[4] = 100;

    printf("Soma: %d\n", soma);

    for (int i = 0; i < 6; i++)
    {
        printf("%d \n", A[i]);
    }

    return 0;
}
