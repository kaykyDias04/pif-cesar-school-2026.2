#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 15

int main(void) {
    int vet[TAMANHO], num, n = 0, i;

    printf("=== Vetor Invertido ===\n\n");
    printf("Digite ate %d inteiros (0 encerra a leitura).\n", TAMANHO);
    do {
        printf("Numero: ");
        if (scanf("%d", &num) != 1) {
            printf("[ERRO] Digite um numero inteiro.\n");
            return 1;
        }
        if (num != 0) {
            vet[n++] = num;
            if (n == TAMANHO) {
                printf("BUFFER LOTADO\n");
                break;
            }
        }
    } while (num != 0);

    printf("\nValores na ordem inversa:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", vet[i]);
    }
    printf("\n\n");

    system("PAUSE");
    return 0;
}
