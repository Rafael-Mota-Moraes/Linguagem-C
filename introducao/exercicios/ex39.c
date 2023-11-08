#include <stdio.h>

int main()
{
    float quantia, v1, v2, v3;
    quantia = 100;
    v1 = quantia * 0.46;
    v2 = quantia * 0.32;

    float restante = 1 - (0.46 + 0.32);

    v3 = (quantia * restante);

    printf("%.2f %.2f %.2f", v1, v2, v3);

    return 0;
}
