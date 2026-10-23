#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int total_pagar, valor_entregue, troco, restante;
    int c100, c50, c20, c10, c5, c2, c1;

    printf("=== Decomposicao de Troco em Cedulas ===\n\n");
    printf("Digite o valor total da compra (R$): ");
    scanf("%d", &total_pagar);
    printf("Digite o valor entregue pelo cliente (R$): ");
    scanf("%d", &valor_entregue);

    if (total_pagar <= 0 || valor_entregue <= 0) {
        printf("\n[ERRO] Os valores devem ser inteiros positivos!\n\n");
    } else if (valor_entregue < total_pagar) {
        printf("\n[ERRO] Valor entregue (R$ %d) e insuficiente para pagar o total (R$ %d)!\n",
               valor_entregue, total_pagar);
        printf("Faltam: R$ %d\n\n", total_pagar - valor_entregue);
    } else if (valor_entregue == total_pagar) {
        printf("\nPagamento exato realizado. Troco: R$ 0 (nenhuma cedula necessaria).\n\n");
    } else {
        troco = valor_entregue - total_pagar;
        restante = troco;

        c100 = restante / 100;
        restante %= 100;

        c50 = restante / 50;
        restante %= 50;

        c20 = restante / 20;
        restante %= 20;

        c10 = restante / 10;
        restante %= 10;

        c5 = restante / 5;
        restante %= 5;

        c2 = restante / 2;
        restante %= 2;

        c1 = restante; /* Moeda residual de R$ 1 se houver */

        printf("\n--- Detalhamento do Troco ---\n");
        printf("Troco total devido: R$ %d\n\n", troco);
        printf("Menor quantidade de cedulas:\n");
        if (c100 > 0) printf("  - %d cedula(s) de R$ 100\n", c100);
        if (c50 > 0)  printf("  - %d cedula(s) de R$ 50\n", c50);
        if (c20 > 0)  printf("  - %d cedula(s) de R$ 20\n", c20);
        if (c10 > 0)  printf("  - %d cedula(s) de R$ 10\n", c10);
        if (c5 > 0)   printf("  - %d cedula(s) de R$ 5\n", c5);
        if (c2 > 0)   printf("  - %d cedula(s) de R$ 2\n", c2);
        if (c1 > 0)   printf("  - %d moeda(s) de R$ 1\n", c1);
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
