#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float nota_lab, nota_semestral, nota_exame, media;

    printf("=== Calculo de Media Ponderada e Situacao Academica ===\n\n");
    printf("Digite a nota do Trabalho de Laboratorio (peso 2): ");
    scanf("%f", &nota_lab);
    printf("Digite a nota da Avaliacao Semestral (peso 3): ");
    scanf("%f", &nota_semestral);
    printf("Digite a nota do Exame Final (peso 5): ");
    scanf("%f", &nota_exame);

    media = (nota_lab * 2.0f + nota_semestral * 3.0f + nota_exame * 5.0f) / 10.0f;

    printf("\nMedia Ponderada: %.2f\n", media);
    printf("Situacao: ");

    if (media >= 5.0f) {
        printf("Aprovado\n\n");
    } else if (media >= 3.0f) {
        printf("Em Recuperação\n\n");
    } else {
        printf("Reprovado\n\n");
    }

    system("PAUSE");
    return 0;
}
