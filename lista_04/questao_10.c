#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numero;

    printf("=== Analise de Paridade e Sinal de Inteiros ===\n\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("\n--- Resultados ---\n");

    /* Verificação de Paridade */
    if (numero % 2 == 0) {
        printf("Paridade: PAR\n");
    } else {
        printf("Paridade: IMPAR\n");
    }

    /* Verificação de Sinal */
    if (numero > 0) {
        printf("Sinal: POSITIVO\n\n");
    } else if (numero < 0) {
        printf("Sinal: NEGATIVO\n\n");
    } else {
        printf("Sinal: ZERO (neutro)\n\n");
    }

    system("PAUSE");
    return 0;
}
