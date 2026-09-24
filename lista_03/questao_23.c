#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int l, i, j;

    printf("=== Quadrado Vazado com Caracteres ('X') ===\n\n");

    do {
        printf("Digite a dimensao do lado L (entre 3 e 20): ");
        scanf("%d", &l);

        if (l < 3 || l > 20) {
            printf("[AVISO] Valor invalido! L deve estar no intervalo de 3 a 20.\n\n");
        }
    } while (l < 3 || l > 20);

    printf("\nQuadrado de dimensao %dx%d:\n\n", l, l);

    for (i = 1; i <= l; i++) {
        for (j = 1; j <= l; j++) {
            if (i == 1 || i == l || j == 1 || j == l) {
                printf("X");
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
