#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int ocup[3][2][4], bloco, andar, apartamento, total_bloco, total_geral = 0;

    printf("=== Ocupacao do Condominio ===\n\n");
    for (bloco = 0; bloco < 3; bloco++) {
        for (andar = 0; andar < 2; andar++) {
            for (apartamento = 0; apartamento < 4; apartamento++) {
                printf("Moradores do bloco %d, andar %d, apartamento %d: ",
                       bloco + 1, andar + 1, apartamento + 1);
                if (scanf("%d", &ocup[bloco][andar][apartamento]) != 1 ||
                    ocup[bloco][andar][apartamento] < 0) {
                    printf("[ERRO] Informe uma quantidade de moradores nao negativa.\n");
                    return 1;
                }
            }
        }
    }

    printf("\n--- Total de Moradores ---\n");
    for (bloco = 0; bloco < 3; bloco++) {
        total_bloco = 0;
        for (andar = 0; andar < 2; andar++) {
            for (apartamento = 0; apartamento < 4; apartamento++) {
                total_bloco += ocup[bloco][andar][apartamento];
            }
        }
        printf("Bloco %d: %d moradores\n", bloco + 1, total_bloco);
        total_geral += total_bloco;
    }
    printf("Total do condominio: %d moradores\n\n", total_geral);

    system("PAUSE");
    return 0;
}
