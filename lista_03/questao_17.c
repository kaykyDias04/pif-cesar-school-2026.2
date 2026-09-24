#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float nota;
    float maior = 0.0f;
    float menor = 10.0f;
    float soma = 0.0f;
    int total_alunos = 0;

    printf("=== Estatisticas da Turma ===\n");
    printf("Digite as notas dos alunos (0.0 a 10.0) ou '-1.0' para encerrar:\n\n");

    while (1) {
        printf("Digite a nota do aluno %d: ", total_alunos + 1);
        scanf("%f", &nota);

        if (nota == -1.0f) {
            break;
        }

        if (nota < 0.0f || nota > 10.0f) {
            printf("[AVISO] Nota invalida! Digite uma nota entre 0.0 e 10.0 (ou -1.0 para sair).\n\n");
            continue;
        }

        if (total_alunos == 0) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) {
                maior = nota;
            }
            if (nota < menor) {
                menor = nota;
            }
        }

        soma += nota;
        total_alunos++;
    }

    printf("\n--- Relatorio Estatistico da Turma ---\n");
    if (total_alunos > 0) {
        float media = soma / (float)total_alunos;
        printf("a) Total de alunos avaliados: %d\n", total_alunos);
        printf("b) Maior nota da turma:       %.2f\n", maior);
        printf("c) Menor nota da turma:       %.2f\n", menor);
        printf("d) Media geral da turma:      %.2f\n\n", media);
    } else {
        printf("Nenhum dado de nota foi registrado.\n\n");
    }

    system("PAUSE");
    return 0;
}
