#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, b, c;
    int temp;

    printf("=== Ordenacao Crescente de Tres Numeros Inteiros ===\n\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    /* Ordenação utilizando estruturas condicionais de troca (sem vetores) */
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("\nValores em ordem crescente: %d, %d, %d\n\n", a, b, c);

    system("PAUSE");
    return 0;
}
