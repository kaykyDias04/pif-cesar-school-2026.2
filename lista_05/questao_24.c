#include <stdio.h>
#include <stdlib.h>

/*
 * DIRETIVA DE DEPURACAO:
 * Descomente a linha abaixo para ativar o modo de depuracao (DEBUG).
 * Comente-a para compilar no modo de producao / normal.
 */
#define DEBUG

/* Prototipo da funcao declarado antes da main() */
int somaAteN(int n);

int main(void) {
    int n, total;

    printf("=== Soma de 1 ate N com Compilacao Condicional ===\n\n");

#ifdef DEBUG
    printf("[INFO COMPILACAO] Modo DEBUG ATIVADO. Logs detalhados serao exibidos.\n\n");
#else
    printf("[INFO COMPILACAO] Modo NORMAL/RELEASE. Logs de depuracao ocultados.\n\n");
#endif

    printf("Digite um valor inteiro positivo para N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("\n[ERRO] O valor de N deve ser positivo (> 0)!\n\n");
    } else {
        total = somaAteN(n);
        printf("\nResultado final da soma de 1 ate %d = %d\n\n", n, total);
    }

    system("PAUSE");
    return 0;
}

/*
 * DOCUMENTACAO DA DIFERENCA DE COMPORTAMENTO:
 *
 * 1. COM #define DEBUG definido:
 *    O pre-processador inclui o bloco contendo o printf dentro do laco.
 *    A cada volta da repeticao, uma mensagem e impressa no terminal informando
 *    o indice corrente da iteracao e o valor acumulado da soma parcial.
 *    Isso e util para rastrear erros, inspecionar estados internos e depurar.
 *
 * 2. SEM #define DEBUG (comentado ou omitido):
 *    O pre-processador remove completamente as linhas do printf antes da compilacao.
 *    O codigo executavel gerado fica mais enxuto, mais rapido e nao polui
 *    o terminal, exibindo apenas o resultado final na main().
 */
int somaAteN(int n) {
    int soma = 0;
    int i;

    for (i = 1; i <= n; i++) {
        soma += i;

#ifdef DEBUG
        printf("  [DEBUG] Iteracao i = %2d | Parcela somada = %2d | Soma parcial = %d\n", i, i, soma);
#endif
    }

    return soma;
}
