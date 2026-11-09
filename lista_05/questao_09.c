#include <stdio.h>
#include <stdlib.h>

/* Prototipo da funcao declarado antes da main() */
int maior(int a, int b);

int main(void) {
    int v1, v2, resultado_maior;

    printf("=== Maior entre Dois Numeros Inteiros ===\n\n");
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &v1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &v2);

    resultado_maior = maior(v1, v2);

    if (v1 == v2) {
        printf("\nOs dois numeros sao iguais: %d\n\n", v1);
    } else {
        printf("\nO maior numero entre %d e %d e: %d\n\n", v1, v2, resultado_maior);
    }

    system("PAUSE");
    return 0;
}

/* Implementacao da funcao maior */
int maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
