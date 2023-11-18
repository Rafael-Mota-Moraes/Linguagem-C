#include <stdio.h>

int main()
{
    FILE *arq;
    char nome[10], *resultado;

    arq = fopen("arquivo2.txt", "r");

    if (arq)
    {
        while (!feof(arq))
        { // file end of file
            resultado = fgets(nome, 10, arq);
            printf("Resultado: %d\n", resultado);
            if (resultado)
            {
                printf("%s\n", nome);
            }
        }
    }
    else
    {
        printf("Arquivo não existe");
    }

    fclose(arq);
    return 0;
}