#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int opcao;

    printf("===========================================\n");
    printf("   SISTEMA DE ATENDIMENTO ELETRONICO (SAC)  \n");
    printf("              BANCO CESAR                  \n");
    printf("===========================================\n\n");
    printf("Bem-vindo(a) ao autoatendimento!\n");
    printf("Selecione uma das opcoes abaixo:\n\n");
    printf("  1 - Consultar Saldo\n");
    printf("  2 - Efetuar Extrato\n");
    printf("  3 - Fazer Transferencia\n");
    printf("  4 - Falar com Atendente\n\n");
    printf("Digite o numero da opcao desejada: ");
    scanf("%d", &opcao);

    printf("\n-------------------------------------------\n");
    switch (opcao) {
        case 1:
            printf("Direcionando para o modulo: [CONSULTA DE SALDO]\n");
            printf("Aguarde enquanto carregamos as informacoes da sua conta...\n");
            break;

        case 2:
            printf("Direcionando para o modulo: [EMISSAO DE EXTRATO]\n");
            printf("Gerando o extrato das suas ultimas movimentacoes bancarias...\n");
            break;

        case 3:
            printf("Direcionando para o modulo: [TRANSFERENCIA BANCARIA]\n");
            printf("Prepare os dados da conta de destino (chave PIX, TED ou DOC)...\n");
            break;

        case 4:
            printf("Direcionando para a fila de atendimento humano: [FALAR COM ATENDENTE]\n");
            printf("Por favor, aguarde na linha. Voce sera atendido(a) em instantes...\n");
            break;

        default:
            printf("[ERRO] Opcao invalida (%d)!\n", opcao);
            printf("Por favor, reinicie o atendimento e escolha uma opcao entre 1 e 4.\n");
            break;
    }
    printf("-------------------------------------------\n\n");

    system("PAUSE");
    return 0;
}
