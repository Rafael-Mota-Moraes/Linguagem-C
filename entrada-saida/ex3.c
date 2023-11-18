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

    char ch, ch_usuario;

    printf("Digite um caracter para procurarmos: ");
    scanf(" %c", &ch_usuario);
    int num_caracteres = 0;
    while ((ch = getc(arq)) != EOF)
    {
        if (ch == ch_usuario)
        {
            num_caracteres++;
        }
    }

    printf("Num de vezes que o caracter apareceu: %d", num_caracteres);

    return 0;
}
