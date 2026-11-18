#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int dmes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int dia, mes, dias, i;

    printf("=== Dias Corridos no Ano ===\n\n");
    printf("Digite o dia e o mes (exemplo: 15 3): ");
    if (scanf("%d %d", &dia, &mes) != 2 || mes < 1 || mes > 12) {
        printf("[ERRO] Mes invalido.\n");
        return 1;
    }
    if (dia < 1 || dia > dmes[mes - 1]) {
        printf("[ERRO] Esse dia nao existe no mes informado.\n");
        return 1;
    }

    /* A contagem inclui o dia informado: 1 de janeiro corresponde ao dia 1. */
    dias = dia;
    for (i = 0; i < mes - 1; i++) {
        dias += dmes[i];
    }

    printf("\nDias corridos: %d\n", dias);
    printf("Dias que faltam para o fim do ano: %d\n\n", 365 - dias);

    system("PAUSE");
    return 0;
}
