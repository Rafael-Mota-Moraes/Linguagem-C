#include <stdio.h>
#include <stdlib.h>

/*
Lista encadeada / Lista ligada / Linked list

A lista encadeada possui além do seu valor, um ponteiro apontando para o próximo elemento.

Podemos inserir elementos no inicio ou no fim.
*/

struct st_no
{
    int valor;
    struct st_no *prox;
};

typedef struct st_no no;

int vazia(no *le)
{
    if (le->prox == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void inicia(no *le)
{
    le->prox = NULL;
}

void libera(no *le)
{
    if (!vazia(le))
    {
        no *prox_no, *atual;
        atual = le->prox;
        while (atual != NULL)
        {
            prox_no = atual->prox;
            free(atual);
            atual = prox_no;
        }
    }
}

void exibe(no *le)
{
    if (vazia(le))
    {
        printf("Lista está vazia!\n\n");
        return;
    }

    no *tmp;
    tmp = le->prox;

    while (tmp != NULL)
    {
        printf("%d ", tmp->valor);
        tmp = tmp->prox;
    }

    printf("\n\n");
}

void insere_inicio(no *le)
{
    no *novo = (no *)malloc(sizeof(no));

    if (!novo)
    {
        printf("Sem memória disponível!\n\n");
        exit(1);
    }

    printf("Informe o valor: ");
    scanf("%d", &novo->valor);

    no *old_head = le->prox;
    le->prox = novo;
    novo->prox = old_head;
}

void insere_fim(no *le)
{
    no *novo = (no *)malloc(sizeof(no));

    if (!novo)
    {
        printf("Sem memória disponível!\n\n");
        exit(1);
    }

    printf("Informe o valor: ");
    scanf("%d", &novo->valor);

    novo->prox = NULL;

    if (vazia(le))
    {
        le->prox = novo;
    }
    else
    {
        no *tmp = le->prox;

        while (tmp->prox != NULL)
        {
            tmp = tmp->prox;
        }

        tmp->prox = novo;
    }
}

void opcao(no *le, int op)
{
    switch (op)
    {
    case 0:
        libera(le);
        break;
    case 1:
        exibe(le);
        break;
    case 2:
        insere_inicio(le);
        break;
    case 3:
        insere_fim(le);
        break;
    case 4:
        inicia(le);
        break;
    default:
        printf("Comando inválido!");
        break;
    }
}

int menu()
{
    int opt;

    printf("Escolha a opção: \n");
    printf("[0] - Sair \n");
    printf("[1] - Exibir \n");
    printf("[2] - Adicionar nó no inicio \n");
    printf("[3] - Adicionar nó no fim \n");
    printf("[4] - Zerar a lista\n");
    printf("Opção: ");
    scanf("%d", &opt);

    return opt;
}

int main()
{
    no *le = (no *)malloc(sizeof(no));

    if (!le)
    {
        printf("Sem memória disponível.");
        exit(1);
    }

    inicia(le);
    int opt;

    do
    {
        opt = menu();

        opcao(le, opt);
    } while (opt);

    free(le);

    return 0;
}