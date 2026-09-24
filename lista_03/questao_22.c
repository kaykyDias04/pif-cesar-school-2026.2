#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, i, j;
    int numero = 1;

    printf("=== Triangulo de Floyd ===\n\n");
    printf("Digite o numero de linhas (N positivo): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("\n[ERRO] O numero de linhas deve ser positivo maior que zero.\n\n");
    } else {
        printf("\nTriangulo de Floyd para N = %d:\n\n", n);

        for (i = 1; i <= n; i++) {
            for (j = 1; j <= i; j++) {
                printf("%d ", numero);
                numero++;
            }
            printf("\n");
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
