#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, i;
    long long int t1 = 1, t2 = 1, proximo = 1;

    printf("=== Sequencia de Fibonacci ===\n\n");
    printf("Digite o numero do termo desejado (N >= 1): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("\n[ERRO] O termo N deve ser um inteiro positivo maior ou igual a 1.\n\n");
    } else {
        printf("\nTermos de Fibonacci ate o %do termo:\n", n);

        if (n == 1) {
            printf("%lld\n", t1);
            proximo = t1;
        } else if (n == 2) {
            printf("%lld %lld\n", t1, t2);
            proximo = t2;
        } else {
            printf("%lld %lld ", t1, t2);
            for (i = 3; i <= n; i++) {
                proximo = t1 + t2;
                printf("%lld ", proximo);
                t1 = t2;
                t2 = proximo;
            }
            printf("\n");
        }

        printf("\nValor do %do termo: %lld\n\n", n, proximo);
    }

    system("PAUSE");
    return 0;
}
