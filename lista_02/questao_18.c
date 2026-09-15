#include <stdio.h>
#include <stdlib.h>

#define PI 3.141593

int main(void) {
    double raio;
    double area_superficie, volume;

    printf("=== Geometria da Esfera ===\n\n");
    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    area_superficie = 4.0 * PI * raio * raio;
    volume = (4.0 / 3.0) * PI * raio * raio * raio;

    printf("\nRaio da esfera: %.4f\n", raio);
    printf("Area de superficie: %.4f\n", area_superficie);
    printf("Volume:             %.4f\n", volume);

    system("PAUSE");
    return 0;
}
