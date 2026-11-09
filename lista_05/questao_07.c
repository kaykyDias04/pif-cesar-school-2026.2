#include <stdio.h>
#include <stdlib.h>

/* Prototipo da funcao declarado antes da main() */
int soma(int a, int b);

int main(void) {
    int num1, num2, resultado;

    printf("=== Soma de Dois Numeros Inteiros ===\n\n");
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    resultado = soma(num1, num2);

    printf("\nResultado da soma na main(): %d + %d = %d\n\n", num1, num2, resultado);

    system("PAUSE");
    return 0;
}

/* Implementacao da funcao soma */
int soma(int a, int b) {
    return a + b;
}
