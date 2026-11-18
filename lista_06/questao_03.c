#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int lancamentos[30], frequencia[6] = {0}, i;

    printf("=== Frequencia dos Lancamentos de um Dado ===\n\n");
    srand((unsigned int)time(NULL));
    for (i = 0; i < 30; i++) {
        lancamentos[i] = rand() % 6 + 1;
        frequencia[lancamentos[i] - 1]++;
    }

    for (i = 0; i < 6; i++) {
        printf("Face %d: %d vezes\n", i + 1, frequencia[i]);
    }
    printf("\n");

    system("PAUSE");
    return 0;
}
