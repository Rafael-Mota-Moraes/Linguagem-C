#include <stdio.h>

int main()
{
    float metros, hectares;

    printf("Digite em hectares: ");
    scanf("%f", &hectares);

    metros = hectares * 10000;

    printf("%f", metros);

    return 0;
}
