#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, i;
    int divisores = 0;

    printf("=== Teste de Primalidade de um Numero Inteiro ===\n\n");
    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("\n[ERRO] O numero deve ser um inteiro positivo (> 0).\n\n");
    } else {
        for (i = 1; i <= n; i++) {
            if (n % i == 0) {
                divisores++;
            }
        }

        printf("\n--- Analise de Divisores ---\n");
        printf("Quantidade de divisores encontrados no laco: %d\n", divisores);

        if (n > 1 && divisores == 2) {
            printf("Conclusao: O numero %d E PRIMO (divisivel apenas por 1 e por si mesmo).\n\n", n);
        } else {
            printf("Conclusao: O numero %d NAO E PRIMO.\n\n", n);
        }
    }

    system("PAUSE");
    return 0;
}
