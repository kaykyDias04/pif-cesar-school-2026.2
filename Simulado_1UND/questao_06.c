#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;
    int soma = 0;

    printf("=== Soma dos Quadrados com continue e break ===\n\n");

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }

    printf("Soma final = %d\n\n", soma);

    system("PAUSE");
    return 0;
}
