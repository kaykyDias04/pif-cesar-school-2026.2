#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x = 15, y = 5;

    printf("=== Associacao de else com Chaves de Bloco ===\n\n");

    if (x > 10) {
        if (y > 10) {
            printf("Opção A\n");
        }
    } else {
        printf("Opção B\n");
    }

    system("PAUSE");
    return 0;
}
