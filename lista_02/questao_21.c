#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char caractere;

    printf("=== Caractere e Codigo ASCII ===\n\n");
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    printf("\nCaractere digitado: '%c'\n", caractere);
    printf("Codigo ASCII correspondente: %d\n", caractere);

    system("PAUSE");
    return 0;
}
