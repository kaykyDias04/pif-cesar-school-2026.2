#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int idade;
    double renda, valor;

    printf("=== Analise de Emprestimo Pessoal ===\n\n");
    printf("Digite a idade do cliente: ");
    if (scanf("%d", &idade) != 1) return 1;
    printf("Renda mensal (R$): ");
    if (scanf("%lf", &renda) != 1) return 1;
    printf("Valor solicitado (R$): ");
    if (scanf("%lf", &valor) != 1) return 1;

    if (idade < 0 || !isfinite(renda) || !isfinite(valor) || renda < 0 || valor <= 0) {
        printf("\n[ERRO] Informe idade e renda nao negativas e um valor positivo.\n\n");
        return 1;
    }

    printf("\n");
    if (idade < 18 || idade > 70 || renda < 2000.00) {
        printf("Emprestimo negado.\n\n");
    } else if (valor / 10.0 > renda) {
        printf("Valor acima do limite permitido.\n\n");
    } else {
        printf("Emprestimo aprovado!\n\n");
    }

    system("PAUSE");
    return 0;
}
