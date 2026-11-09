#include <stdio.h>
#include <stdlib.h>

/* Prototipo da funcao recursiva declarado antes da main() */
int somaDigitos(int n);

int main(void) {
    int numero, resultado;

    printf("=== Soma dos Digitos de um Inteiro (Recursao) ===\n\n");
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("\n[ERRO] O numero informado deve ser positivo!\n\n");
    } else {
        resultado = somaDigitos(numero);
        printf("\nA soma dos digitos de %d resulta em: %d\n\n", numero, resultado);
    }

    system("PAUSE");
    return 0;
}

/* Implementacao recursiva da soma dos digitos */
int somaDigitos(int n) {
    /*
     * CASO BASE:
     * Quando o numero possui apenas um unico digito (0 a 9),
     * a soma dos seus digitos e o proprio numero.
     */
    if (n < 10) {
        return n;
    }

    /*
     * PASSO RECURSIVO:
     * O operador % 10 isola o ultimo digito da direita.
     * O operador / 10 remove o ultimo digito, reduzindo o problema.
     * Retorna o ultimo digito somado ao resultado recursivo do restante do numero.
     */
    return (n % 10) + somaDigitos(n / 10);
}
