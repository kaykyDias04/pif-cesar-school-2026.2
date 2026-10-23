#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    double numero;

    printf("=== Raiz Quadrada ou Quadrado de um Numero Real ===\n\n");
    printf("Digite um numero real: ");
    scanf("%lf", &numero);

    if (numero >= 0.0) {
        printf("\nO numero e positivo ou zero.\n");
        printf("Raiz quadrada de %.4f = %.4f\n\n", numero, sqrt(numero));
    } else {
        printf("\nO numero e negativo.\n");
        printf("Quadrado de %.4f = %.4f\n\n", numero, numero * numero);
    }

    system("PAUSE");
    return 0;
}
