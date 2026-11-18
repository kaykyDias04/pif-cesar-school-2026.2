#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int idade, dia;
    float ingresso = 40.00f;

    printf("=== Controle de Ingressos de Cinema ===\n\n");
    printf("Digite a idade do cliente: ");
    if (scanf("%d", &idade) != 1) return 1;
    printf("Dia da semana (1 = Domingo, ..., 7 = Sabado): ");
    if (scanf("%d", &dia) != 1) return 1;

    if (idade < 0 || dia < 1 || dia > 7) {
        printf("\n[ERRO] Informe uma idade nao negativa e um dia de 1 a 7.\n\n");
        return 1;
    }

    /* Basta atender a uma das condicoes: os descontos nao se acumulam. */
    if (idade < 12 || idade > 60 || dia == 4) {
        ingresso /= 2;
    }
    printf("\nValor do ingresso: R$ %.2f\n\n", ingresso);

    system("PAUSE");
    return 0;
}
