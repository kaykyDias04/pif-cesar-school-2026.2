#include <stdio.h>
#include <stdlib.h>

/* Prototipos das funcoes declarados antes da main() */
long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main(void) {
    int numero;
    long res_iterativo, res_recursivo;

    printf("=== Comparacao: Fatorial Iterativo vs Recursivo ===\n\n");
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("\n[ERRO] Nao e possivel calcular o fatorial de um numero negativo!\n\n");
    } else {
        res_iterativo = fatorialIterativo(numero);
        res_recursivo = fatorialRecursivo(numero);

        printf("\n---------------------------------------------------\n");
        printf("Fatorial Iterativo(%d): %ld\n", numero, res_iterativo);
        printf("Fatorial Recursivo(%d): %ld\n", numero, res_recursivo);
        printf("---------------------------------------------------\n");

        if (res_iterativo == res_recursivo) {
            printf("CONFIRMACAO: Ambos os metodos produziram exatamente o mesmo resultado!\n\n");
        } else {
            printf("[ERRO] Houve divergencia nos resultados!\n\n");
        }
    }

    system("PAUSE");
    return 0;
}

/* Implementacao com laco de repeticao (iterativa) */
long fatorialIterativo(int n) {
    long fat = 1;
    int i;

    for (i = 1; i <= n; i++) {
        fat *= i;
    }

    return fat;
}

/* Implementacao recursiva */
long fatorialRecursivo(int n) {
    /* Caso base */
    if (n <= 1) {
        return 1;
    }

    /* Passo recursivo */
    return (long)n * fatorialRecursivo(n - 1);
}
