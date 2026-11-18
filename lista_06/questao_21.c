#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int horas, minutos, segundos;
} Tempo;

Tempo somaTempo(Tempo a, Tempo b);

int main(void) {
    Tempo a, b, soma;

    printf("=== Soma de Tempos ===\n\n");
    printf("Primeiro tempo (horas minutos segundos): ");
    if (scanf("%d %d %d", &a.horas, &a.minutos, &a.segundos) != 3) return 1;
    printf("Segundo tempo (horas minutos segundos): ");
    if (scanf("%d %d %d", &b.horas, &b.minutos, &b.segundos) != 3) return 1;
    if (a.horas < 0 || b.horas < 0 || a.minutos < 0 || a.minutos > 59 ||
        b.minutos < 0 || b.minutos > 59 || a.segundos < 0 || a.segundos > 59 ||
        b.segundos < 0 || b.segundos > 59) {
        printf("[ERRO] Use horas nao negativas e minutos/segundos entre 0 e 59.\n");
        return 1;
    }

    soma = somaTempo(a, b);
    printf("\nTempo total: %02d:%02d:%02d\n\n", soma.horas, soma.minutos, soma.segundos);

    system("PAUSE");
    return 0;
}

Tempo somaTempo(Tempo a, Tempo b) {
    Tempo soma;
    soma.segundos = a.segundos + b.segundos;
    soma.minutos = a.minutos + b.minutos + soma.segundos / 60;
    soma.segundos %= 60;
    soma.horas = a.horas + b.horas + soma.minutos / 60;
    soma.minutos %= 60;
    return soma;
}
