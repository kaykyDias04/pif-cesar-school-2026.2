#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int c;
    float f, k;

    printf("=== Tabela de Conversao de Temperaturas ===\n\n");
    printf("--------------------------------------------\n");
    printf("|  Celsius (C)  | Fahrenheit (F) | Kelvin (K) |\n");
    printf("--------------------------------------------\n");

    for (c = 0; c <= 100; c += 5) {
        f = (9.0f * (float)c) / 5.0f + 32.0f;
        k = (float)c + 273.15f;

        printf("|    %6.2f     |     %7.2f    |   %7.2f  |\n", (float)c, f, k);
    }

    printf("--------------------------------------------\n\n");

    system("PAUSE");
    return 0;
}
