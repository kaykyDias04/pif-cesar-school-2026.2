#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    double a, b, c;
    double p, area;

    printf("=== Geometria do Triangulo e Formula de Heron ===\n\n");
    printf("Digite o comprimento do lado A: ");
    scanf("%lf", &a);
    printf("Digite o comprimento do lado B: ");
    scanf("%lf", &b);
    printf("Digite o comprimento do lado C: ");
    scanf("%lf", &c);

    if (a <= 0.0 || b <= 0.0 || c <= 0.0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("\n[ERRO] Os valores informados nao formam um triangulo valido.\n\n");
    } else {
        p = (a + b + c) / 2.0;
        area = sqrt(p * (p - a) * (p - b) * (p - c));

        printf("\nResultados:\n");
        printf("Semiperimetro (p): %.4lf\n", p);
        printf("Area do triangulo: %.4lf\n\n", area);
    }

    system("PAUSE");
    return 0;
}
