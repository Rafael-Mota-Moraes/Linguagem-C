#include <stdio.h>

int main()
{
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    char letra_maiuscula = letra - 32;

    printf("%c", letra_maiuscula);
    return 0;
}
