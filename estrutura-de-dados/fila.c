#include <stdio.h>

/*
Fila / Queue

- Fila de banco
- Primeiro a entrar é o primeiro a sair
- Sempre que removemos um elemento, o primeiro é removido

FIFO - First in / First out

enqueue() -> Adiciona o elemento a fila.
dequeue() -> Remove o elemento da fila.
clear() -> Limpa a fila.

fila[10] - [0][1][2][3][4][5][6][7][8][9]
head -> Cabeça da fila, indica quem é o primeiro elemento da fila.
tail -> Cauda da fila, inddica quantos elementos tem na fila

Aplicação: Em qualquer situação onde a gente tenha que organizar o atendimento de elementos
*/

#define TAMFILA 10

int fila[TAMFILA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int head = 0; // próximo a ser atendido
int tail = 0; // último da fila

void lista_elementos()
{
    printf("\n========FILA ATUAL========\n");

    for (int i = 0; i < TAMFILA; i++)
    {
        printf("-");
        printf("|%d|", fila[i]);
        printf("-");
    }

    printf("\nHead: %d\n", head);
    printf("Tail: %d\n", tail);
    printf("\n\n");
}

void enqueue()
{
    int val;

    if (tail < TAMFILA)
    {
        printf("Informe o elemento para adicionar na fila: ");
        scanf("%d", &val);
        fila[tail] = val;
        tail = tail + 1;
        lista_elementos();
    }
    else
    {
        printf("A fila está cheia...\n");
    }
}

void dequeue()
{
    if (head < tail)
    {
        fila[head] = 0;
    }
    else
    {
        printf("A fila já está vazia...");
    }
}

void clear()
{
    for (int i = 0; i < TAMFILA; i++)
    {
        fila[i] = 0;
    }

    head = 0;
    tail = 0;
}

int main()
{
    int opcao = 0;

    do
    {
        printf("Selecione a opção: \n\n");
        printf("[1] - Inserir (enqueue): \n");
        printf("[2] - Remover (dequeue): \n");
        printf("[3] - Listar: \n");
        printf("[4] - Limpar a fila: \n");
        printf("[-1] - Sair: \n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            lista_elementos();
            break;
        case 4:
            clear();
            break;
        case -1:
            break;
        default:
            printf("Opção inválida\n");
            break;
        }

    } while (opcao != -1);

    lista_elementos();
    return 0;
}
