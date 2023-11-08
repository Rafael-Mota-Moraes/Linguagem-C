#include <stdio.h>

int main()
{
    float n1, n2, n3, n4;

    printf("Digite as 4 notas: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    float media = (n1 + n2 + n3 + n4) / 4;

    printf("%f", media);

    return 0;
}
