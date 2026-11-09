#include <stdio.h>
#include <stdlib.h>

/* Prototipo da funcao recursiva declarado antes da main() */
long potencia(int base, int expoente);

int main(void) {
    int base, expoente;
    long resultado;

    printf("=== Calculo de Potencia com Funcao Recursiva ===\n\n");
    printf("Digite o valor da base (inteiro): ");
    scanf("%d", &base);

    printf("Digite o valor do expoente (inteiro nao negativo): ");
    scanf("%d", &expoente);

    /* Validacao com if exigida pelo enunciado */
    if (expoente < 0) {
        printf("\n[ERRO] O expoente deve ser um numero inteiro nao negativo (>= 0)!\n\n");
    } else {
        resultado = potencia(base, expoente);
        printf("\nResultado: %d elevado a %d = %ld\n\n", base, expoente, resultado);
    }

    system("PAUSE");
    return 0;
}

/* Implementacao recursiva da potencia */
long potencia(int base, int expoente) {
    /*
     * CASO BASE:
     * Qualquer numero elevado a zero e igual a 1 (base^0 = 1).
     * Essa condicao interrompe a recursao.
     */
    if (expoente == 0) {
        return 1;
    }

    /*
     * PASSO RECURSIVO:
     * base^expoente = base * base^(expoente - 1)
     * Reduz o expoente em 1 unidade a cada chamada.
     */
    return (long)base * potencia(base, expoente - 1);
}
