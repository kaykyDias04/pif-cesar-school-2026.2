#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    char letra_secreta, palpite;
    int tentativas = 0;

    srand((unsigned int)time(NULL));

    letra_secreta = (char)((rand() % 26) + 'a');

    printf("=== Jogo de Adivinhacao de Letras ===\n");
    printf("O computador escolheu uma letra secreta entre 'a' e 'z'.\n");
    printf("Tente adivinhar qual e!\n\n");

    do {
        printf("Digite o seu palpite: ");
        scanf(" %c", &palpite);

        if (palpite >= 'A' && palpite <= 'Z') {
            palpite = (char)(palpite + ('a' - 'A'));
        }

        if (palpite < 'a' || palpite > 'z') {
            printf("[AVISO] Por favor, digite apenas letras de 'a' a 'z'.\n\n");
            continue;
        }

        tentativas++;

        if (palpite < letra_secreta) {
            printf("-> DICA: A letra secreta vem DEPOIS de '%c' no alfabeto!\n\n", palpite);
        } else if (palpite > letra_secreta) {
            printf("-> DICA: A letra secreta vem ANTES de '%c' no alfabeto!\n\n", palpite);
        } else {
            printf("\nPARABENS! Voce acertou a letra secreta ('%c')!\n", letra_secreta);
            printf("Total de tentativas utilizadas: %d\n\n", tentativas);
        }
    } while (palpite != letra_secreta);

    system("PAUSE");
    return 0;
}
