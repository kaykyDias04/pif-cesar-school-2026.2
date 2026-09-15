#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float comprimento, largura;
    float preco_metro;
    float perimetro, metros_arame, custo_total;

    printf("=== Orcamento de Cercamento de Terreno ===\n\n");

    printf("Digite o comprimento do terreno (m): ");
    scanf("%f", &comprimento);
    printf("Digite a largura do terreno (m): ");
    scanf("%f", &largura);
    printf("Digite o preco do metro de arame farpado (R$): ");
    scanf("%f", &preco_metro);

    perimetro = 2.0 * (comprimento + largura);
    metros_arame = perimetro * 3;
    custo_total = metros_arame * preco_metro;

    printf("\n--- Orcamento ---\n");
    printf("Perimetro do terreno:      %.2f m\n", perimetro);
    printf("Metros de arame (3 fios):  %.2f m\n", metros_arame);
    printf("Preco por metro:           R$ %.2f\n", preco_metro);
    printf("Custo total do cercamento: R$ %.2f\n", custo_total);

    system("PAUSE");
    return 0;
}
