#include <stdio.h>

int main()
{
    float v1, v2, v3, qv1, qv2, qv3;

    printf("Digite 3 valores: ");
    scanf("%f %f %f", &v1, &v2, &v3);

    qv1 = v1 * v1;
    qv2 = v2 * v2;
    qv3 = v3 * v3;

    printf("%f %f %f", qv1, qv2, qv3);

    return 0;
}
