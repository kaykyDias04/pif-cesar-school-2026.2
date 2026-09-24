#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int valor, restante;
    int c100 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0;

    printf("=== Simulador de Caixa Eletronico ===\n\n");
    printf("Cedulas disponiveis: R$ 100, R$ 50, R$ 20, R$ 10, R$ 5 e R$ 2\n\n");
    printf("Informe o valor do saque em reais (R$): ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("\n[ERRO] O valor do saque deve ser um numero inteiro positivo.\n\n");
    } else {
        restante = valor;

        while (restante >= 100) {
            restante -= 100;
            c100++;
        }

        while (restante >= 50) {
            restante -= 50;
            c50++;
        }

        while (restante >= 20) {
            restante -= 20;
            c20++;
        }

        while (restante >= 10) {
            restante -= 10;
            c10++;
        }

        while (restante >= 5) {
            restante -= 5;
            c5++;
        }

        while (restante >= 2) {
            restante -= 2;
            c2++;
        }

        printf("\n--- Composicao das Cedulas para Saque de R$ %d ---\n", valor);
        printf("Cedulas de R$ 100: %d\n", c100);
        printf("Cedulas de R$ 50:  %d\n", c50);
        printf("Cedulas de R$ 20:  %d\n", c20);
        printf("Cedulas de R$ 10:  %d\n", c10);
        printf("Cedulas de R$ 5:   %d\n", c5);
        printf("Cedulas de R$ 2:   %d\n", c2);

        if (restante > 0) {
            printf("\n[AVISO] Sobrou R$ %d que nao pode ser dispensado com as cedulas disponiveis.\n", restante);
        }

        printf("\n");
    }

    system("PAUSE");
    return 0;
}
