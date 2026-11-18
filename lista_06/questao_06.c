#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a[3][3], b[3][3], soma[3][3], i, j;

    printf("=== Soma de Matrizes ===\n\n");
    printf("Preencha a primeira matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("A[%d][%d]: ", i, j);
            if (scanf("%d", &a[i][j]) != 1) return 1;
        }
    }
    printf("\nPreencha a segunda matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("B[%d][%d]: ", i, j);
            if (scanf("%d", &b[i][j]) != 1) return 1;
            soma[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\n       Matriz A                         Matriz B                         Soma\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) printf("%12d", a[i][j]);
        printf("   ");
        for (j = 0; j < 3; j++) printf("%12d", b[i][j]);
        printf("   ");
        for (j = 0; j < 3; j++) printf("%12d", soma[i][j]);
        printf("\n");
    }
    printf("\n");

    system("PAUSE");
    return 0;
}
