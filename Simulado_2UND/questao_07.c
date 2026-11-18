#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int n);

int main(void) {
    int n, i;

    printf("=== Numeros Primos com Funcao ===\n\n");
    printf("Digite um inteiro N positivo: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("\n[ERRO] N precisa ser um inteiro positivo.\n\n");
        return 1;
    }

    printf("\nNumeros primos de 1 ate %d:\n", n);
    for (i = 2; i < n; i++) {
        if (ehPrimo(i)) printf("%d ", i);
    }
    if (ehPrimo(n)) printf("%d ", n);
    if (n == 1) printf("Nao ha numeros primos nesse intervalo.");
    printf("\n\n");

    system("PAUSE");
    return 0;
}

int ehPrimo(int n) {
    int divisor;
    if (n < 2) return 0;
    /* n / divisor evita o estouro que poderia ocorrer em divisor * divisor. */
    for (divisor = 2; divisor <= n / divisor; divisor++) {
        if (n % divisor == 0) return 0;
    }
    return 1;
}
