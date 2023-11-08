#include <stdio.h>

int main()
{
    float metros, hectares;

    printf("Digite em metros: ");
    scanf("%f", &metros);

    hectares = metros * 0.0001;

    printf("%f", hectares);

    return 0;
}
