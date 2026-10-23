#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float valor_produto, aliquota, preco_final;
    int codigo_estado;

    printf("=== Calculo de Impostos Estaduais sobre Produtos ===\n\n");
    printf("Digite o valor do produto (R$): ");
    scanf("%f", &valor_produto);

    if (valor_produto <= 0.0f) {
        printf("\n[ERRO] O valor do produto deve ser maior que zero!\n\n");
    } else {
        printf("\nEstados de Destino:\n");
        printf("  1 - MG (7%%)\n");
        printf("  2 - SP (12%%)\n");
        printf("  3 - RJ (15%%)\n");
        printf("  4 - MS (8%%)\n");
        printf("Selecione o codigo do estado de destino (1 a 4): ");
        scanf("%d", &codigo_estado);

        switch (codigo_estado) {
            case 1:
                aliquota = 0.07f;
                printf("\nEstado selecionado: Minas Gerais (MG)\n");
                break;
            case 2:
                aliquota = 0.12f;
                printf("\nEstado selecionado: Sao Paulo (SP)\n");
                break;
            case 3:
                aliquota = 0.15f;
                printf("\nEstado selecionado: Rio de Janeiro (RJ)\n");
                break;
            case 4:
                aliquota = 0.08f;
                printf("\nEstado selecionado: Mato Grosso do Sul (MS)\n");
                break;
            default:
                printf("\n[ERRO] Codigo de estado invalido! Operacao cancelada.\n\n");
                system("PAUSE");
                return 0;
        }

        preco_final = valor_produto * (1.0f + aliquota);

        printf("Aliquota de imposto: %.0f%%\n", aliquota * 100.0f);
        printf("Valor original: R$ %.2f\n", valor_produto);
        printf("Preco final com imposto: R$ %.2f\n\n", preco_final);
    }

    system("PAUSE");
    return 0;
}
