#include <stdio.h>

int main()
{
    float kg, libras;

    printf("Peso em libras: ");
    scanf("%f", &libras);
    kg = (libras * 0.45);
    printf("Peso em kg: %f", kg);

    return 0;
}
