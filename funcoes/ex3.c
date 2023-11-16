#include <stdio.h>

void imprimir(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("!");
        }
        printf("\n");
    }
}

int main()
{
    imprimir(10);
    return 0;
}
