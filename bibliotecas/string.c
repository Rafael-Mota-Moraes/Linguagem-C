#include <stdio.h>
#include <string.h>

/*
Operações em strings
strcpy() -> cópia de string
strcat() -> concatena strings
strcmp() -> compara duas strings
strchr() -> localiza a primeira ocorrência de caractere em uma string
strtok() -> Dividir uma string em sub-strings com base em um caractere
strlen() -> Retorna o tamanho de uma string
*/

int main()
{

    char nome[] = "Rafael ";
    char sobrenome[] = "Moreira";

    strcat(nome, sobrenome);
    printf("%s\n", nome);

    if (strcmp("rafa", "rafael"))
    {
        printf("Não são iguais\n");
    }
    else
    {
        printf("São iguais\n");
    }

    char email[] = "email@email.com";
    char chr = '@';

    char *ret = strchr(email, chr);
    printf("A partir do caractere %c está a string %s\n", chr, ret);

    printf("Usuário: %s\n", strtok(email, "@"));
    printf("Tamanho da string: %lu\n", strlen(email));

    return 0;
}
