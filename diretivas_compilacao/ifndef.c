#include <stdio.h>

// Constantes

#ifndef PI
    #define PI 3.1456 // Constante
#endif

// ifndef -> Diretiva de compilação

int main() {

    int valor = 5; // variável
    valor = 467;
    printf("O valor é: %d\n", valor);
    printf("O PI é: %f\n", PI);

    return 0;
}
