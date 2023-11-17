#include <stdio.h>

int main()
{
    int valores[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Informe o %d/5 valor: ", (i + 1));
        scanf("%d", &valores[i]);
    }

    printf("Os valores informados foram: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", valores[i]);
    }

    printf("\n%p\n", &valores[0]);
    printf("%p\n", valores);

    return 0;
}
