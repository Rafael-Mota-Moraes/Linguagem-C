#include <stdio.h>

int main()
{
    float aposta1, aposta2, aposta3, total_apostas = 0;
    float premio = 0;
    float porcentagem1, porcentagem2, porcentagem3, total_porcentagens = 0;
    float premio1, premio2, premio3, total_premios = 0;

    printf("Informe o valor da aposta do apostador 1: ");
    scanf("%f", &aposta1);

    printf("Informe o valor da aposta do apostador 2: ");
    scanf("%f", &aposta2);

    printf("Informe o valor da aposta do apostador 3: ");
    scanf("%f", &aposta3);

    printf("Informe o valor do premio: ");
    scanf("%f", &premio);

    total_apostas = (float)(aposta1 + aposta2 + aposta3);
    printf("Total de apostas foi de %.2f\n", total_apostas);

    porcentagem1 = (float)(aposta1 / total_apostas);
    porcentagem2 = (float)(aposta2 / total_apostas);
    porcentagem3 = (float)(aposta3 / total_apostas);

    total_porcentagens = (float)(porcentagem1 + porcentagem2 + porcentagem3);

    printf("Total das porcentagens: %.2f\n", total_porcentagens);

    premio1 = (float)(premio * porcentagem1);
    premio2 = (float)(premio * porcentagem2);
    premio3 = (float)(premio * porcentagem3);

    total_premios = (float)(premio1 + premio2 + premio3);

    printf("O total em premios eh: %.2f\n", total_premios);

    printf("O apostador 1 apostou %.2f que corresponde a %.2f e devera receber o premio de %.2f\n", aposta1, porcentagem1, premio1);
    printf("O apostador 2 apostou %.2f que corresponde a %.2f e devera receber o premio de %.2f\n", aposta2, porcentagem2, premio2);
    printf("O apostador 3 apostou %.2f que corresponde a %.2f e devera receber o premio de %.2f\n", aposta3, porcentagem3, premio3);

    return 0;
}
