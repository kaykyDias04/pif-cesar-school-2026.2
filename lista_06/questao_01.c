#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(void) {
    float notas[TAM], soma = 0.0f, media, maior, menor;
    int i, acima = 0;

    printf("=== Notas da Turma ===\n\n");
    for (i = 0; i < TAM; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        if (scanf("%f", &notas[i]) != 1) {
            printf("[ERRO] Digite uma nota numerica.\n");
            return 1;
        }
        soma += notas[i];
    }

    media = soma / TAM;
    maior = menor = notas[0];
    for (i = 0; i < TAM; i++) {
        if (notas[i] > maior) maior = notas[i];
        if (notas[i] < menor) menor = notas[i];
        if (notas[i] > media) acima++;
    }

    printf("\n--- Resultado da Turma ---\n");
    printf("Media: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("Alunos acima da media: %d\n\n", acima);

    system("PAUSE");
    return 0;
}
