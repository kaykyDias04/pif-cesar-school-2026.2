#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    char operacao;
    double num1, num2, resultado;

    printf("=== Calculadora Aritmetica e Cientifica ===\n\n");
    printf("Operacoes disponiveis:\n");
    printf("  [ + ] Soma\n");
    printf("  [ - ] Subtracao\n");
    printf("  [ * ] Multiplicacao\n");
    printf("  [ / ] Divisao\n");
    printf("  [ ^ ] Potenciacao (x^y)\n\n");
    printf("Escolha a operacao desejada (+, -, *, /, ^): ");
    scanf(" %c", &operacao);

    printf("Digite o primeiro operando: ");
    scanf("%lf", &num1);
    printf("Digite o segundo operando: ");
    scanf("%lf", &num2);

    printf("\nResultado: ");
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("%.4f + %.4f = %.4f\n\n", num1, num2, resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("%.4f - %.4f = %.4f\n\n", num1, num2, resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf("%.4f * %.4f = %.4f\n\n", num1, num2, resultado);
            break;

        case '/':
            if (num2 == 0.0) {
                printf("[ERRO] Divisao por zero nao e permitida!\n\n");
            } else {
                resultado = num1 / num2;
                printf("%.4f / %.4f = %.4f\n\n", num1, num2, resultado);
            }
            break;

        case '^':
            resultado = pow(num1, num2);
            printf("%.4f ^ %.4f = %.4f\n\n", num1, num2, resultado);
            break;

        default:
            printf("[ERRO] Operacao invalida selecionada!\n\n");
            break;
    }

    system("PAUSE");
    return 0;
}
