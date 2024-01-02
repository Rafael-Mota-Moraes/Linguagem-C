#include <stdio.h>
#include <ctype.h>

/*
Teste de tipos de caracteres
isallnum() -> Verifica se um caractere é alfanumérico (abc7)
isalpha() -> Verifica se o caracctere é alfabético
isdigit() -> Verifica se o caractere é um digito decimal
ispunct() -> Verifica se o caractere é uma pontuação
isspace() -> Verifica se é um espaço
isupper() -> Verifica se é maiúsculo
tolower() -> Converte para minúscula
toupper() -> Converte para maiúscula
*/

int main()
{
    char teste = '~';

    if (isalnum(teste))
    {
        printf("É alfanumérico\n");
    }
    else
    {
        printf("Não é alfanumérico\n");
    }

    return 0;
}
