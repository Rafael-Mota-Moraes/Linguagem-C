#include <stdio.h>

// Matrizes - parte 1

/*
#######

#######
#######
#######
*/

// array multi-dimensionais
// char nome[3][50];

int main()
{
    // vetores e strings
    char nome[3][50];
    for (int i = 0; i < 3; i++)
    {
        printf("Qual o seu nome? ");
        gets(nome[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Nome: %s\n", nome[i]);
    }
    return 0;
}
