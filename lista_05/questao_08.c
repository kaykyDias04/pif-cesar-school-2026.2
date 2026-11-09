#include <stdio.h>
#include <stdlib.h>

/* Prototipo da funcao declarado antes da main() */
float celsius(float fahr);

int main(void) {
    float fahrenheit, resultado_celsius;

    printf("=== Conversor de Fahrenheit para Celsius ===\n\n");
    printf("Digite a temperatura em graus Fahrenheit (F): ");
    scanf("%f", &fahrenheit);

    resultado_celsius = celsius(fahrenheit);

    printf("\nTemperatura em Fahrenheit: %.2f F\n", fahrenheit);
    printf("Temperatura convertida para Celsius: %.2f C\n\n", resultado_celsius);

    system("PAUSE");
    return 0;
}

/* Implementacao da funcao celsius */
float celsius(float fahr) {
    return (fahr - 32.0f) * 5.0f / 9.0f;
}
