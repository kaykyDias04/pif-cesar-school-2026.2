#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char nomes[3][50], auxiliar[50];
    int i, j, fim;

    printf("=== Nomes em Ordem Alfabetica ===\n\n");
    for (i = 0; i < 3; i++) {
        printf("Digite o nome %d (ate 49 caracteres): ", i + 1);
        if (scanf(" %49[^\n]", nomes[i]) != 1) return 1;
        fim = getchar();
        if (fim != '\n' && fim != EOF) {
            printf("[ERRO] Nome muito longo.\n");
            return 1;
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = i + 1; j < 3; j++) {
            if (strcmp(nomes[i], nomes[j]) > 0) {
                strcpy(auxiliar, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], auxiliar);
            }
        }
    }

    printf("\n--- Ordem Alfabetica ---\n");
    for (i = 0; i < 3; i++) puts(nomes[i]);
    printf("\n");

    system("PAUSE");
    return 0;
}
