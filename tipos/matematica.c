#include <stdio.h>

/*
somar +
subtrair -
multiplicar *
dividir /
elevar ao quadrado x * x
módulo (resto da divisão) %
*/

int main()
{
    int n1, n2;
    float res;

    printf("Informe 2 numeros: ");
    scanf("%d %d", &n1, &n2);

    // soma
    res = n1 + n2;
    printf("A soma eh: %f\n", res);

    // subtraçãoo
    res = n1 - n2;
    printf("A subtracao eh: %f\n", res);

    //  multiplicação
    res = n1 * n2;
    printf("A multiplicacao eh: %f\n", res);

    // divisao
    res = (float)n1 / (float)n2; // cast
    printf("A divisao eh: %f\n", (float)res);

    // elevar ao quadrado
    res = n1 * n1;
    printf("A elevacao eh: %f\n", res);

    // modulo (verificando se n1 eh par ou impar)

    if (n1 % 2 == 0)
    {
        printf("%d e par\n", n1);
    }
    else
    {
        printf("%d e impar\n", n1);
    }

    return 0;
}
