#include <stdio.h>

/*
Tipos de dados

Booleanos (Verdadeiro/Falso) true/false

Na linguagem C, não existe um tipo de dado boolean

Mas...
A linguagem C, reconhece o valor 0 como falso (false)
e qualquer valor diferente de 0 como verdadeiro (true)

*/

int main()
{
    int booleano = 0;

    if (booleano) // se verdadeiro entra no if, se falso no else
    {
        printf("Verdadeiro...");
    }
    else
    {
        printf("Falso...");
    }

    return 0;
}
