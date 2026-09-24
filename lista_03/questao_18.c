#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long int numero, temp, invertido = 0;
    int digito;

    printf("=== Inversao de Digitos de um Numero Inteiro ===\n\n");
    printf("Digite um numero inteiro positivo: ");
    scanf("%lld", &numero);

    if (numero <= 0) {
        printf("\n[ERRO] Por favor, informe um numero inteiro estritamente positivo (> 0).\n\n");
    } else {
        temp = numero;

        while (temp > 0) {
            digito = temp % 10;
            invertido = invertido * 10 + digito;
            temp /= 10;
        }

        printf("\nNumero original: %lld\n", numero);
        printf("Numero invertido: %lld\n\n", invertido);
    }

    system("PAUSE");
    return 0;
}
