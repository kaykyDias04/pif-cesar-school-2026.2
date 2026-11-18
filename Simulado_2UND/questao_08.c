#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int somaDigitos(int n);
long potencia(int base, int exp);

int main(void) {
    int numero, base, exp;
    long resultado;

    printf("=== Soma de Digitos e Potencia Recursivas ===\n\n");
    printf("Digite um inteiro para somar os algarismos: ");
    if (scanf("%d", &numero) != 1) return 1;
    printf("Digite a base e o expoente inteiro nao negativo: ");
    if (scanf("%d %d", &base, &exp) != 2) return 1;
    if (exp < 0) {
        printf("\n[ERRO] O expoente nao pode ser negativo.\n\n");
        return 1;
    }

    resultado = potencia(base, exp);
    printf("\nSoma dos digitos de %d: %d\n", numero, somaDigitos(numero));
    printf("%d elevado a %d: %ld\n\n", base, exp, resultado);

    system("PAUSE");
    return 0;
}

int somaDigitos(int n) {
    int digito;
    if (n == 0) return 0;
    digito = n % 10;
    if (digito < 0) digito = -digito;
    return digito + somaDigitos(n / 10);
}

long potencia(int base, int exp) {
    long metade, resultado;
    if (exp == 0) return 1;
    metade = potencia(base, exp / 2);

    /* Conferimos o limite antes de multiplicar para nao estourar o tipo long. */
    if ((metade > 0 && metade > LONG_MAX / metade) ||
        (metade < 0 && metade < LONG_MAX / metade)) {
        printf("\n[ERRO] A potencia nao cabe no tipo long.\n");
        exit(EXIT_FAILURE);
    }
    resultado = metade * metade;
    if (exp % 2 != 0) {
        if (resultado != 0 && ((base > 0 && resultado > LONG_MAX / base) ||
                              (base < 0 && base < LONG_MIN / resultado))) {
            printf("\n[ERRO] A potencia nao cabe no tipo long.\n");
            exit(EXIT_FAILURE);
        }
        resultado *= base;
    }
    return resultado;
}
