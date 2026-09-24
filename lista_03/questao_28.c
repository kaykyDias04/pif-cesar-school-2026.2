#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int opcao;

    do {
        printf("=========================================\n");
        printf("     SISTEMA DE FOLHA DE PAGAMENTO       \n");
        printf("=========================================\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("-----------------------------------------\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                float salario, percentual, aumento, novo_salario;

                printf("\n--- Reajuste Salarial ---\n");
                printf("Digite o salario atual do funcionario (R$): ");
                scanf("%f", &salario);

                if (salario <= 0.0f) {
                    printf("[ERRO] Salario deve ser um valor positivo!\n\n");
                } else {
                    if (salario <= 2000.00f) {
                        percentual = 15.0f;
                    } else {
                        percentual = 10.0f;
                    }

                    aumento = salario * (percentual / 100.0f);
                    novo_salario = salario + aumento;

                    printf("Salario atual:      R$ %10.2f\n", salario);
                    printf("Percentual aumento:     %6.0f%%\n", percentual);
                    printf("Valor do aumento:   R$ %10.2f\n", aumento);
                    printf("Novo salario:       R$ %10.2f\n\n", novo_salario);
                }
                break;
            }

            case 2: {
                float salario, percentual, imposto, salario_liquido;

                printf("\n--- Retencao de Imposto de Renda ---\n");
                printf("Digite o salario bruto do funcionario (R$): ");
                scanf("%f", &salario);

                if (salario <= 0.0f) {
                    printf("[ERRO] Salario deve ser um valor positivo!\n\n");
                } else {
                    if (salario <= 3000.00f) {
                        percentual = 8.0f;
                    } else {
                        percentual = 15.0f;
                    }

                    imposto = salario * (percentual / 100.0f);
                    salario_liquido = salario - imposto;

                    printf("Salario bruto:      R$ %10.2f\n", salario);
                    printf("Aliquota do IR:         %6.0f%%\n", percentual);
                    printf("Desconto retido:    R$ %10.2f\n", imposto);
                    printf("Salario liquido:    R$ %10.2f\n\n", salario_liquido);
                }
                break;
            }

            case 3: {
                printf("\nEncerrando o programa de Folha de Pagamento. Ate mais!\n\n");
                break;
            }

            default: {
                printf("\n[ERRO] Opcao %d invalida! Escolha 1, 2 ou 3.\n\n", opcao);
                break;
            }
        }

    } while (opcao != 3);

    system("PAUSE");
    return 0;
}
