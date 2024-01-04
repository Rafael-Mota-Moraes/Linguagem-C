#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que receba do usuário o tamanho de uma string e chame uma função para alocar dinamicamente essa string. Receba esta string do usuário. Por fim, apresente conteúdo dessa string sem suas vogais
*/

int main()
{
    int tamanho;
    char *ponteiro;

    printf("Informe o tamanho a string a ser informada: ");
    scanf("%d", &tamanho);
    getchar();

    ponteiro = (char *)malloc(sizeof(char) * tamanho + sizeof(char));

    printf("Informe a string: ");
    fgets(ponteiro, tamanho + 1, stdin);

    for (int i = 0; i <= tamanho; i++)
    {
        if (
            *(ponteiro + i) != 'a' && *(ponteiro + i) != 'A' &&
            *(ponteiro + i) != 'e' && *(ponteiro + i) != 'E' &&
            *(ponteiro + i) != 'i' && *(ponteiro + i) != 'I' &&
            *(ponteiro + i) != 'o' && *(ponteiro + i) != 'O' &&
            *(ponteiro + i) != 'u' && *(ponteiro + i) != 'U')
        {
            printf("%c", ponteiro[i]);
        }
    }

    return 0;
}
