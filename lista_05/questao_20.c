#include <stdio.h>
#include <stdlib.h>

/* Prototipo da funcao declarado antes da main() */
int ehPrimo(int n);

int main(void) {
    int numero, i;

    printf("=== Verificacao de Numeros Primos ===\n\n");
    printf("Digite um numero inteiro para teste: ");
    scanf("%d", &numero);

    if (ehPrimo(numero)) {
        printf("\nO numero %d E PRIMO (funcao retornou 1).\n", numero);
    } else {
        printf("\nO numero %d NAO E PRIMO (funcao retornou 0).\n", numero);
    }

    printf("\n---------------------------------------------------\n");
    printf("Listagem de todos os numeros primos no intervalo [1, 50]:\n");
    printf("---------------------------------------------------\n");

    for (i = 1; i <= 50; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n---------------------------------------------------\n\n");

    system("PAUSE");
    return 0;
}

/* Implementacao da funcao ehPrimo utilizando laco de repeticao */
int ehPrimo(int n) {
    int i;

    /* Numeros menores ou iguais a 1 nao sao primos */
    if (n <= 1) {
        return 0;
    }

    /* Testa divisores de 2 ate a metade de n */
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; /* Encontrou divisor exato, portanto nao e primo */
        }
    }

    return 1; /* Nao possui divisores alem de 1 e dele mesmo */
}
