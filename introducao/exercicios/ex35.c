#include <stdio.h>
#include <math.h>

int main()
{
    float a, b;

    printf("Digite os catetos: ");
    scanf("%f %f", &a, &b);

    double raiz = sqrt(((a * a) + (b * b)));

    printf("Hipotenuza: %lf", raiz);

    return 0;
}
