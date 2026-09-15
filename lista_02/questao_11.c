#include <stdio.h>
#include <stdlib.h>

#define PI 3.141593

int main(void) {
    double graus, radianos;

    printf("=== Conversor de Graus para Radianos ===\n\n");
    printf("Digite o valor do angulo em graus: ");
    scanf("%lf", &graus);

    radianos = graus * (PI / 180.0);

    printf("\n%.4f graus = %.6f radianos\n", graus, radianos);

    system("PAUSE");
    return 0;
}
