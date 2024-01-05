#include <stdio.h>

/*
Pilha / Stack

FILO - First in / Last out
LIFO - Last in / First out

Os dados são inseridos sempre no topo, ou seja sempre que um novo elemento é inserido ele ocupa o topo da pilha.

Só temos acesso ao elemento que está no topo.

O processo de inserir um elemento é chamado de push.

O processo de remover um elemento é chamado de pop.

Aplicação da pilha

Exemplo de utilização: (CTRL + Z)

*/

#define TAMPILHA 10

// Pilha / Stack

int pilha[TAMPILHA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int topo = 0;

void lista_elementos()
{
    printf("\n====PILHA ATUAL====\n");
    for (int i = 0; i < TAMPILHA; i++)
    {
        printf("-");
        printf("|%d|", pilha[i]);
        printf("-");
    }

    printf("\nTopo: %d\n", topo);
    printf("\n\n");
}

void push()
{
    int val;

    printf("Informe o valor: ");
    scanf("%d", &val);

    if (topo < TAMPILHA)
    {
        pilha[topo] = val;
        topo = topo + 1;
        lista_elementos();
    }
    else
    {
        printf("Pilha já está cheia...\n");
    }
}

void pop()
{
    if (topo >= 0)
    {
        pilha[topo - 1] = 0;
        topo = topo - 1;
        lista_elementos();
    }
    else
    {
        printf("Pilha já está vazia...\n");
    }
}

void clear()
{
    for (int i = 0; i < TAMPILHA; i++)
    {
        pilha[i] = 0;
    }
    topo = 0;
}

int main()
{
    int opcao = 0;

    do
    {
        printf("Selecione a opção: \n\n");
        printf("[1] - Inserir (push)\n");
        printf("[2] - Remover (pop)\n");
        printf("[3] - Listar\n");
        printf("[4] - Limpar a pilha\n");
        printf("[-1] - Sair\n");

        printf("Digite sua opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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
            printf("Opção inválida!");
            break;
        }

    } while (opcao != -1);

    return 0;
}