#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double celsius, fahrenheit, kelvin;

    printf("=== Conversor de Temperatura ===\n\n");
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    kelvin = celsius + 273.15;

    printf("\n--- Resultados ---\n");
    printf("%.2f graus Celsius equivalem a:\n", celsius);
    printf("  Fahrenheit: %.2f F\n", fahrenheit);
    printf("  Kelvin:     %.2f K\n", kelvin);

    system("PAUSE");
    return 0;
}
