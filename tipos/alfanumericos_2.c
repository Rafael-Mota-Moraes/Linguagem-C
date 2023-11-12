#include <stdio.h>

/*
Tipos de dados
Tipos alfanuméricos
 - Caracteres
 - Strings*

 * Na linguagem C, não existe o tipo de dado String
 "Tudo que estiver entre aspas duplas é uma String"
 Caracter: 'c'

*/

int main()
{
    // Declaração de uma string em C
    char nome[50]; // até 9 caracteres
    printf("Isso eh uma string\n");

    printf("Qual eh o seu nome? ");
    gets(nome);

    printf("Seu nome eh %s", nome);

    return 0;
}
