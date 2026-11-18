#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int vendas[4][3], loja, produto, mais_vendido = 0;
    long long total_loja, totais_produtos[3] = {0};

    printf("=== Vendas por Loja e Produto ===\n\n");
    for (loja = 0; loja < 4; loja++) {
        for (produto = 0; produto < 3; produto++) {
            printf("Quantidade do produto %d na loja %d: ", produto + 1, loja + 1);
            if (scanf("%d", &vendas[loja][produto]) != 1 || vendas[loja][produto] < 0) {
                printf("\n[ERRO] A quantidade vendida nao pode ser negativa.\n\n");
                return 1;
            }
        }
    }

    printf("\n--- Total Vendido por Loja ---\n");
    for (loja = 0; loja < 4; loja++) {
        total_loja = 0;
        for (produto = 0; produto < 3; produto++) {
            total_loja += vendas[loja][produto];
            totais_produtos[produto] += vendas[loja][produto];
        }
        printf("Loja %d: %lld unidades\n", loja + 1, total_loja);
    }
    for (produto = 1; produto < 3; produto++) {
        if (totais_produtos[produto] > totais_produtos[mais_vendido]) {
            mais_vendido = produto;
        }
    }
    printf("\nProduto mais vendido: %d (%lld unidades na rede)\n\n",
           mais_vendido + 1, totais_produtos[mais_vendido]);

    system("PAUSE");
    return 0;
}
