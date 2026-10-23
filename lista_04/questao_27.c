#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int horas;
    float valor_total = 0.0f;

    printf("=== Tarifador de Estacionamento com Faixas Progressivas ===\n\n");
    printf("Tabela de tarifas:\n");
    printf("  - 1a e 2a hora: R$ 2,00 por hora\n");
    printf("  - 3a e 4a hora: R$ 2,50 por hora\n");
    printf("  - 5a hora em diante: R$ 3,00 por hora adicional\n\n");
    printf("Digite o numero de horas inteiras de permanencia: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("\n[ERRO] O tempo de permanencia deve ser de pelo menos 1 hora!\n\n");
    } else {
        if (horas <= 2) {
            valor_total = horas * 2.00f;
        } else if (horas <= 4) {
            valor_total = (2 * 2.00f) + (horas - 2) * 2.50f;
        } else {
            valor_total = (2 * 2.00f) + (2 * 2.50f) + (horas - 4) * 3.00f;
        }

        printf("\n--- Extrato do Ticket ---\n");
        printf("Tempo total de permanencia: %d hora(s)\n", horas);
        printf("Valor total cobrado: R$ %.2f\n\n", valor_total);
    }

    system("PAUSE");
    return 0;
}
