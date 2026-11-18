#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int matriz[3][4], transposta[4][3], i, j;

    printf("=== Matriz Transposta ===\n\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Valor da posicao [%d][%d]: ", i, j);
            if (scanf("%d", &matriz[i][j]) != 1) return 1;
            transposta[j][i] = matriz[i][j];
        }
    }

    printf("\n--- Matriz Original (3x4) ---\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) printf("%12d", matriz[i][j]);
        printf("\n");
    }
    printf("\n--- Matriz Transposta (4x3) ---\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) printf("%12d", transposta[i][j]);
        printf("\n");
    }
    printf("\n");

    system("PAUSE");
    return 0;
}
