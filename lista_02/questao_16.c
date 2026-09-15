#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float altura_degrau_cm;
    float altura_total_m;
    float altura_total_cm;
    int num_degraus;

    printf("=== Calculadora de Degraus de Escada ===\n\n");

    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%f", &altura_degrau_cm);

    printf("Digite a altura total a ser alcancada (em metros): ");
    scanf("%f", &altura_total_m);

    altura_total_cm = altura_total_m * 100.0;
    num_degraus = (int)((altura_total_cm + altura_degrau_cm - 1) / altura_degrau_cm);

    printf("\nAltura total: %.2f m = %.2f cm\n", altura_total_m, altura_total_cm);
    printf("Altura de cada degrau: %.2f cm\n", altura_degrau_cm);
    printf("Numero minimo de degraus: %d\n", num_degraus);

    system("PAUSE");
    return 0;
}
