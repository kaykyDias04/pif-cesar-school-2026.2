#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;
    int soma = 0;

    printf("=== Soma dos Quadrados (1 a 9) ===\n\n");

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }

    printf("Soma final = %d\n\n", soma);

    system("PAUSE");
    return 0;
}
