#include <stdio.h>
#include <stdlib.h>

/* Prototipos dos procedimentos recursivos declarados antes da main() */
void contagem(int n);
void contagemCrescente(int n);

int main(void) {
    int n;

    printf("=== Contagens Recursivas: Regressiva e Crescente ===\n\n");
    printf("Digite um numero inteiro positivo para a contagem: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("\n[ERRO] O numero informado deve ser estritamente positivo (> 0)!\n\n");
    } else {
        printf("\n--- 1. Contagem Regressiva (de %d ate 1) ---\n", n);
        contagem(n);

        printf("\n--- 2. Contagem Crescente (de 1 ate %d) ---\n", n);
        contagemCrescente(n);
        printf("\n");
    }

    system("PAUSE");
    return 0;
}

/*
 * VERSAO 1: Contagem Regressiva (n ate 1)
 * Nesta versao, a impressao (printf) ocorre ANTES da chamada recursiva.
 * Isso significa que cada numero e impresso durante a fase de EMPILHAMENTO (descida).
 * O numero n e impresso de imediato, e logo depois chamamos a funcao para n - 1.
 * Quando o caso base (n == 0) e alcancado, imprime-se "Fogo!".
 */
void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }

    printf("%d... ", n);
    contagem(n - 1);
}

/*
 * VERSAO 2: Contagem Crescente (1 ate n)
 * Nesta versao, a chamada recursiva ocorre ANTES da instrucao de impressao (printf).
 * Isso faz com que as chamadas continuem empilhando ate atingir o caso base (n == 0)
 * sem imprimir nada. Quando o caso base retorna, inicia-se a fase de DESEMPILHAMENTO
 * (subida). O frame de n = 1 e o primeiro a ser desempilhado e executa seu printf,
 * seguido por n = 2, n = 3, ate o valor original n.
 *
 * EXPLICACAO DA MUDANCA NA POSICAO:
 * - printf ANTES da recursao: executa na IDA (ordem natural de chegada: n, n-1, ..., 1).
 * - printf DEPOIS da recursao: executa na VOLTA (ordem inversa de retorno: 1, 2, ..., n).
 */
void contagemCrescente(int n) {
    if (n == 0) {
        return;
    }

    contagemCrescente(n - 1);
    printf("%d ", n);
}
