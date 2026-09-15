#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numero;

    printf("=== Antecessor e Sucessor ===\n\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("\nNumero informado: %d\n", numero);

    --numero;
    printf("Antecessor: %d\n", numero);

    ++numero;
    ++numero;
    printf("Sucessor:   %d\n", numero);

    system("PAUSE");
    return 0;
}
