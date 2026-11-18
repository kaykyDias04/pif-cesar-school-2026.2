#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char frase[200], letra;
    int vogais = 0, consoantes = 0, espacos = 0, fim;
    size_t i, tamanho;

    printf("=== Contador de Vogais e Consoantes ===\n\n");
    printf("Digite uma frase (ate 199 caracteres, sem acentos): ");
    /* gets() nao limita a entrada; fgets() evita escrever fora do vetor. */
    if (fgets(frase, sizeof(frase), stdin) == NULL) return 1;
    if (strchr(frase, '\n') == NULL) {
        fim = getchar();
        if (fim != '\n' && fim != EOF) {
            printf("[ERRO] A frase ultrapassou o limite de 199 caracteres.\n");
            return 1;
        }
    }
    frase[strcspn(frase, "\n")] = '\0';
    tamanho = strlen(frase);

    for (i = 0; i < tamanho; i++) {
        letra = (char)tolower((unsigned char)frase[i]);
        if (letra == ' ') {
            espacos++;
        } else if (letra >= 'a' && letra <= 'z') {
            if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
                vogais++;
            } else {
                consoantes++;
            }
        }
    }

    printf("\nVogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);
    printf("Espacos: %d\n\n", espacos);

    system("PAUSE");
    return 0;
}
