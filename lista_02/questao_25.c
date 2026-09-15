#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float salario_base;
    float gratificacao, imposto, salario_liquido;

    printf("=== Calculo de Salario Liquido ===\n\n");
    printf("Digite o salario-base do funcionario: R$ ");
    scanf("%f", &salario_base);

    gratificacao    = salario_base * 0.05;
    imposto         = salario_base * 0.07;
    salario_liquido = salario_base + gratificacao - imposto;

    printf("\n--- Demonstrativo ---\n");
    printf("Salario-base:        R$ %.2f\n", salario_base);
    printf("Gratificacao (+5%%):  R$ %.2f\n", gratificacao);
    printf("Imposto (-7%%):       R$ %.2f\n", imposto);
    printf("Salario liquido:     R$ %.2f\n", salario_liquido);

    system("PAUSE");
    return 0;
}
