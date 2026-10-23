#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int ano;

    printf("=== Verificacao de Ano Bissexto ===\n\n");
    printf("Digite um ano (inteiro positivo): ");
    scanf("%d", &ano);

    if (ano <= 0) {
        printf("\n[ERRO] O ano deve ser um numero inteiro positivo!\n\n");
    } else {
        if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
            printf("\nO ano %d E BISSEXTO.\n\n", ano);
        } else {
            printf("\nO ano %d NAO E BISSEXTO.\n\n", ano);
        }
    }

    system("PAUSE");
    return 0;
}
