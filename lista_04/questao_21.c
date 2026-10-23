#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float salario_atual, aumento, novo_salario;
    float percentual = 0.0f;
    int cargo;

    printf("=== Calculo de Reajuste Salarial por Categoria ===\n\n");
    printf("Digite o salario atual (R$): ");
    scanf("%f", &salario_atual);

    if (salario_atual <= 0.0f) {
        printf("\n[ERRO] Salario invalido!\n\n");
    } else {
        printf("\nCargos disponiveis:\n");
        printf("  1 - Tecnico\n");
        printf("  2 - Gerente\n");
        printf("  3 - Demais Cargos\n");
        printf("Informe o codigo do cargo (1, 2 ou 3): ");
        scanf("%d", &cargo);

        switch (cargo) {
            case 1:
                if (salario_atual <= 3000.0f) {
                    percentual = 0.15f;
                } else {
                    percentual = 0.10f;
                }
                break;

            case 2:
                if (salario_atual <= 5000.0f) {
                    percentual = 0.10f;
                } else {
                    percentual = 0.05f;
                }
                break;

            case 3:
                percentual = 0.08f;
                break;

            default:
                printf("\n[ERRO] Codigo de cargo invalido!\n\n");
                system("PAUSE");
                return 0;
        }

        aumento = salario_atual * percentual;
        novo_salario = salario_atual + aumento;

        printf("\n--- Demonstrativo de Reajuste ---\n");
        printf("Percentual aplicado: %.0f%%\n", percentual * 100.0f);
        printf("Valor do aumento: R$ %.2f\n", aumento);
        printf("Novo salario reajustado: R$ %.2f\n\n", novo_salario);
    }

    system("PAUSE");
    return 0;
}
