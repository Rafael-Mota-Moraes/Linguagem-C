#include <stdio.h>
#include <math.h>

/*
Funções matemáticas

Funções trigonométricas
para compilar: gcc nome-programa.c -lm
cos() calcula o cosseno de um ângulo em radianos
sin() calcula o seno de um ângulo em radianos
tang() calcula a tangente de um ângulo em radianos

Funções hiperbólicas
cosh() calcula o cosseno hiperbólico de um ângulo em radianos
sinh() calcula o seno hiperbólico de um ângulo em radianos
tangh() calcula a tangente hiperbólica de um ângulo em radianos

Funções exponenciais e logarítmicas
exp() cálculo exponencial
log() logaritmo natual
log10() logaritmo base 10

*/
int main()
{
    int angulo = 45;
    float coss = cos(angulo);
    float seno = sin(angulo);
    float tangente = tan(angulo);
    printf("O cosseno de %d é %.2f\n", angulo, coss);
    printf("O seno de %d é %.2f\n", angulo, seno);
    printf("A tangente de %d é %.2f\n", angulo, tangente);

    return 0;
}
