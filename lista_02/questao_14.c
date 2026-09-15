#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    double a, b, c;
    double p;
    double area;

    printf("=== Formula de Heron - Area de Triangulo ===\n\n");
    printf("Digite o lado a: ");
    scanf("%lf", &a);
    printf("Digite o lado b: ");
    scanf("%lf", &b);
    printf("Digite o lado c: ");
    scanf("%lf", &c);

    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("\nLados do triangulo: a = %.2f, b = %.2f, c = %.2f\n", a, b, c);
    printf("Semi-perimetro (p): %.2f\n", p);
    printf("Area do triangulo:  %.4f\n", area);

    system("PAUSE");
    return 0;
}
