#include <stdio.h>

int main()
{
    float ang_r, ang_g;

    printf("Digite o angulo em radianos: ");
    scanf("%f", &ang_r);

    ang_g = ang_r * 180 / 3.14;

    printf("Angulo em graus %f", ang_g);

    return 0;
}
