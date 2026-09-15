#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float n1, n2, n3, n4;
    float media_simples, media_ponderada;

    printf("=== Calculo de Medias ===\n\n");

    printf("Digite a nota da prova 1: ");
    scanf("%f", &n1);
    printf("Digite a nota da prova 2: ");
    scanf("%f", &n2);
    printf("Digite a nota da prova 3: ");
    scanf("%f", &n3);
    printf("Digite a nota da prova 4: ");
    scanf("%f", &n4);

    media_simples = (n1 + n2 + n3 + n4) / 4.0;
    media_ponderada = (n1 * 1 + n2 * 1 + n3 * 2 + n4 * 2) / 6.0;

    printf("\n--- Resultados ---\n");
    printf("a) Media aritmetica simples:  %.2f\n", media_simples);
    printf("b) Media ponderada (1,1,2,2): %.2f\n", media_ponderada);

    system("PAUSE");
    return 0;
}
