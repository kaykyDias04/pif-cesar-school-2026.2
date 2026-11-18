#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char nome[50], sobrenome[50], completo[102];
    int fim;

    printf("=== Nome Completo ===\n\n");
    printf("Digite seu primeiro nome (ate 49 caracteres): ");
    if (scanf(" %49[^\n]", nome) != 1) return 1;
    fim = getchar();
    if (fim != '\n' && fim != EOF) {
        printf("[ERRO] Nome muito longo.\n");
        return 1;
    }
    printf("Digite seu sobrenome (ate 49 caracteres): ");
    if (scanf(" %49[^\n]", sobrenome) != 1) return 1;
    fim = getchar();
    if (fim != '\n' && fim != EOF) {
        printf("[ERRO] Sobrenome muito longo.\n");
        return 1;
    }

    strcpy(completo, sobrenome);
    strcat(completo, ", ");
    strcat(completo, nome);
    printf("\nNome no formato solicitado:\n");
    puts(completo);
    printf("Quantidade de caracteres: %zu\n\n", strlen(completo));

    system("PAUSE");
    return 0;
}
