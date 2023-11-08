#include <stdio.h>

int main()
{
    float ang_r, ang_g;

    printf("Digite o angulo em graus: ");
    scanf("%f", &ang_g);

    ang_r = ang_g * 3.14 / 180;

    printf("Angulo em radianos %f", ang_r);

    return 0;
}
