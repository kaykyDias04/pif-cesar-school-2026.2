#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int ang1, ang2, ang3;
    int soma;

    printf("=== Classificacao de Triangulos pelos Angulos Internos ===\n\n");
    printf("Digite o primeiro angulo: ");
    scanf("%d", &ang1);
    printf("Digite o segundo angulo: ");
    scanf("%d", &ang2);
    printf("Digite o terceiro angulo: ");
    scanf("%d", &ang3);

    soma = ang1 + ang2 + ang3;

    if (ang1 <= 0 || ang2 <= 0 || ang3 <= 0 || soma != 180) {
        printf("\n[ERRO] Os angulos informados nao formam um triangulo valido!\n");
        printf("A soma dos angulos internos deve ser exatamente igual a 180 graus (Soma obtida = %d).\n\n", soma);
    } else {
        printf("\nTriangulo valido! Soma dos angulos = %d graus.\n", soma);
        printf("Classificacao: ");

        if (ang1 == 90 || ang2 == 90 || ang3 == 90) {
            printf("Retangulo (possui um angulo reto de 90 graus)\n\n");
        } else if (ang1 > 90 || ang2 > 90 || ang3 > 90) {
            printf("Obtusangulo (possui um angulo obtuso maior que 90 graus)\n\n");
        } else {
            printf("Acutangulo (todos os tres angulos sao agudos menores que 90 graus)\n\n");
        }
    }

    system("PAUSE");
    return 0;
}
