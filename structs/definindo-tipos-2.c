#include <stdio.h>
#include <string.h>

// struct -> estrutura

struct st_aluno
{
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
} aluno1;

int main()
{

    printf("Informe a matricula do aluno: ");
    fgets(aluno1.matricula, 10, stdin);

    printf("Informe o nome do aluno: ");
    fgets(aluno1.nome, 100, stdin);

    printf("Informe o curso do aluno: ");
    fgets(aluno1.curso, 50, stdin);

    printf("Informe o ano de nascimento do aluno: ");
    scanf("%d", &aluno1.ano_nascimento);

    printf("\n\n==================Dados do aluno==================\n\n");

    printf("Matricula: %s", aluno1.matricula);
    printf("Nome: %s", aluno1.nome);
    printf("Curso: %s", aluno1.curso);
    printf("Ano de nascimento: %d", aluno1.ano_nascimento);

    return 0;
}
