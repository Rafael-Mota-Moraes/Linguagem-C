#include <stdio.h>

/*
Tipos de dados
Tipos numéricos
 - Inteiros
 - Reais
*/

int main()
{
    int numero_inteiro; // 1, 2, 10, 100, 1234
    float numero_real;  // 1.2, 23.4, 10.99
    double outro_real;  // 23.4, 1.23

    float nota1, nota2, media;

    printf("Qual a primeira nota? ");
    scanf("%f", &nota1);

    printf("Qual a segunda nota? ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Sua media eh %.2f", media);

    return 0;
}
