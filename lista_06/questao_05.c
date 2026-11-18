#include <stdio.h>
#include <stdlib.h>

int somaVetor(int v[], int n);
int maiorValor(int v[], int n);
int buscaValor(int v[], int n, int x);

int main(void) {
    int vetor[8], i, x, posicao;

    printf("=== Funcoes com Vetores ===\n\n");
    for (i = 0; i < 8; i++) {
        printf("Digite o valor da posicao %d: ", i);
        if (scanf("%d", &vetor[i]) != 1) return 1;
    }
    printf("\nQual valor deseja buscar? ");
    if (scanf("%d", &x) != 1) return 1;

    printf("\nSoma dos valores: %d\n", somaVetor(vetor, 8));
    printf("Maior valor: %d\n", maiorValor(vetor, 8));
    posicao = buscaValor(vetor, 8, x);
    if (posicao == -1) {
        printf("Valor nao encontrado (posicao -1).\n\n");
    } else {
        printf("Primeira ocorrencia na posicao %d.\n\n", posicao);
    }

    system("PAUSE");
    return 0;
}

int somaVetor(int v[], int n) {
    int i, soma = 0;
    for (i = 0; i < n; i++) {
        soma += v[i];
    }
    return soma;
}

int maiorValor(int v[], int n) {
    int i, maior = v[0];
    for (i = 1; i < n; i++) {
        if (v[i] > maior) maior = v[i];
    }
    return maior;
}

int buscaValor(int v[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (v[i] == x) return i;
    }
    return -1;
}
