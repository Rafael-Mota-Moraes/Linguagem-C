#include <stdio.h>

int main()
{
    char nome_arq[10];

    printf("Digite o nome do arquivo: ");
    gets(nome_arq);

    printf("Nome: %s\n", nome_arq);

    FILE *arq;

    arq = fopen(nome_arq, "r");

    if (arq == NULL)
    {
        printf("Arquivo nao encontrado");
        return 1;
    }

    char ch;
    int num_linhas = 0;
    while ((ch = getc(arq)) != EOF)
    {
        if (ch == '\n')
        {
            num_linhas++;
        }
    }

    printf("Num de linhas do arquivo: %d", num_linhas);

    return 0;
}
