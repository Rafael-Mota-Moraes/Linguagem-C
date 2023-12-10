#include <stdio.h>

int binario(int n) {
    if(n == 0) {
        return 0;
    } else {
        return (n % 2 + 10 * binario(n / 2));
    }
}

int main() 
{
    int n = 5;
    printf("Binário de %d é %d\n", n, binario(n));
    return 0;
}
