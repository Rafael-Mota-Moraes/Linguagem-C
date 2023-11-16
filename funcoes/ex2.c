#include <stdio.h>

char maiusculo(char caractere)
{
    return caractere - 32;
}

int main()
{
    printf("%c", maiusculo('a'));

    return 0;
}
