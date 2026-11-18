#include <stdio.h>
#include <stdlib.h>

enum Mes { Jan = 1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez };

int main(void) {
    int dmes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int mes, i;

    printf("=== Meses com Enumeracao ===\n\n");
    printf("Digite o numero do mes (1 a 12): ");
    if (scanf("%d", &mes) != 1) return 1;
    printf("\n");
    switch (mes) {
        case Jan: printf("Janeiro\n"); break;
        case Fev: printf("Fevereiro\n"); break;
        case Mar: printf("Marco\n"); break;
        case Abr: printf("Abril\n"); break;
        case Mai: printf("Maio\n"); break;
        case Jun: printf("Junho\n"); break;
        case Jul: printf("Julho\n"); break;
        case Ago: printf("Agosto\n"); break;
        case Set: printf("Setembro\n"); break;
        case Out: printf("Outubro\n"); break;
        case Nov: printf("Novembro\n"); break;
        case Dez: printf("Dezembro\n"); break;
        default: printf("[ERRO] O mes deve estar entre 1 e 12.\n"); return 1;
    }

    printf("\n--- Dias de Cada Mes (ano nao bissexto) ---\n");
    for (i = Jan; i <= Dez; i++) {
        printf("Mes %02d: %d dias\n", i, dmes[i - 1]);
    }
    printf("\n");

    system("PAUSE");
    return 0;
}
