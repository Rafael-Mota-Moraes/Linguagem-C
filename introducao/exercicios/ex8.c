#include <stdio.h>

int main()
{
    float kelvin;
    printf("Digite a temperatura em kelvin: ");
    scanf("%f", &kelvin);

    float celsius = kelvin - 273.15;

    printf("Temp em celsius: %f", celsius);
    return 0;
}