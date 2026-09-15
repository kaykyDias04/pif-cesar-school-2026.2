#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    double cateto_a, cateto_b;
    double hipotenusa;

    printf("=== Teorema de Pitagoras ===\n\n");
    printf("Digite o valor do cateto a: ");
    scanf("%lf", &cateto_a);
    printf("Digite o valor do cateto b: ");
    scanf("%lf", &cateto_b);

    hipotenusa = sqrt(cateto_a * cateto_a + cateto_b * cateto_b);

    printf("\nCateto a:    %.4f\n", cateto_a);
    printf("Cateto b:    %.4f\n", cateto_b);
    printf("Hipotenusa:  %.4f\n", hipotenusa);

    system("PAUSE");
    return 0;
}
