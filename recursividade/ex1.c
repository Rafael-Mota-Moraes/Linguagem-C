#include <stdio.h>

int somatorio(int n) {
    if(n < 0) {
        printf("O valor precisa ser positivo!");
        return 0;
    }

    if(n <= 1) {
        return n;
    }

    return n + somatorio(n - 1);
}

int main() 
{
    int n = 5;

    printf("A soma dos %d primeiros numeros é %d\n", n, somatorio(n));

    return 0;
}
