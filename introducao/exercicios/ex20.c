#include <stdio.h>

int main()
{
    float kg, libras;

    printf("Peso em kg: ");
    scanf("%f", &kg);
    libras = (kg / 0.45);
    printf("Peso em libras: %f", libras);

    return 0;
}
