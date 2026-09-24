#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;
    long long int soma_quadrados = 0;

    printf("=== Sequencia de Quadrados (1 a 100) ===\n\n");

    for (i = 1; i <= 100; i++) {
        long long int quadrado = (long long int)i * i;
        soma_quadrados += quadrado;
        printf("%3d -> %5lld\n", i, quadrado);
    }

    printf("\n----------------------------------------\n");
    printf("Soma total dos quadrados: %lld\n\n", soma_quadrados);

    system("PAUSE");
    return 0;
}
