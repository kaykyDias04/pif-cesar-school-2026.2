#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char nomes[5][30];
    int i, maior = 0, menor = 0, mesma_letra = 0, fim;

    printf("=== Agenda de Nomes ===\n\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o nome %d (ate 29 caracteres): ", i + 1);
        if (scanf(" %29[^\n]", nomes[i]) != 1) return 1;
        fim = getchar();
        if (fim != '\n' && fim != EOF) {
            printf("[ERRO] Nome muito longo.\n");
            return 1;
        }
    }

    for (i = 0; i < 5; i++) {
        if (strlen(nomes[i]) > strlen(nomes[maior])) maior = i;
        if (strlen(nomes[i]) < strlen(nomes[menor])) menor = i;
        if (tolower((unsigned char)nomes[i][0]) == tolower((unsigned char)nomes[0][0])) {
            mesma_letra++;
        }
    }

    printf("\nNome mais longo: %s\n", nomes[maior]);
    printf("Nome mais curto: %s\n", nomes[menor]);
    printf("Nomes com a mesma inicial do primeiro: %d\n\n", mesma_letra);

    system("PAUSE");
    return 0;
}
