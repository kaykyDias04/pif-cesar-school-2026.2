#include <stdio.h>
#include <stdlib.h>

/* Prototipos das funcoes de conversao declarados antes da main() */
float celsiusParaFahrenheit(float c);
float celsiusParaKelvin(float c);
float fahrenheitParaCelsius(float f);
float kelvinParaCelsius(float k);

int main(void) {
    int opcao;
    float temp_entrada, temp_convertida;

    printf("=========================================\n");
    printf("    CONVERSOR MODULAR DE TEMPERATURAS    \n");
    printf("=========================================\n");
    printf("  1 - Celsius para Fahrenheit (C -> F)\n");
    printf("  2 - Celsius para Kelvin     (C -> K)\n");
    printf("  3 - Fahrenheit para Celsius (F -> C)\n");
    printf("  4 - Kelvin para Celsius     (K -> C)\n");
    printf("  0 - Sair\n");
    printf("-----------------------------------------\n");
    printf("Escolha a conversao desejada: ");
    scanf("%d", &opcao);

    if (opcao == 0) {
        printf("\nPrograma encerrado. Ate logo!\n\n");
        system("PAUSE");
        return 0;
    }

    if (opcao < 1 || opcao > 4) {
        printf("\n[ERRO] Opcao invalida (%d)! Escolha entre 1 e 4.\n\n", opcao);
        system("PAUSE");
        return 0;
    }

    printf("\nDigite a temperatura de origem: ");
    scanf("%f", &temp_entrada);

    printf("\n-----------------------------------------\n");
    switch (opcao) {
        case 1:
            temp_convertida = celsiusParaFahrenheit(temp_entrada);
            printf("Conversao: %.2f C  --->  %.2f F\n", temp_entrada, temp_convertida);
            break;

        case 2:
            temp_convertida = celsiusParaKelvin(temp_entrada);
            printf("Conversao: %.2f C  --->  %.2f K\n", temp_entrada, temp_convertida);
            break;

        case 3:
            temp_convertida = fahrenheitParaCelsius(temp_entrada);
            printf("Conversao: %.2f F  --->  %.2f C\n", temp_entrada, temp_convertida);
            break;

        case 4:
            temp_convertida = kelvinParaCelsius(temp_entrada);
            printf("Conversao: %.2f K  --->  %.2f C\n", temp_entrada, temp_convertida);
            break;
    }
    printf("-----------------------------------------\n\n");

    system("PAUSE");
    return 0;
}

/* Implementacoes das funcoes modulares de conversao */
float celsiusParaFahrenheit(float c) {
    return (c * 9.0f / 5.0f) + 32.0f;
}

float celsiusParaKelvin(float c) {
    return c + 273.15f;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32.0f) * 5.0f / 9.0f;
}

float kelvinParaCelsius(float k) {
    return k - 273.15f;
}
