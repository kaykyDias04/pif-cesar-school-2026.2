#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

int main(void) {
    double r;
    double area, volume;

    printf("=== Calculos Geometricos da Esfera ===\n\n");
    printf("Digite o valor do raio R da esfera: ");
    scanf("%lf", &r);

    if (r < 0.0) {
        printf("\n[ERRO] O raio nao pode ser negativo.\n\n");
    } else {
        area = 4.0 * PI * pow(r, 2.0);
        volume = (4.0 / 3.0) * PI * pow(r, 3.0);

        printf("\nResultados para R = %.3lf:\n", r);
        printf("a) Area da superficie: %.3lf\n", area);
        printf("b) Volume da esfera:    %.3lf\n\n", volume);
    }

    system("PAUSE");
    return 0;
}
