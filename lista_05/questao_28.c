#include <stdio.h>
#include <stdlib.h>

/* Prototipos das funcoes declarados antes da main() */
float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main(void) {
    float preco, subtotal, total_pagar, valor_pago, troco;
    int quantidade, forma_pagamento;

    printf("===========================================\n");
    printf("        CAIXA SIMPLES DE MERCADINHO        \n");
    printf("===========================================\n\n");

    printf("Digite o preco unitario do produto (R$): ");
    scanf("%f", &preco);

    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    if (preco <= 0.0f || quantidade <= 0) {
        printf("\n[ERRO] Preco e quantidade devem ser valores estritamente positivos!\n\n");
        system("PAUSE");
        return 0;
    }

    subtotal = calculaSubtotal(preco, quantidade);

    printf("\nSelecione a forma de pagamento:\n");
    printf("  1 - A vista (10%% de desconto)\n");
    printf("  2 - A prazo / Outros (sem desconto)\n");
    printf("Opcao: ");
    scanf("%d", &forma_pagamento);

    total_pagar = aplicaDesconto(subtotal, forma_pagamento);

    printf("\n--- Resumo Parcial da Compra ---\n");
    printf("Subtotal:       R$ %8.2f\n", subtotal);
    if (forma_pagamento == 1) {
        printf("Desconto (10%%): R$ %8.2f\n", subtotal - total_pagar);
    } else {
        printf("Desconto:       R$     0.00\n");
    }
    printf("Total a pagar:  R$ %8.2f\n", total_pagar);
    printf("--------------------------------\n\n");

    printf("Digite o valor em dinheiro entregue pelo cliente (R$): ");
    scanf("%f", &valor_pago);

    if (valor_pago < total_pagar) {
        printf("\n[ERRO] Valor pago (R$ %.2f) e insuficiente para cobrir o total (R$ %.2f)!\n\n",
               valor_pago, total_pagar);
    } else {
        troco = calculaTroco(total_pagar, valor_pago);

        printf("\n===========================================\n");
        printf("              CUPOM FISCAL                 \n");
        printf("===========================================\n");
        printf("Preco Unitario:      R$ %10.2f\n", preco);
        printf("Quantidade de itens:    %10d\n", quantidade);
        printf("Subtotal:            R$ %10.2f\n", subtotal);
        printf("Total a Pagar:       R$ %10.2f\n", total_pagar);
        printf("Valor Recebido:      R$ %10.2f\n", valor_pago);
        printf("Troco do Cliente:    R$ %10.2f\n", troco);
        printf("===========================================\n\n");
    }

    system("PAUSE");
    return 0;
}

/* Funcao que calcula o subtotal da compra */
float calculaSubtotal(float preco, int quantidade) {
    return preco * (float)quantidade;
}

/*
 * Funcao que aplica desconto:
 * Se opcaoPagamento == 1 (a vista), aplica 10% de desconto (retorna 90% do valor).
 * Caso contrario, retorna o valor integral sem desconto.
 */
float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.90f;
    }
    return valor;
}

/* Funcao que calcula o troco do cliente */
float calculaTroco(float total, float pago) {
    return pago - total;
}
