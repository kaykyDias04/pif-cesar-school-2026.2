#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int dia;

    printf("=== Dia da Semana com switch-case ===\n\n");
    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    printf("\nResultado: ");
    switch (dia) {
        case 1:
            printf("Domingo\n\n");
            break;
        case 2:
            printf("Segunda-feira\n\n");
            break;
        case 3:
            printf("Terca-feira\n\n");
            break;
        case 4:
            printf("Quarta-feira\n\n");
            break;
        case 5:
            printf("Quinta-feira\n\n");
            break;
        case 6:
            printf("Sexta-feira\n\n");
            break;
        case 7:
            printf("Sabado\n\n");
            break;
        default:
            printf("Erro: Opcao Invalida!\n\n");
            break;
    }

    system("PAUSE");
    return 0;
}
