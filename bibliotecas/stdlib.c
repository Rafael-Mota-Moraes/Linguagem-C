#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int compara(int *x, int *y)
{
    if (*x > *y)
    {
        return 1;
    }
    else if (*x == *y)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

/*
Conversão de strings:
atof() -> Converte uma string para double
atoi() -> Converte uma string para inteiro
atol() -> Converte string para inteiro longo
*/

/*
Geração de sequência pseudo-aleatória
rand() -> Gera número aleatório
srand() -> inicializa o gerador de números aleatórios
*/

/*
Gerênciamento de memória dinâmica
malloc()
calloc()
free()
realoc()
*/

/*
Pesquisa e ordenação
qsort() -> Ordena os elementos de um array
*/

/*
Aritmetica de inteiros

abs() -> valor absoluto
div() -> divisão inteira
*/

int main()
{

    // Conversão de strings
    char valor_s[5];
    double valor_d;
    strcpy(valor_s, "4.5");
    valor_d = atof(valor_s);
    printf("O valor é %.2f\n", valor_d);

    char valor_s2[5];
    int valor_d2;
    strcpy(valor_s2, "4");
    valor_d2 = atoi(valor_s2);
    printf("O valor é %d\n", valor_d2);

    char valor_s3[500];
    double valor_d3;
    strcpy(valor_s3, "99023045988035278");
    valor_d3 = atol(valor_s3);
    printf("O valor é %lf\n", valor_d3);

    printf("\n\n\n");

    // Números aleatórios

    time_t t;

    // inicializar o gerador
    srand((unsigned)time(&t));

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", rand() % 61);
    }

    printf("\n\n\n");

    // Pesquisa e ordenação
    int numeros[] = {6, 2, 9, 3, 7, 1, 5};

    qsort(numeros, 7, sizeof(int), (void *)compara);

    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", numeros[i]);
    }

    printf("\n\n\n");

    // Aritmética de inteiros

    int valor_a, valor_b;

    valor_a = abs(5);
    printf("O valor absoluto de 5 é: %d\n", valor_a);

    valor_b = abs(-10);
    printf("O valor absoluto de -10 é: %d\n", valor_b);

    div_t saida;

    saida = div(27, 4);
    printf("O quociente de (27/4) é %d \n", saida.quot);
    printf("O resto de (27/4) é %d \n", saida.rem);

    saida = div(27, 3);
    printf("O quociente de (27/4) é %d \n", saida.quot);
    printf("O resto de (27/4) é %d \n", saida.rem);

    return 0;
}
