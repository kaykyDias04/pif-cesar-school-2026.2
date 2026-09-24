#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, i, j;

    printf("=== Padrao Visual em X (Diagonais Cruzadas) ===\n\n");

    do {
        printf("Digite uma dimensao impar N (entre 3 e 19): ");
        scanf("%d", &n);

        if (n < 3 || n > 19 || n % 2 == 0) {
            printf("[AVISO] Valor invalido! N deve ser um numero IMPAR entre 3 e 19.\n\n");
        }
    } while (n < 3 || n > 19 || n % 2 == 0);

    printf("\nPadrao 'X' de dimensao %dx%d:\n\n", n, n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");
    system("PAUSE");
    return 0;
}
