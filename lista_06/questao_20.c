#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    int matricula;
    float nota1, nota2;
} Aluno;

int main(void) {
    Aluno aluno;
    float media;
    int fim;

    printf("=== Cadastro de Aluno ===\n\n");
    printf("Nome do aluno (ate 99 caracteres): ");
    if (scanf(" %99[^\n]", aluno.nome) != 1) return 1;
    fim = getchar();
    if (fim != '\n' && fim != EOF) {
        printf("[ERRO] Nome muito longo.\n");
        return 1;
    }
    printf("Matricula: ");
    if (scanf("%d", &aluno.matricula) != 1) return 1;
    printf("Digite as duas notas: ");
    if (scanf("%f %f", &aluno.nota1, &aluno.nota2) != 2) return 1;

    media = (aluno.nota1 + aluno.nota2) / 2;
    printf("\nAluno: %s\nMatricula: %d\n", aluno.nome, aluno.matricula);
    printf("Media: %.2f\n", media);
    if (media >= 7.0f) {
        printf("Situacao: Aprovado\n\n");
    } else if (media >= 4.0f) {
        printf("Situacao: Final\n\n");
    } else {
        printf("Situacao: Reprovado\n\n");
    }

    system("PAUSE");
    return 0;
}
