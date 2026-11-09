#include <stdio.h>
#include <stdlib.h>

/*
 * Macro inicial SEM parenteses de protecao:
 * Sofre com precedencia de operadores quando expressoes sao passadas.
 */
#define DOBRO(x) x*2

/*
 * Macro CORRIGIDA com parenteses de protecao:
 * Garante que a expressao 'x' seja totalmente avaliada antes da multiplicacao.
 */
#define DOBRO_CORRIGIDO(x) ((x) * 2)

/* Prototipo da funcao declarado antes da main() */
int dobro(int x);

int main(void) {
    int res_macro, res_funcao, res_macro_corrigida;

    printf("=== Comparacao: Macro com Argumentos vs Funcao ===\n\n");

    /* Chamada da macro sem parenteses e da funcao com o argumento 2+3 */
    res_macro = DOBRO(2 + 3);
    res_funcao = dobro(2 + 3);

    printf("Chamada com o argumento (2 + 3):\n");
    printf("1. Resultado retornado pela macro DOBRO(2+3):     %d\n", res_macro);
    printf("2. Resultado retornado pela funcao dobro(2+3):     %d\n\n", res_funcao);

    /*
     * EXPLICACAO DO MOTIVO DA DIFERENCA:
     *
     * 1. Na funcao 'dobro(2+3)':
     *    O argumento e avaliado pelo compilador ANTES da chamada da funcao.
     *    Portanto, a expressao '2 + 3' resulta em 5, e o valor 5 e passado
     *    como parametro para a funcao. Dentro da funcao, executa-se '5 * 2 = 10'.
     *
     * 2. Na macro 'DOBRO(2+3)':
     *    O pre-processador apenas substitui textualmente o argumento 'x' por '2+3'.
     *    A expressao resultante no codigo antes de compilar fica:
     *        2 + 3 * 2
     *    Pelas regras de precedencia da linguagem C, a multiplicacao (*) tem
     *    prioridade sobre a soma (+). Logo, o compilador calcula primeiro '3 * 2 = 6'
     *    e depois '2 + 6 = 8'.
     */

    /* Teste com a macro corrigida usando parenteses de protecao */
    res_macro_corrigida = DOBRO_CORRIGIDO(2 + 3);
    printf("3. Resultado com a macro corrigida DOBRO_CORRIGIDO(2+3): %d\n", res_macro_corrigida);
    printf("   (A expansao foi ((2+3) * 2) = (5 * 2) = 10, corrigindo a precedencia).\n\n");

    system("PAUSE");
    return 0;
}

/* Implementacao da funcao dobro */
int dobro(int x) {
    return x * 2;
}
