#include <stdio.h>
#include <stdlib.h>

void contagem_for(void) {
    int i;
    printf("--- Versao 1: Laco for ---\n");
    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");
}

void contagem_while(void) {
    int i = 0;
    printf("--- Versao 2: Laco while ---\n");
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");
}

void contagem_do_while(void) {
    int i = 0;
    printf("--- Versao 3: Laco do-while ---\n");
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n\n");
}

int main(void) {
    printf("=== Contagem Progressiva de 0 a 100 em Tres Versoes ===\n\n");

    contagem_for();
    contagem_while();
    contagem_do_while();

    system("PAUSE");
    return 0;
}
