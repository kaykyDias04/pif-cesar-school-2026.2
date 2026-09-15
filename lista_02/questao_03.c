#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numero;

    printf("=== Representacao em Multiplas Bases ===\n\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("\nValor em diferentes representacoes:\n");
    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n",
           numero, numero, numero, numero);

    system("PAUSE");
    return 0;
}
