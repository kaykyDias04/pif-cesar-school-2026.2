#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int opcao;
    double temp_entrada, temp_convertida;

    printf("=== Conversor Multidirecional de Escalas Termometricas ===\n\n");
    printf("Opcoes de Conversao:\n");
    printf("  1 - Celsius para Fahrenheit\n");
    printf("  2 - Celsius para Kelvin\n");
    printf("  3 - Fahrenheit para Celsius\n");
    printf("  4 - Kelvin para Celsius\n\n");
    printf("Digite a opcao desejada (1 a 4): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nDigite a temperatura em Celsius: ");
            scanf("%lf", &temp_entrada);
            temp_convertida = temp_entrada * 1.8 + 32.0;
            printf("Resultado: %.2f °C = %.2f °F\n\n", temp_entrada, temp_convertida);
            break;

        case 2:
            printf("\nDigite a temperatura em Celsius: ");
            scanf("%lf", &temp_entrada);
            temp_convertida = temp_entrada + 273.15;
            printf("Resultado: %.2f °C = %.2f K\n\n", temp_entrada, temp_convertida);
            break;

        case 3:
            printf("\nDigite a temperatura em Fahrenheit: ");
            scanf("%lf", &temp_entrada);
            temp_convertida = (temp_entrada - 32.0) / 1.8;
            printf("Resultado: %.2f °F = %.2f °C\n\n", temp_entrada, temp_convertida);
            break;

        case 4:
            printf("\nDigite a temperatura em Kelvin: ");
            scanf("%lf", &temp_entrada);
            temp_convertida = temp_entrada - 273.15;
            printf("Resultado: %.2f K = %.2f °C\n\n", temp_entrada, temp_convertida);
            break;

        default:
            printf("\n[ERRO] Opcao invalida! Digite um valor entre 1 e 4.\n\n");
            break;
    }

    system("PAUSE");
    return 0;
}
