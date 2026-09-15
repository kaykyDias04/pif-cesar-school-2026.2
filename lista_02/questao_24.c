#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double velocidade_kmh, velocidade_ms;

    printf("=== Conversor de Velocidade ===\n\n");
    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &velocidade_kmh);

    velocidade_ms = velocidade_kmh / 3.6;

    printf("\n%.2f km/h = %.2f m/s\n", velocidade_kmh, velocidade_ms);

    system("PAUSE");
    return 0;
}
