#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int idade, tempo_servico;

    printf("=== Verificacao de Elegibilidade para Aposentadoria ===\n\n");
    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);
    printf("Digite o tempo de servico (em anos): ");
    scanf("%d", &tempo_servico);

    if (idade < 0 || tempo_servico < 0) {
        printf("\n[ERRO] Idade e tempo de servico devem ser valores positivos!\n\n");
    } else {
        printf("\n--- Situacao Previdenciaria ---\n");
        if (idade >= 65 || tempo_servico >= 30 || (idade >= 60 && tempo_servico >= 25)) {
            printf("Status: O trabalhador PODE se aposentar.\n");
        } else {
            printf("Status: O trabalhador NAO PODE se aposentar.\n");
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
