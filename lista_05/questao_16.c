#include <stdio.h>
#include <stdlib.h>

/* Prototipo da funcao declarado antes da main() */
int ehBissexto(int ano);

int main(void) {
    int ano;

    printf("=== Verificacao de Ano Bissexto com Funcao ===\n\n");
    printf("Digite o ano a ser verificado: ");
    scanf("%d", &ano);

    if (ano <= 0) {
        printf("\n[ERRO] O ano deve ser um valor inteiro positivo!\n\n");
    } else {
        if (ehBissexto(ano)) {
            printf("\nO ano %d E BISSEXTO (funcao retornou 1).\n", ano);
            printf("Regra: divisivel por 400, ou divisivel por 4 e nao por 100.\n\n");
        } else {
            printf("\nO ano %d NAO E BISSEXTO (funcao retornou 0).\n\n", ano);
        }
    }

    system("PAUSE");
    return 0;
}

/* Implementacao da funcao ehBissexto */
int ehBissexto(int ano) {
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        return 1;
    } else {
        return 0;
    }
}
