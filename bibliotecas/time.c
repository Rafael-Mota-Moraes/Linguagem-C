#include <stdio.h>
#include <time.h>

/*
Funções de data e hora
clock() -> Retorna o númerto de pulsos de clock decorridos desde que o programa foi lançado
time() -> Retorna o tempo atual do calendário
localtime() -> Converte o valor time para uma hora local
*/

int main()
{
    long int clock_t, inicio_t, fim_t, total_t, i;

    inicio_t = clock();

    printf("Realizar um loop grande, inicio_t = %ld\n", inicio_t);

    for (i = 0; i < 1000000000; i++)
    {
    }

    fim_t = clock();

    printf("Fim do loop grande, fim_t = %ld\n", fim_t);
    total_t = (double)(fim_t - inicio_t) / CLOCKS_PER_SEC;

    printf("Clocks por segundo: %ld\n", CLOCKS_PER_SEC);
    printf("Tempo total usado pela CPU: %ld\n", total_t);
    printf("Finalizando o programa\n");

    time_t segundos;
    segundos = time(NULL);
    printf("Horas desde de 1 de janeiro de 1970 = %ld\n", (segundos / 3600));

    return 0;
}
