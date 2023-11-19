#include <stdio.h>
#include <string.h>

// struct -> estrutura

struct st_contato
{
    char nome[100];
    int ano_nascimento;
    char telefone[20];
    char email[100];
};

struct st_agenda
{
    struct st_contato contatos[100];
} agenda;

int main()
{

    for (int i = 0; i < 2; i++)
    {
        printf("Informe o nome: ");
        fgets(agenda.contatos[i].nome, 100, stdin);

        printf("Informe o ano de nascimento: ");
        scanf("%d", &agenda.contatos[i].ano_nascimento);
        getchar();

        printf("Informe o telefone: ");
        fgets(agenda.contatos[i].telefone, 20, stdin);

        printf("Informe o email: ");
        fgets(agenda.contatos[i].email, 100, stdin);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("\n\n==================Dados agenda %d==================\n\n", i + 1);
        printf("Nome: %s\n", agenda.contatos[i].nome);
        printf("Ano de nascimento: %d\n\n", agenda.contatos[i].ano_nascimento);
        printf("Telefone: %s\n", agenda.contatos[i].telefone);
        printf("E-mail: %s\n", agenda.contatos[i].email);
    }

    return 0;
}
