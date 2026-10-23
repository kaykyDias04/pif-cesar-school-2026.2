#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float distancia, litros, consumo;

    printf("=== Classificacao de Eficiencia de Consumo de Combustivel ===\n\n");
    printf("Digite a distancia percorrida (em km): ");
    scanf("%f", &distancia);
    printf("Digite a quantidade de litros de gasolina consumidos: ");
    scanf("%f", &litros);

    if (distancia <= 0.0f || litros <= 0.0f) {
        printf("\n[ERRO] A distancia e a quantidade de combustivel devem ser maiores que zero!\n\n");
    } else {
        consumo = distancia / litros;

        printf("\nConsumo calculado: %.2f km/l\n", consumo);
        printf("Classificacao: ");

        if (consumo < 8.0f) {
            printf("Venda o carro!\n\n");
        } else if (consumo <= 14.0f) {
            printf("Economico!\n\n");
        } else {
            printf("Super economico!\n\n");
        }
    }

    system("PAUSE");
    return 0;
}
