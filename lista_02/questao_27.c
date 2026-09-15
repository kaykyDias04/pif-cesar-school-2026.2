#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int dado1, dado2, dado3;

    srand(time(NULL));

    dado1 = rand() % 6 + 1;
    dado2 = rand() % 6 + 1;
    dado3 = rand() % 6 + 1;

    printf("=== Lancamento de Tres Dados ===\n\n");
    printf("Dado 1: %d\n", dado1);
    printf("Dado 2: %d\n", dado2);
    printf("Dado 3: %d\n", dado3);
    printf("\nSoma dos dados: %d\n", dado1 + dado2 + dado3);

    system("PAUSE");
    return 0;
}
