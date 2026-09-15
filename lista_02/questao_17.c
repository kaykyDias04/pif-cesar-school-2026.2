#include <stdio.h>
#include <stdlib.h>

#define PI 3.141593

int main(void) {
    double raio;
    double area, circunferencia;

    printf("=== Geometria do Circulo ===\n\n");
    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);

    area = PI * raio * raio;
    circunferencia = 2.0 * PI * raio;

    printf("\nRaio: %.4f\n", raio);
    printf("Area:           %.4f\n", area);
    printf("Circunferencia: %.4f\n", circunferencia);

    system("PAUSE");
    return 0;
}
