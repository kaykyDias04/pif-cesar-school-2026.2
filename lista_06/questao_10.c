#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define JOGOS 5

int main(void) {
    int jogos[JOGOS][6], i, j, k, dezena, repetida;

    printf("=== Gerador de Jogos de Loteria ===\n\n");
    srand((unsigned int)time(NULL));
    for (i = 0; i < JOGOS; i++) {
        for (j = 0; j < 6; j++) {
            do {
                dezena = rand() % 60 + 1;
                repetida = 0;
                for (k = 0; k < j; k++) {
                    if (jogos[i][k] == dezena) repetida = 1;
                }
            } while (repetida);
            jogos[i][j] = dezena;
        }
    }

    for (i = 0; i < JOGOS; i++) {
        printf("Jogo %d:", i + 1);
        for (j = 0; j < 6; j++) printf(" %02d", jogos[i][j]);
        printf("\n");
    }
    printf("\n");

    system("PAUSE");
    return 0;
}
