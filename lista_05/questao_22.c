#include <stdio.h>
#include <stdlib.h>
#include "areas.h"

int main(void) {
    float raio;
    float base_ret, alt_ret;
    float base_tri, alt_tri;

    printf("=== Biblioteca de Calculo de Areas via Header areas.h ===\n\n");

    /* 1. Area do Circulo */
    printf("--- 1. Circulo ---\n");
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    printf("Area do circulo (A_CIRC): %.4f\n\n", A_CIRC(raio));

    /* 2. Area do Retangulo */
    printf("--- 2. Retangulo ---\n");
    printf("Digite a base do retangulo: ");
    scanf("%f", &base_ret);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &alt_ret);
    printf("Area do retangulo (A_RET): %.4f\n\n", A_RET(base_ret, alt_ret));

    /* 3. Area do Triangulo */
    printf("--- 3. Triangulo ---\n");
    printf("Digite a base do triangulo: ");
    scanf("%f", &base_tri);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &alt_tri);
    printf("Area do triangulo (A_TRI): %.4f\n\n", A_TRI(base_tri, alt_tri));

    printf("---------------------------------------------------------\n");
    printf("Todas as areas foram calculadas usando as macros de areas.h\n\n");

    system("PAUSE");
    return 0;
}
