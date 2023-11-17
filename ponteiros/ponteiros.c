#include <stdio.h>

void incrementa(int *valor)
{
    printf("Dentro da funcao\n");
    printf("O endereco de memoria e %d\n", &valor);
    printf("Antes de incrementar\n");
    printf("O contador vale %d\n", (*valor));

    printf("Depois de incrementar\n");
    printf("O contador vale %d\n", ++(*valor));

    printf("FIM DA FUNCAO\n");
}

int main()
{
    // Quando declaramos uma variável, a linguagem C
    // aloca um espaço em memória paa colocar este valor.
    int contador = 10;

    printf("Antes de incrementar\n");
    printf("O contador vale %d\n", contador);
    printf("O endereco de memoria e %d\n", &contador);

    // Cópia por valor
    incrementa(&contador);
    // scanf("%d", &contador);

    printf("Depois de incrementar\n");
    printf("O contador vale %d\n", contador);

    return 0;
}
