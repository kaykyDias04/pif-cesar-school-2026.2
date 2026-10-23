#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int dia, mes, ano;

    printf("=== Impressao de Data Por Extenso com switch-case ===\n\n");
    printf("Digite o dia, mes e ano separados por espaco (ex: 25 12 2026): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (mes < 1 || mes > 12 || dia < 1 || dia > 31) {
        printf("\n[ERRO] Data invalida! O mes deve estar entre 1 e 12 e o dia entre 1 e 31.\n\n");
    } else {
        printf("\nData formatada: '%02d de ", dia);

        switch (mes) {
            case 1:  printf("janeiro"); break;
            case 2:  printf("fevereiro"); break;
            case 3:  printf("marco"); break;
            case 4:  printf("abril"); break;
            case 5:  printf("maio"); break;
            case 6:  printf("junho"); break;
            case 7:  printf("julho"); break;
            case 8:  printf("agosto"); break;
            case 9:  printf("setembro"); break;
            case 10: printf("outubro"); break;
            case 11: printf("novembro"); break;
            case 12: printf("dezembro"); break;
            default: break;
        }

        printf(" de %d'\n\n", ano);
    }

    system("PAUSE");
    return 0;
}
