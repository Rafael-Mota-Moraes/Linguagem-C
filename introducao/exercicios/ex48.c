#include <stdio.h>

int main()
{
    int segundos, horas, minutos, segundos_restantes;

    printf("Digite um valor em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;                      // Calcula as horas (1 hora = 3600 segundos)
    segundos_restantes = segundos % 3600;         // Calcula os segundos restantes após calcular as horas
    minutos = segundos_restantes / 60;            // Calcula os minutos (1 minuto = 60 segundos)
    segundos_restantes = segundos_restantes % 60; // Calcula os segundos restantes após calcular os minutos

    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos_restantes);

    return 0;
}
