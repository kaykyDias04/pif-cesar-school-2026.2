#include <stdio.h>
#include <stdlib.h>

/* Prototipos da funcao recursiva e do procedimento declarados antes da main() */
int mdc(int a, int b);
void simplifica(int num, int den);

int main(void) {
    int n1, n2, resultado_mdc;

    printf("=== Maximo Divisor Comum (MDC) e Simplificacao de Fracoes ===\n\n");
    printf("Digite o primeiro inteiro positivo (numerador): ");
    scanf("%d", &n1);

    printf("Digite o segundo inteiro positivo (denominador): ");
    scanf("%d", &n2);

    if (n1 <= 0 || n2 <= 0) {
        printf("\n[ERRO] Ambos os numeros devem ser inteiros estritamente positivos (> 0)!\n\n");
    } else {
        resultado_mdc = mdc(n1, n2);

        printf("\n-------------------------------------------------------------\n");
        printf("MDC(%d, %d) = %d (calculado via Algoritmo de Euclides recursivo)\n", n1, n2, resultado_mdc);
        printf("-------------------------------------------------------------\n\n");

        printf("--- Simplificacao da Fracao ---\n");
        simplifica(n1, n2);
    }

    system("PAUSE");
    return 0;
}

/*
 * Implementacao do Algoritmo de Euclides com recursao:
 * CASO BASE: quando b == 0, o MDC e o proprio valor de a.
 * PASSO RECURSIVO: mdc(b, a % b), reduzindo o problema atraves do resto da divisao.
 */
int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}

/*
 * Procedimento simplifica:
 * Utiliza o MDC para dividir o numerador e o denominador pelo seu maior
 * divisor comum, exibindo a fracao irredutivel simplificada.
 */
void simplifica(int num, int den) {
    int divisor_comum;

    if (den == 0) {
        printf("[ERRO] Denominador nao pode ser zero!\n\n");
        return;
    }

    divisor_comum = mdc(num, den);

    printf("Fracao original:    %d / %d\n", num, den);
    printf("Divisor comum (MDC): %d\n", divisor_comum);

    if (den / divisor_comum == 1) {
        printf("Fracao simplificada: %d (numero inteiro)\n\n", num / divisor_comum);
    } else {
        printf("Fracao simplificada: %d / %d\n\n", num / divisor_comum, den / divisor_comum);
    }
}
