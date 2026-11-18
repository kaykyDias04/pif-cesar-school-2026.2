#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char convidados[5][30], nome[30];
    int i, posicao = -1, fim;

    printf("=== Lista de Convidados ===\n\n");
    for (i = 0; i < 5; i++) {
        printf("Nome do convidado %d (ate 29 caracteres): ", i + 1);
        if (scanf(" %29[^\n]", convidados[i]) != 1) return 1;
        fim = getchar();
        if (fim != '\n' && fim != EOF) {
            printf("\n[ERRO] Nome muito longo.\n\n");
            return 1;
        }
    }
    printf("\nQual nome deseja procurar? ");
    if (scanf(" %29[^\n]", nome) != 1) return 1;
    fim = getchar();
    if (fim != '\n' && fim != EOF) {
        printf("\n[ERRO] Nome muito longo.\n\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        if (strcmp(convidados[i], nome) == 0) {
            posicao = i;
            break;
        }
    }
    if (posicao == -1) {
        printf("\nEsse nome nao esta na lista.\n\n");
    } else {
        printf("\n%s esta na lista, na posicao %d.\n\n", nome, posicao + 1);
    }

    system("PAUSE");
    return 0;
}
