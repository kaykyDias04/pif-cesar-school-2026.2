#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int mes, ano, bissexto;

    printf("=== Quantidade de Dias de um Mes e Fevereiro Bissexto ===\n\n");
    printf("Digite o numero do mes (1 a 12): ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (mes < 1 || mes > 12) {
        printf("\n[ERRO] Mes invalido! O mes deve estar entre 1 e 12.\n\n");
    } else {
        bissexto = (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);

        printf("\n--- Informacoes do Mes ---\n");
        printf("Ano de referencia: %d (%s)\n", ano, bissexto ? "Bissexto" : "Nao bissexto");

        switch (mes) {
            case 1:
                printf("Mes: Janeiro | Quantidade de dias: 31 dias\n\n");
                break;
            case 2:
                if (bissexto) {
                    printf("Mes: Fevereiro | Quantidade de dias: 29 dias (Ano Bissexto)\n\n");
                } else {
                    printf("Mes: Fevereiro | Quantidade de dias: 28 dias\n\n");
                }
                break;
            case 3:
                printf("Mes: Marco | Quantidade de dias: 31 dias\n\n");
                break;
            case 4:
                printf("Mes: Abril | Quantidade de dias: 30 dias\n\n");
                break;
            case 5:
                printf("Mes: Maio | Quantidade de dias: 31 dias\n\n");
                break;
            case 6:
                printf("Mes: Junho | Quantidade de dias: 30 dias\n\n");
                break;
            case 7:
                printf("Mes: Julho | Quantidade de dias: 31 dias\n\n");
                break;
            case 8:
                printf("Mes: Agosto | Quantidade de dias: 31 dias\n\n");
                break;
            case 9:
                printf("Mes: Setembro | Quantidade de dias: 30 dias\n\n");
                break;
            case 10:
                printf("Mes: Outubro | Quantidade de dias: 31 dias\n\n");
                break;
            case 11:
                printf("Mes: Novembro | Quantidade de dias: 30 dias\n\n");
                break;
            case 12:
                printf("Mes: Dezembro | Quantidade de dias: 31 dias\n\n");
                break;
            default:
                break;
        }
    }

    system("PAUSE");
    return 0;
}
