#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    char nome[100];
    int codigo;
    float salario;
} Funcionario;

int main(void) {
    Funcionario funcionarios[4];
    double total = 0.0, media, reajustado;
    int i, maior = 0, fim, abaixo = 0;

    printf("=== Cadastro de Funcionarios ===\n\n");
    for (i = 0; i < 4; i++) {
        printf("Nome do funcionario %d (ate 99 caracteres): ", i + 1);
        if (scanf(" %99[^\n]", funcionarios[i].nome) != 1) return 1;
        fim = getchar();
        if (fim != '\n' && fim != EOF) {
            printf("\n[ERRO] Nome muito longo.\n\n");
            return 1;
        }
        printf("Codigo: ");
        if (scanf("%d", &funcionarios[i].codigo) != 1) return 1;
        printf("Salario (R$): ");
        if (scanf("%f", &funcionarios[i].salario) != 1 ||
            !isfinite(funcionarios[i].salario) || funcionarios[i].salario < 0) {
            printf("\n[ERRO] O salario deve ser um numero finito nao negativo.\n\n");
            return 1;
        }
        total += funcionarios[i].salario;
        if (funcionarios[i].salario > funcionarios[maior].salario) maior = i;
    }

    media = total / 4;
    printf("\n--- Resumo Salarial ---\n");
    printf("Maior salario: %s (codigo %d) - R$ %.2f\n",
           funcionarios[maior].nome, funcionarios[maior].codigo, funcionarios[maior].salario);
    printf("Media salarial: R$ %.2f\n", media);
    printf("\n--- Reajuste de 10%% para Quem Ganha Abaixo da Media ---\n");
    for (i = 0; i < 4; i++) {
        if (funcionarios[i].salario < media) {
            reajustado = funcionarios[i].salario * 1.10;
            printf("%s (codigo %d): R$ %.2f -> R$ %.2f\n", funcionarios[i].nome,
                   funcionarios[i].codigo, funcionarios[i].salario, reajustado);
            abaixo++;
        }
    }
    if (abaixo == 0) printf("Nenhum funcionario recebe abaixo da media.\n");
    printf("\n");

    system("PAUSE");
    return 0;
}
