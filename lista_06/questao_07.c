#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int matriz[4][4], i, j;
    int principal = 0, secundaria = 0, acima = 0;

    printf("=== Diagonais da Matriz ===\n\n");
    srand((unsigned int)time(NULL));
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 20 + 1;
            printf("%5d", matriz[i][j]);
            if (i == j) principal += matriz[i][j];
            if (i + j == 3) secundaria += matriz[i][j];
            if (j > i) acima += matriz[i][j];
        }
        printf("\n");
    }

    printf("\nSoma da diagonal principal: %d\n", principal);
    printf("Soma da diagonal secundaria: %d\n", secundaria);
    printf("Soma acima da diagonal principal: %d\n\n", acima);

    system("PAUSE");
    return 0;
}
