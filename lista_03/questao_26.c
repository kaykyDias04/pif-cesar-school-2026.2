#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, b, num, d;
    int qtd_primos = 0;
    long long int soma_primos = 0;

    printf("=== Mapeamento e Soma de Primos em [A, B] ===\n\n");

    do {
        printf("Digite o inicio do intervalo (A > 0): ");
        scanf("%d", &a);
        printf("Digite o fim do intervalo (B > A): ");
        scanf("%d", &b);

        if (a <= 0 || b <= 0 || a >= b) {
            printf("[AVISO] Entrada invalida! Certifique-se de que A > 0, B > 0 e A < B.\n\n");
        }
    } while (a <= 0 || b <= 0 || a >= b);

    printf("\nNumeros primos encontrados no intervalo [%d, %d]:\n", a, b);

    for (num = a; num <= b; num++) {
        if (num > 1) {
            int divisores = 0;
            for (d = 1; d <= num; d++) {
                if (num % d == 0) {
                    divisores++;
                }
            }

            if (divisores == 2) {
                printf("%d ", num);
                qtd_primos++;
                soma_primos += num;
            }
        }
    }

    printf("\n\n--- Resumo ---\n");
    if (qtd_primos > 0) {
        printf("Total de numeros primos encontrados: %d\n", qtd_primos);
        printf("Soma total dos numeros primos:        %lld\n\n", soma_primos);
    } else {
        printf("Nenhum numero primo foi encontrado no intervalo informado.\n\n");
    }

    system("PAUSE");
    return 0;
}
