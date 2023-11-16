#include <stdio.h>

int maior_valor(int nums[], int tam_vetor)
{
    int maior = 0;

    for (int i = 0; i < tam_vetor; i++)
    {
        if (i == 0)
        {
            maior = nums[i];
        }

        if (nums[i] > maior)
        {
            maior = nums[i];
        }
    }

    return maior;
}

int main()
{
    int nums[4] = {1, 2, 3, 4};

    int maior = maior_valor(nums, 4);

    printf("O maior numero eh: %d", maior);
    return 0;
}
