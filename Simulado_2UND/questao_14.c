#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char mensagem[200];
    int k, i, fim;

    printf("=== Cifra de Cesar ===\n\n");
    printf("Digite uma mensagem em maiusculas (ate 199 caracteres): ");
    /* fgets() faz a leitura com limite, ao contrario da antiga gets(). */
    if (fgets(mensagem, sizeof(mensagem), stdin) == NULL) return 1;
    if (strchr(mensagem, '\n') == NULL) {
        fim = getchar();
        if (fim != '\n' && fim != EOF) {
            printf("\n[ERRO] A mensagem ultrapassou o limite de 199 caracteres.\n\n");
            return 1;
        }
    }
    mensagem[strcspn(mensagem, "\n")] = '\0';
    printf("Digite o deslocamento inteiro k: ");
    if (scanf("%d", &k) != 1) return 1;

    k = (k % 26 + 26) % 26;
    for (i = 0; mensagem[i] != '\0'; i++) {
        if (mensagem[i] >= 'A' && mensagem[i] <= 'Z') {
            mensagem[i] = (char)('A' + (mensagem[i] - 'A' + k) % 26);
        }
    }

    printf("\nMensagem criptografada:\n");
    puts(mensagem);
    printf("\n");

    system("PAUSE");
    return 0;
}
