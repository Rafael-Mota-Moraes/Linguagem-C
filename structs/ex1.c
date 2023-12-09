#include <stdio.h>

struct st_pessoa {
    char nome[100];
    int idade;
    char endereco[200];
};

int main()
{
    struct st_pessoa pessoa;

    printf("Informe o nome: ");
    fgets(pessoa.nome, 100, stdin);

    printf("Informe a idade: ");
    scanf("%d", &pessoa.idade);
    getchar();

    printf("Informe o endereco: ");
    fgets(pessoa.endereco, 100, stdin);

    printf("Dados da Pessoa: \n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereço: %s\n", pessoa.endereco);

    return 0;
}
