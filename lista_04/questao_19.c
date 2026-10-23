#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float a, b, c;

    printf("=== Validacao e Classificacao de Triangulos pelos Lados ===\n\n");
    printf("Digite o comprimento do lado A: ");
    scanf("%f", &a);
    printf("Digite o comprimento do lado B: ");
    scanf("%f", &b);
    printf("Digite o comprimento do lado C: ");
    scanf("%f", &c);

    /* Verificação de lados positivos e condição de existência */
    if (a > 0.0f && b > 0.0f && c > 0.0f &&
        (a < b + c) && (b < a + c) && (c < a + b)) {

        printf("\nOs lados formam um triangulo valido!\n");
        printf("Classificacao: ");

        if (a == b && b == c) {
            printf("Equilatero (todos os tres lados iguais)\n\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles (dois lados iguais)\n\n");
        } else {
            printf("Escaleno (todos os tres lados diferentes)\n\n");
        }

    } else {
        printf("\nErro: Os lados fornecidos nao formam um triangulo!\n\n");
    }

    system("PAUSE");
    return 0;
}
