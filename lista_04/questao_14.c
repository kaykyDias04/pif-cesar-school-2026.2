#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float nota;
    int faltas;
    char conceito;

    printf("=== Matriz de Classificacao de Conceito por Nota e Faltas ===\n\n");
    printf("Digite a nota final do aluno (0.0 a 10.0): ");
    scanf("%f", &nota);
    printf("Digite a quantidade de faltas: ");
    scanf("%d", &faltas);

    if (nota < 0.0f || nota > 10.0f || faltas < 0) {
        printf("\n[ERRO] Valores invalidos informados para nota ou faltas!\n\n");
    } else {
        if (nota >= 9.0f) {
            conceito = (faltas <= 20) ? 'A' : 'B';
        } else if (nota >= 7.5f) {
            conceito = (faltas <= 20) ? 'B' : 'C';
        } else if (nota >= 5.0f) {
            conceito = (faltas <= 20) ? 'C' : 'D';
        } else if (nota >= 4.0f) {
            conceito = (faltas <= 20) ? 'D' : 'E';
        } else {
            conceito = 'E';
        }

        printf("\n--- Resultado ---\n");
        printf("Nota: %.2f | Faltas: %d\n", nota, faltas);
        printf("Conceito atribuido: %c\n\n", conceito);
    }

    system("PAUSE");
    return 0;
}
