#include <stdio.h>
#include <stdlib.h>

typedef enum { PENDENTE, PAGO, ENTREGUE } Status;

typedef struct {
    int codigo;
    float valor;
    Status status;
} Pedido;

int main(void) {
    Pedido pedidos[6];
    int i, j, status, codigo, encontrado = -1;
    int quantidades[3] = {0};
    float totais[3] = {0.0f};
    const char *nomes_status[3] = {"PENDENTE", "PAGO", "ENTREGUE"};

    printf("=== Pedidos e Status ===\n\n");
    printf("Status: 0 - PENDENTE | 1 - PAGO | 2 - ENTREGUE\n\n");
    for (i = 0; i < 6; i++) {
        printf("Pedido %d - codigo, valor e status: ", i + 1);
        if (scanf("%d %f %d", &pedidos[i].codigo, &pedidos[i].valor, &status) != 3 ||
            pedidos[i].valor < 0 || status < PENDENTE || status > ENTREGUE) {
            printf("[ERRO] Valor ou status invalido.\n");
            return 1;
        }
        for (j = 0; j < i; j++) {
            if (pedidos[j].codigo == pedidos[i].codigo) {
                printf("[ERRO] Cada pedido precisa de um codigo diferente.\n");
                return 1;
            }
        }
        pedidos[i].status = (Status)status;
    }

    printf("\nDigite o codigo do pedido que deseja atualizar: ");
    if (scanf("%d", &codigo) != 1) return 1;
    for (i = 0; i < 6; i++) {
        if (pedidos[i].codigo == codigo) encontrado = i;
    }
    if (encontrado == -1) {
        printf("Pedido nao encontrado. Nenhum status foi alterado.\n");
    } else {
        printf("Novo status (0, 1 ou 2): ");
        if (scanf("%d", &status) != 1 || status < PENDENTE || status > ENTREGUE) {
            printf("[ERRO] Status invalido.\n");
            return 1;
        }
        pedidos[encontrado].status = (Status)status;
        printf("Status atualizado.\n");
    }

    for (i = 0; i < 6; i++) {
        quantidades[pedidos[i].status]++;
        totais[pedidos[i].status] += pedidos[i].valor;
    }
    printf("\n--- Resumo por Status ---\n");
    for (i = PENDENTE; i <= ENTREGUE; i++) {
        printf("%s: %d pedido(s) - R$ %.2f\n", nomes_status[i], quantidades[i], totais[i]);
    }
    printf("\n");

    system("PAUSE");
    return 0;
}
