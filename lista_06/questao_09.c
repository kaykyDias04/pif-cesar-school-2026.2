#include <stdio.h>
#include <stdlib.h>

void lerNotas(float m[][4], int alunos);
float mediaAluno(float m[][4], int aluno);
float mediaProva(float m[][4], int alunos, int prova);

int main(void) {
    float notas[5][4];
    int i;

    printf("=== Notas por Aluno e por Prova ===\n\n");
    lerNotas(notas, 5);

    printf("\n--- Media de Cada Aluno ---\n");
    for (i = 0; i < 5; i++) {
        printf("Aluno %d: %.2f\n", i + 1, mediaAluno(notas, i));
    }
    printf("\n--- Media de Cada Prova ---\n");
    for (i = 0; i < 4; i++) {
        printf("Prova %d: %.2f\n", i + 1, mediaProva(notas, 5, i));
    }
    printf("\n");

    system("PAUSE");
    return 0;
}

void lerNotas(float m[][4], int alunos) {
    int i, j;
    for (i = 0; i < alunos; i++) {
        for (j = 0; j < 4; j++) {
            printf("Nota do aluno %d na prova %d: ", i + 1, j + 1);
            if (scanf("%f", &m[i][j]) != 1) {
                printf("[ERRO] Digite uma nota numerica.\n");
                exit(EXIT_FAILURE);
            }
        }
    }
}

float mediaAluno(float m[][4], int aluno) {
    float soma = 0.0f;
    int j;
    for (j = 0; j < 4; j++) soma += m[aluno][j];
    return soma / 4;
}

float mediaProva(float m[][4], int alunos, int prova) {
    float soma = 0.0f;
    int i;
    for (i = 0; i < alunos; i++) soma += m[i][prova];
    return soma / alunos;
}
