#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, b;
    float divisao;

    printf("=== Quatro Operacoes Aritmeticas ===\n\n");
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &a);
    printf("Digite o segundo numero inteiro (diferente de zero): ");
    scanf("%d", &b);

    divisao = (float) a / b;

    printf("\n--- Resultados ---\n");
    printf("Soma:         %d + %d = %d\n", a, b, a + b);
    printf("Subtracao:    %d - %d = %d\n", a, b, a - b);
    printf("Multiplicacao:%d * %d = %d\n", a, b, a * b);
    printf("Divisao real: %d / %d = %.2f\n", a, b, divisao);

    system("PAUSE");
    return 0;
}
