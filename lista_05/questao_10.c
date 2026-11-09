#include <stdio.h>
#include <stdlib.h>

/* Definicao da constante PI com a diretiva #define */
#define PI 3.14159265f

/* Prototipo da funcao declarado antes da main() */
float area(float r);

int main(void) {
    float raio, area_calculada;

    printf("=== Calculo da Area da Esfera ===\n\n");
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    if (raio < 0.0f) {
        printf("\n[ERRO] O raio nao pode ser um valor negativo!\n\n");
    } else {
        area_calculada = area(raio);
        printf("\nRaio informado: %.2f\n", raio);
        printf("Area da superficie da esfera: %.4f\n\n", area_calculada);
    }

    system("PAUSE");
    return 0;
}

/* Implementacao da funcao area */
float area(float r) {
    return 4.0f * PI * r * r;
}
