#include <stdio.h>
#include <stdlib.h>

/* Prototipo da funcao recursiva declarado antes da main() */
long fibonacci(int n);

int main(void) {
    int qtd_termos, i;

    printf("=== Sequencia de Fibonacci com Funcao Recursiva ===\n\n");
    printf("Digite a quantidade de termos da sequencia a exibir: ");
    scanf("%d", &qtd_termos);

    if (qtd_termos <= 0) {
        printf("\n[ERRO] A quantidade de termos deve ser maior que zero!\n\n");
    } else {
        printf("\nSequencia de Fibonacci (%d primeiros termos):\n", qtd_termos);
        printf("---------------------------------------------------\n");

        for (i = 0; i < qtd_termos; i++) {
            printf("%ld ", fibonacci(i));
        }
        printf("\n---------------------------------------------------\n\n");
    }

    system("PAUSE");
    return 0;
}

/*
 * Implementacao recursiva da sequencia de Fibonacci:
 * fibonacci(0) = 0
 * fibonacci(1) = 1
 * fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
 *
 * POR QUE A VERSAO RECURSIVA SE TORNA LENTA PARA VALORES GRANDES DE N:
 *
 * 1. Explosao Exponencial de Chamadas (Complexidade O(2^n)):
 *    A cada chamada onde n >= 2, a funcao se divide em duas novas chamadas recursivas.
 *    Isso gera uma arvore de chamadas binaria cuja quantidade de nos cresce
 *    exponencialmente na proporcao da razao aurea (~1.618^n).
 *
 * 2. Recalculo Redundante de Subproblemas:
 *    A funcao nao memoriza resultados intermediarios. Por exemplo, para calcular
 *    fibonacci(5), calcula-se fibonacci(4) e fibonacci(3). Por sua vez, fibonacci(4)
 *    recalcula fibonacci(3) e fibonacci(2) do zero.
 *    O termo fibonacci(3) e totalmente recalculado duas vezes; termos menores como
 *    fibonacci(2) ou fibonacci(1) sao recalculados dezenas ou centenas de vezes.
 *
 * 3. Para n = 45 ou 50, a quantidade de chamadas atinge bilhoes, provocando travamento
 *    visivel e lentidao severa por falta de programacao dinamica / iteracao linear.
 */
long fibonacci(int n) {
    /* Casos base */
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    /* Passo recursivo */
    return fibonacci(n - 1) + fibonacci(n - 2);
}
