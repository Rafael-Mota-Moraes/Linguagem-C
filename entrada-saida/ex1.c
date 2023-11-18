#include <stdio.h>

int main()
{
    FILE *arq;

    arq = fopen("arq.txt", "w");

    char c;

    while (c != '0')
    {
        printf("Digite um caractere: ");
        scanf(" %c", &c);
        putc(c, arq);
    }

    fclose(arq);

    FILE *arq_r;

    arq_r = fopen("arq.txt", "r");

    printf("Caracteres do arquivo: ");
    char ch;
    while ((ch = getc(arq_r)) != EOF)
    {
        printf("%c", ch);
    }
}
