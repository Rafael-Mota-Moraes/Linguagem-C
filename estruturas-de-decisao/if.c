#include <stdio.h>

int main()
{
    int idade;
    printf("Qual e a sua idade: ");
    scanf("%d", &idade);

    if (idade < 18)
    {
        printf("Voce eh menor de idade.\n");
    }
    else if (idade > 18 && idade < 60)
    {
        printf("Voce eh adulto.\n");
    }
    else
    {
        printf("Voce eh idoso.\n");
    }

    printf("Sua idade eh: %d", idade);

    return 0;
}
