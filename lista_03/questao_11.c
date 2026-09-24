#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, b, i;

    printf("=== Intervalo Numerico Dinamico ===\n\n");

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("\nSequencia no intervalo [%d, %d]:\n", a, b);

    if (a <= b) {
        for (i = a; i <= b; i++) {
            printf("%d ", i);
        }
    } else {
        for (i = a; i >= b; i--) {
            printf("%d ", i);
        }
    }

    printf("\n\n");
    system("PAUSE");
    return 0;
}
