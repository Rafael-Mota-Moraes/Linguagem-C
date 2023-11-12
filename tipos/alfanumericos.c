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
    char opcao;
    printf("Informe uma upcao: \n");

    printf("a - Saldo da conta. \n");
    printf("b - Extrato da conta. \n");
    printf("c - Limite da conta. \n");

    scanf("%c", &opcao);

    if (opcao == 'a')
    {
        printf("Seu saldo eh ...");
    }
    else if (opcao == 'b')
    {
        printf("Extrato da conta...");
    }
    else if (opcao == 'c')
    {
        printf("Limite da conta...");
    }
    else
    {
        printf("Opcao desconhecida...");
    }

    printf("\n");

    // Gerar um alfabeto completo com um loop

    for (int i = 97; i <= 122; i++)
    {
        printf("%c ", i);
    }

    return 0;
}
