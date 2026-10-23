#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int idade;

    printf("=== Classificacao de Faixa Etaria com else-if ===\n\n");
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 60) {
        printf("Idoso\n");
    } else if (idade >= 18) {
        printf("Adulto\n");
    } else if (idade >= 12) {
        printf("Jovem\n");
    } else {
        printf("Criança\n");
    }

    system("PAUSE");
    return 0;
}
