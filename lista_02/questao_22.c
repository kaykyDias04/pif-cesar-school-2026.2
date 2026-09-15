#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char maiuscula, minuscula;

    printf("=== Conversor de Maiuscula para Minuscula (ASCII) ===\n\n");
    printf("Digite uma letra maiuscula (A-Z): ");
    scanf(" %c", &maiuscula);

    minuscula = maiuscula - 'A' + 'a';

    printf("\nLetra maiuscula: %c (ASCII: %d)\n", maiuscula, maiuscula);
    printf("Letra minuscula: %c (ASCII: %d)\n", minuscula, minuscula);
    printf("Deslocamento aplicado: %d posicoes\n", 'a' - 'A');

    system("PAUSE");
    return 0;
}
