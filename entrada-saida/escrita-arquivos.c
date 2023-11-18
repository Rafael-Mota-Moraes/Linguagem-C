#include <stdio.h>

int main()
{
    FILE *arq;
    char fruta[10];

    arq = fopen("frutas.txt", "w");

    if (arq)
    {
        printf("Informe uma fruta, ou 0 para sair: ");
        fgets(fruta, 10, stdin); // stdin = standard input -> entrada padrão

        while (fruta[0] != '0')
        {
            fputs(fruta, arq);
            printf("Informe uma fruta, ou 0 para sair: ");
            fgets(fruta, 10, stdin); // stdin = standard input -> entrada padrão
        }
    }
    else
    {
        printf("Nao foi possivel criar o arquivo.");
    }

    fclose(arq);

    return 0;
}
