#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float lado;
    float base_ret, altura_ret;
    float base_tri, altura_tri;
    float area_quadrado, area_retangulo, area_triangulo;

    printf("=== Calculo de Areas de Figuras Planas ===\n\n");

    printf("--- Quadrado ---\n");
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    area_quadrado = lado * lado;
    printf("Area do quadrado: %.2f\n\n", area_quadrado);

    printf("--- Retangulo ---\n");
    printf("Digite a base do retangulo: ");
    scanf("%f", &base_ret);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura_ret);
    area_retangulo = base_ret * altura_ret;
    printf("Area do retangulo: %.2f\n\n", area_retangulo);

    printf("--- Triangulo Retangulo ---\n");
    printf("Digite a base do triangulo: ");
    scanf("%f", &base_tri);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura_tri);
    area_triangulo = (base_tri * altura_tri) / 2.0;
    printf("Area do triangulo retangulo: %.2f\n\n", area_triangulo);

    system("PAUSE");
    return 0;
}
