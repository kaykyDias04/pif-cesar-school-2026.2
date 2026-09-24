#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num, i;
    int contador = 0;

    printf("=== Filtragem: Multiplos Simultaneos de 3 e 5 ===\n\n");
    printf("Digite um numero limite inteiro positivo (NUM): ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("\n[ERRO] O numero digitado deve ser positivo maior que zero.\n\n");
    } else {
        printf("\nMultiplos de 3 e 5 simultaneamente no intervalo [1, %d]:\n", num);

        for (i = 1; i <= num; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                printf("%d ", i);
                contador++;
            }
        }

        if (contador == 0) {
            printf("Nenhum numero encontrado que satisfaca a condicao.");
        } else {
            printf("\nTotal de numeros encontrados: %d", contador);
        }
        printf("\n\n");
    }

    system("PAUSE");
    return 0;
}
