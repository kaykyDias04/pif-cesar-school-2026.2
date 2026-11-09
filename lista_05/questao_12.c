#include <stdio.h>
#include <stdlib.h>

/* Prototipo do procedimento declarado antes da main() */
void exibeMenu(void);

int main(void) {
    int opcao;

    exibeMenu();
    printf("Digite o numero da opcao desejada: ");
    scanf("%d", &opcao);

    printf("\n-----------------------------------------\n");
    switch (opcao) {
        case 1:
            printf("Opcao selecionada: [1 - Cadastrar]\n");
            printf("Iniciando o modulo de cadastro de dados...\n");
            break;

        case 2:
            printf("Opcao selecionada: [2 - Listar]\n");
            printf("Consultando e exibindo a listagem de registros...\n");
            break;

        case 3:
            printf("Opcao selecionada: [3 - Remover]\n");
            printf("Acessando a rotina de exclusao de registros...\n");
            break;

        case 0:
            printf("Opcao selecionada: [0 - Sair]\n");
            printf("Encerrando o programa. Ate logo!\n");
            break;

        default:
            printf("[ERRO] Opcao invalida (%d)! Escolha entre 0, 1, 2 ou 3.\n", opcao);
            break;
    }
    printf("-----------------------------------------\n\n");

    system("PAUSE");
    return 0;
}

/* Implementacao do procedimento exibeMenu */
void exibeMenu(void) {
    printf("=========================================\n");
    printf("             MENU PRINCIPAL              \n");
    printf("=========================================\n");
    printf("  1 - Cadastrar\n");
    printf("  2 - Listar\n");
    printf("  3 - Remover\n");
    printf("  0 - Sair\n");
    printf("-----------------------------------------\n");
}
