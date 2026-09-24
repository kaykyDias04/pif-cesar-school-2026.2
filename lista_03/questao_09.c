#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float valor;
    float soma = 0.0f;
    int quantidade = 0;

    printf("=== Acumulador de Valores com Sentinela Negativo ===\n");
    printf("Digite valores reais positivos (ou um numero negativo para encerrar):\n\n");

    while (1) {
        printf("Digite um valor: ");
        scanf("%f", &valor);

        if (valor < 0.0f) {
            break;
        }

        soma += valor;
        quantidade++;
    }

    printf("\n--- Relatorio Final ---\n");
    if (quantidade > 0) {
        float media = soma / (float)quantidade;
        printf("Quantidade de valores validos: %d\n", quantidade);
        printf("Soma total:                    %.2f\n", soma);
        printf("Media aritmetica:              %.2f\n\n", media);
    } else {
        printf("Nenhum valor positivo valido foi digitado.\n\n");
    }

    system("PAUSE");
    return 0;
}
