#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int dia, mes, ano;

    printf("=== Inversao de Formato de Data ===\n\n");
    printf("Digite uma data no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("\nFormato original:  %02d/%02d/%04d\n", dia, mes, ano);
    printf("Formato invertido: %04d/%02d/%02d\n", ano, mes, dia);

    system("PAUSE");
    return 0;
}
