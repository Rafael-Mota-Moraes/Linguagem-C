#include <stdio.h>

// Constantes

#ifndef PI
    #define PI 3.1456 // Constante
#endif

// ifdef -> Diretiva de compilação

int main() {

    int valor = 5; // variável
    valor = 467;
    printf("O valor é: %d\n", valor);

    #ifdef PI
        printf("O valor de PI é: %f\n", PI);
    #endif

    return 0;
}
