#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAM 10

int main(void) {
    float temperaturas[TAM], maior;
    double soma = 0.0, media;
    int i, posicao_maior = 0, acima = 0;

    printf("=== Temperaturas dos Dias ===\n\n");
    for (i = 0; i < TAM; i++) {
        printf("Temperatura maxima do dia %d: ", i + 1);
        if (scanf("%f", &temperaturas[i]) != 1 || !isfinite(temperaturas[i])) {
            printf("\n[ERRO] Informe uma temperatura numerica finita.\n\n");
            return 1;
        }
        soma += temperaturas[i];
    }

    media = soma / TAM;
    maior = temperaturas[0];
    for (i = 0; i < TAM; i++) {
        if (temperaturas[i] > maior) {
            maior = temperaturas[i];
            posicao_maior = i;
        }
        if (temperaturas[i] > media) acima++;
    }

    printf("\n--- Resumo das Temperaturas ---\n");
    printf("Temperatura media: %.2f\n", media);
    printf("Maior temperatura: %.2f (posicao %d, dia %d)\n", maior, posicao_maior, posicao_maior + 1);
    printf("Dias acima da media: %d\n\n", acima);

    system("PAUSE");
    return 0;
}
