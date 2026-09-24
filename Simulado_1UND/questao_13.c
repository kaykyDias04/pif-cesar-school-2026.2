#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, i;
    long long int fatorial = 1;

    printf("=== Calculo do Fatorial (N!) ===\n\n");
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("\n[ERRO] Nao e possivel calcular o fatorial de um numero negativo (%d)!\n\n", n);
    } else {
        for (i = 2; i <= n; i++) {
            fatorial *= i;
        }

        printf("\nResultado: %d! = %lld\n\n", n, fatorial);
    }

    system("PAUSE");
    return 0;
}
