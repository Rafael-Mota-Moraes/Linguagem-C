#include <stdio.h>
#include <string.h>

// struct -> estrutura

struct st_aluno
{
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
} aluno1[5];

int main()
{

    for (int i = 0; i < 5; i++)
    {
        printf("Informe a matricula do aluno: ");
        fgets(aluno1[i].matricula, 10, stdin);

        printf("Informe o nome do aluno: ");
        fgets(aluno1[i].nome, 100, stdin);

        printf("Informe o curso do aluno: ");
        fgets(aluno1[i].curso, 50, stdin);
        printf("Informe o ano de nascimento do aluno: ");
        scanf("%d", &aluno1[i].ano_nascimento);

        getchar();
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n\n==================Dados do aluno %d==================\n\n", i + 1);
        printf("Matricula: %s\n", aluno1[i].matricula);
        printf("Nome: %s\n", aluno1[i].nome);
        printf("Curso: %s\n", aluno1[i].curso);
        printf("Ano de nascimento: %d\n\n", aluno1[i].ano_nascimento);
    }

    return 0;
}
