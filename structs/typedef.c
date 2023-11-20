#include <stdio.h>

// typedef - redefinir tipos

int main()
{

    typedef float nota;

    // declarando variáveis
    nota prova1 = 6.00;
    nota prova2 = 6.25;

    nota media = (prova1 + prova2) / 2;

    printf("A media do aluno foi: %f", media);

    return 0;
}
