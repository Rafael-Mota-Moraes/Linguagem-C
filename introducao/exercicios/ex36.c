#include <stdio.h>

int main()
{
    float altura, raio;

    printf("Digite altura e raio: ");
    scanf("%f %f", &altura, &raio);

    float volume = 3.14 * (raio * raio) * altura;

    printf("Volume: %f", volume);

    return 0;
}
