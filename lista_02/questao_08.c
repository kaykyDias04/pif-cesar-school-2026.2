#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numero;
    int quadrado;
    float decima_parte;

    printf("=== Quadrado e Decima Parte ===\n\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    quadrado = numero * numero;
    decima_parte = (float) numero / 10;

    printf("\na) Quadrado de %d: %d\n", numero, quadrado);
    printf("b) Decima parte de %d: %.2f\n", numero, decima_parte);

    system("PAUSE");
    return 0;
}
