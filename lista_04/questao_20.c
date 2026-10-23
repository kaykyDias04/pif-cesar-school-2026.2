#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    double a, b, c, delta, x1, x2;

    printf("=== Resolucao de Equacao do Segundo Grau (Bhaskara) ===\n\n");
    printf("Digite o coeficiente 'a': ");
    scanf("%lf", &a);
    printf("Digite o coeficiente 'b': ");
    scanf("%lf", &b);
    printf("Digite o coeficiente 'c': ");
    scanf("%lf", &c);

    if (a == 0.0) {
        printf("\n[ERRO] O coeficiente 'a' nao pode ser zero em uma equacao do 2o grau!\n\n");
    } else {
        delta = (b * b) - (4.0 * a * c);

        printf("\nDiscriminante (Delta) = %.4f\n", delta);

        if (delta < 0.0) {
            printf("A equacao nao possui raizes reais.\n\n");
        } else if (delta == 0.0) {
            x1 = -b / (2.0 * a);
            printf("Delta igual a zero: raiz unica real.\n");
            printf("x = %.4f\n\n", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2.0 * a);
            x2 = (-b - sqrt(delta)) / (2.0 * a);
            printf("Delta positivo: duas raizes reais distintas.\n");
            printf("x1 = %.4f\n", x1);
            printf("x2 = %.4f\n\n", x2);
        }
    }

    system("PAUSE");
    return 0;
}
