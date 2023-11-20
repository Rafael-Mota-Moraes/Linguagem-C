#include <stdio.h>

union numeros
{
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
} n;

int main()
{

    n.num1 = 1;
    printf("O valor de num1 eh %d\n", n.num1);
    n.num2 = 3;
    printf("O valor de num1 eh %d\n", n.num2);
    n.num3 = 5;
    printf("O valor de num1 eh %d\n", n.num3);
    n.num4 = 7;
    printf("O valor de num1 eh %d\n", n.num4);
    n.num5 = 9;
    printf("O valor de num1 eh %d\n", n.num5);

    printf("-----------------------");
    printf("\nO valor de num1 eh %d\n", n.num1);
    printf("O valor de num1 eh %d\n", n.num2);
    printf("O valor de num1 eh %d\n", n.num3);
    printf("O valor de num1 eh %d\n", n.num4);
    printf("O valor de num1 eh %d\n", n.num5);

    printf("'n' esta ocupando %ld bytes em memoria", sizeof(n));

    return 0;
}
