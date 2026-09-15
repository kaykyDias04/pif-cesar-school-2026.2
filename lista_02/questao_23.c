#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int horas_ini, min_ini, seg_ini;
    int duracao_seg;
    int total_seg;
    int horas_fim, min_fim, seg_fim;

    printf("=== Horario de Termino de Experimento ===\n\n");

    printf("--- Horario de inicio ---\n");
    printf("Horas:    ");
    scanf("%d", &horas_ini);
    printf("Minutos:  ");
    scanf("%d", &min_ini);
    printf("Segundos: ");
    scanf("%d", &seg_ini);

    printf("\nDuracao total do experimento (em segundos): ");
    scanf("%d", &duracao_seg);

    total_seg = horas_ini * 3600 + min_ini * 60 + seg_ini + duracao_seg;

    horas_fim = (total_seg / 3600) % 24;
    min_fim   = (total_seg % 3600) / 60;
    seg_fim   = total_seg % 60;

    printf("\nHorario de inicio:  %02d:%02d:%02d\n", horas_ini, min_ini, seg_ini);
    printf("Duracao:            %d segundos\n", duracao_seg);
    printf("Horario de termino: %02d:%02d:%02d\n", horas_fim, min_fim, seg_fim);

    system("PAUSE");
    return 0;
}
