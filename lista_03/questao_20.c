#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;
    int colunas = 0;

    printf("=== Tabela de Caracteres ASCII Imprimiveis (32 a 126) ===\n\n");
    printf("%-20s %-20s %-20s\n", 
           "Dec  Hex  Char", "Dec  Hex  Char", "Dec  Hex  Char");
    printf("------------------------------------------------------------\n");

    for (i = 32; i <= 126; i++) {
        if (i == 32) {
            printf("%3d  0x%02X  ' ' (espaco)  ", i, i);
        } else {
            printf("%3d  0x%02X     '%c'       ", i, i, (char)i);
        }

        colunas++;
        if (colunas % 3 == 0) {
            printf("\n");
        }
    }

    printf("\n\n------------------------------------------------------------\n\n");

    system("PAUSE");
    return 0;
}
