#include <stdio.h>
#include <stdlib.h>

/* Prototipos da funcao e do procedimento declarados antes da main() */
float mediaPonderada(float n1, float n2, float n3);
void exibeSituacao(float media);

int main(void) {
    float nota1, nota2, nota3;
    float media_final;

    printf("=== Calculo de Media Ponderada e Situacao do Aluno ===\n");
    printf("Pesos aplicados: Nota 1 (peso 2), Nota 2 (peso 3), Nota 3 (peso 5)\n\n");

    printf("Digite a primeira nota (0.0 a 10.0): ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota (0.0 a 10.0): ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota (0.0 a 10.0): ");
    scanf("%f", &nota3);

    if (nota1 < 0.0f || nota1 > 10.0f ||
        nota2 < 0.0f || nota2 > 10.0f ||
        nota3 < 0.0f || nota3 > 10.0f) {
        printf("\n[AVISO] Uma ou mais notas foram digitadas fora do intervalo padrao (0 a 10).\n");
    }

    /* Chamada da funcao para calcular a media */
    media_final = mediaPonderada(nota1, nota2, nota3);

    printf("\n-----------------------------------------\n");
    printf("Media Ponderada Final: %.2f\n", media_final);
    printf("Situacao Academica:    ");

    /* Chamada do procedimento para exibir a situacao */
    exibeSituacao(media_final);
    printf("-----------------------------------------\n\n");

    system("PAUSE");
    return 0;
}

/* Implementacao da funcao mediaPonderada */
float mediaPonderada(float n1, float n2, float n3) {
    return (n1 * 2.0f + n2 * 3.0f + n3 * 5.0f) / (2.0f + 3.0f + 5.0f);
}

/* Implementacao do procedimento exibeSituacao */
void exibeSituacao(float media) {
    if (media >= 5.0f) {
        printf("Aprovado\n");
    } else if (media >= 3.0f && media <= 4.9f) {
        printf("Em Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }
}
