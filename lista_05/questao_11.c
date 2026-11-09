#include <stdio.h>
#include <stdlib.h>

/* Prototipo da funcao declarado antes da main() */
int ehPar(int n);

int main(void) {
    int numero;

    printf("=== Verificacao de Numero Par ou Impar ===\n\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (ehPar(numero)) {
        printf("\nO numero %d e PAR (funcao retornou 1).\n\n", numero);
    } else {
        printf("\nO numero %d e IMPAR (funcao retornou 0).\n\n", numero);
    }

    system("PAUSE");
    return 0;
}

/* Implementacao da funcao ehPar */
int ehPar(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}
