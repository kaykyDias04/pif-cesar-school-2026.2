#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;

    printf("=== 100 Primeiros Multiplos Positivos de 3 ===\n\n");

    for (i = 1; i <= 100; i++) {
        int multiplo = i * 3;
        printf("%d\t", multiplo);

        if (i % 10 == 0) {
            printf("\n");
        }
    }

    printf("\n");
    system("PAUSE");
    return 0;
}
