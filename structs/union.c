#include <stdio.h>
#include <string.h>

// A union, separa e utiliza apenas o espaço da maior variável

union pessoa
{
    char nome[100]; // i char = 1 byte -> 1 * 100 = 100 bytes
    int idade;      // 4 bytes
    // total de 104 bytes em memória
};

int main()
{
    int numero = 42;
    float nota = 7.9;
    double nota_2 = 5.75;
    char letra = 'd';

    printf("A variavel 'numero' tem valor %d e ocupa %ld bytes em memoria\n", numero, sizeof(numero));
    printf("A variavel 'nota' tem valor %.2f e ocupa %ld bytes em memoria\n", nota, sizeof(nota));
    printf("A variavel 'letra' tem valor %c e ocupa %ld bytes em memoria\n", letra, sizeof(letra));
    printf("A variavel 'nota_2' tem valor %lf e ocupa %ld bytes em memoria\n", nota_2, sizeof(nota_2));

    printf("\n\n---------------------\n\n");

    union pessoa pes;

    strcpy(pes.nome, "Rafael Moreira");
    printf("Dados de %s\n", pes.nome);

    pes.idade = 39;
    printf("Ela tem %d anos \n", pes.idade);

    printf("union pessoa tem tamanho de %ld\n", sizeof(pes));

    return 0;
}
