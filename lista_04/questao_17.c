#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float valor_total, valor_final, parcela, comissao;
    int opcao;

    printf("=== Calculo de Pagamento e Comissao de Vendas ===\n\n");
    printf("Digite o valor total da compra (R$): ");
    scanf("%f", &valor_total);

    if (valor_total <= 0.0f) {
        printf("\n[ERRO] O valor da compra deve ser maior que zero!\n\n");
    } else {
        printf("\nOpcoes de Pagamento:\n");
        printf("  1 - A Vista (com 10%% de desconto)\n");
        printf("  2 - Parcelado em 3x sem juros\n");
        printf("Escolha a opcao desejada (1 ou 2): ");
        scanf("%d", &opcao);

        printf("\n--- Detalhamento da Venda ---\n");
        if (opcao == 1) {
            valor_final = valor_total * 0.90f;
            comissao = valor_final * 0.05f;
            printf("Modalidade: A Vista\n");
            printf("Valor final com 10%% de desconto: R$ %.2f\n", valor_final);
            printf("Comissao do vendedor (5%% sobre o valor com desconto): R$ %.2f\n\n", comissao);
        } else if (opcao == 2) {
            parcela = valor_total / 3.0f;
            comissao = valor_total * 0.05f;
            printf("Modalidade: Parcelado em 3x sem juros\n");
            printf("Valor de cada parcela (3x): R$ %.2f\n", parcela);
            printf("Valor total a pagar: R$ %.2f\n", valor_total);
            printf("Comissao do vendedor (5%% sobre o valor total): R$ %.2f\n\n", comissao);
        } else {
            printf("[ERRO] Opcao de pagamento invalida!\n\n");
        }
    }

    system("PAUSE");
    return 0;
}
