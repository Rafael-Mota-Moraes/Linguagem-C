#include <stdio.h>
#include <stdlib.h>

struct st_arvore
{
    int valor;
    struct st_arvore *sad; // sub-árvore direita
    struct st_arvore *sae; // sub-árvore esquerda
};

typedef struct st_arvore arvore;

arvore *cria_arvore()
{
    return NULL;
}

int arvore_esta_vazia(arvore *t)
{
    return t == NULL;
}

void mostra_arvore(arvore *t)
{
    printf("<");
    if (!arvore_esta_vazia(t))
    {
        printf("%d ", t->valor);
        mostra_arvore(t->sae);
        mostra_arvore(t->sad);
    }

    printf(">");
}

void insere_dado_arvore(arvore **t, int num)
{
    if (*t == NULL)
    {
        *t = (arvore *)malloc(sizeof(arvore));
        (*t)->sae = NULL;
        (*t)->sad = NULL;
        (*t)->valor = num;
    }
    else
    {
        if (num < (*t)->valor)
        {
            insere_dado_arvore(&(*t)->sae, num);
        }
        else if (num > (*t)->valor)
        {
            insere_dado_arvore(&(*t)->sad, num);
        }
    }
}

int esta_na_arvore(arvore *t, int num)
{
    if (arvore_esta_vazia(t))
    {
        return 0;
    }

    return t->valor == num || esta_na_arvore(t->sae, num) || esta_na_arvore(t->sad, num);
}

int main()
{
    arvore *t = cria_arvore();

    insere_dado_arvore(&t, 12);
    insere_dado_arvore(&t, 15);
    insere_dado_arvore(&t, 10);
    insere_dado_arvore(&t, 13);
    mostra_arvore(t);

    if (arvore_esta_vazia(t))
    {
        printf("\n\nÁrvore vazia!!\n");
    }
    else
    {
        printf("\n\nÁrvore não vazia\n");
    }

    if (esta_na_arvore(t, 15))
    {
        printf("\n15 está na árvore\n");
    }
    else
    {
        printf("\n15 NÃO está na árvore\n");
    }

    return 0;
}
