#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int hora, minuto;
} Horario;

int duracao(Horario ini, Horario fim);

int main(void) {
    Horario inicio, fim;
    int minutos;

    printf("=== Duracao de uma Sessao de Cinema ===\n\n");
    printf("Horario de inicio (hora minuto): ");
    if (scanf("%d %d", &inicio.hora, &inicio.minuto) != 2) return 1;
    printf("Horario de fim, no mesmo dia (hora minuto): ");
    if (scanf("%d %d", &fim.hora, &fim.minuto) != 2) return 1;
    if (inicio.hora < 0 || inicio.hora > 23 || fim.hora < 0 || fim.hora > 23 ||
        inicio.minuto < 0 || inicio.minuto > 59 || fim.minuto < 0 || fim.minuto > 59) {
        printf("\n[ERRO] Use horas de 0 a 23 e minutos de 0 a 59.\n\n");
        return 1;
    }

    minutos = duracao(inicio, fim);
    if (minutos < 0) {
        printf("\n[ERRO] No mesmo dia, o fim nao pode ser anterior ao inicio.\n\n");
        return 1;
    }
    printf("\nDuracao em minutos: %d\n", minutos);
    printf("Duracao formatada: %dh%02dmin\n\n", minutos / 60, minutos % 60);

    system("PAUSE");
    return 0;
}

int duracao(Horario ini, Horario fim) {
    return (fim.hora * 60 + fim.minuto) - (ini.hora * 60 + ini.minuto);
}
