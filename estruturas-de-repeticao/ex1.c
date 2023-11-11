#include <stdio.h>

int main()
{

    int qtd_numeros = 1;
    int index = 1;

    while (qtd_numeros <= 5)
    {
        if (index % 3 == 0)
        {
            printf("%d ", index);
            qtd_numeros++;
        }

        index++;
    }

    return 0;
}
