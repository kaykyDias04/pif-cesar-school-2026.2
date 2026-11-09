#include <stdio.h>
#include <stdlib.h>

/*
 * Definicao de macros utilitarias com parenteses de protecao:
 * Os parenteses protegem cada argumento individualmente e a expressao completa,
 * evitando problemas de precedencia de operadores quando expressoes sao passadas.
 */
#define SQR(x)      ((x) * (x))
#define MAX(a, b)   (((a) > (b)) ? (a) : (b))
#define MIN(a, b)   (((a) < (b)) ? (a) : (b))

int main(void) {
    int num1, num2;

    printf("=== Macros Utilitarias: SQR, MAX e MIN ===\n\n");
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("\n-----------------------------------------\n");
    printf("Valores informados: %d e %d\n", num1, num2);
    printf("Quadrado do primeiro (SQR(%d)): %d\n", num1, SQR(num1));
    printf("Quadrado do segundo  (SQR(%d)): %d\n", num2, SQR(num2));
    printf("Maior entre os dois  (MAX(%d, %d)): %d\n", num1, num2, MAX(num1, num2));
    printf("Menor entre os dois  (MIN(%d, %d)): %d\n", num1, num2, MIN(num1, num2));
    printf("-----------------------------------------\n\n");

    system("PAUSE");
    return 0;
}
