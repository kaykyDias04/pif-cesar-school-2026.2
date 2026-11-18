#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculaIMC(float peso, float altura);
void classificaIMC(float imc);

int main(void) {
    float peso, altura, imc;

    printf("=== Indice de Massa Corporal ===\n\n");
    printf("Digite o peso (kg): ");
    if (scanf("%f", &peso) != 1) return 1;
    printf("Digite a altura (m): ");
    if (scanf("%f", &altura) != 1) return 1;
    if (!isfinite(peso) || !isfinite(altura) || peso <= 0 || altura <= 0) {
        printf("\n[ERRO] Peso e altura precisam ser positivos e finitos.\n\n");
        return 1;
    }

    imc = calculaIMC(peso, altura);
    if (!isfinite(imc) || imc <= 0) {
        printf("\n[ERRO] Esses valores ultrapassam a precisao do calculo.\n\n");
        return 1;
    }
    printf("\nIMC: %.2f\n", imc);
    classificaIMC(imc);
    printf("\n");

    system("PAUSE");
    return 0;
}

float calculaIMC(float peso, float altura) {
    return peso / altura / altura;
}

void classificaIMC(float imc) {
    if (imc < 18.5f) {
        printf("Classificacao: Abaixo do peso\n");
    } else if (imc < 25.0f) {
        printf("Classificacao: Peso normal\n");
    } else if (imc < 30.0f) {
        printf("Classificacao: Sobrepeso\n");
    } else {
        printf("Classificacao: Obesidade\n");
    }
}
