#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int horas_normais, horas_extras;
    float salario_bruto, imposto, salario_liquido;
    float excedente;

    printf("=== Salario Anual - Metalurgica ===\n\n");

    printf("Digite o total de horas normais no ano: ");
    scanf("%d", &horas_normais);
    printf("Digite o total de horas extras no ano: ");
    scanf("%d", &horas_extras);

    salario_bruto = (horas_normais * 10.00) + (horas_extras * 15.00);
    excedente = salario_bruto - 12000.00;
    imposto = (excedente > 0) ? (excedente * 0.10) : 0.00;
    salario_liquido = salario_bruto - imposto;

    printf("\n--- Demonstrativo Anual ---\n");
    printf("Horas normais:       %d x R$ 10.00 = R$ %.2f\n",
           horas_normais, horas_normais * 10.00);
    printf("Horas extras:        %d x R$ 15.00 = R$ %.2f\n",
           horas_extras, horas_extras * 15.00);
    printf("Salario bruto anual: R$ %.2f\n", salario_bruto);
    printf("Faixa de isencao:    R$ 12000.00\n");
    printf("Imposto (10%% sobre excedente): R$ %.2f\n", imposto);
    printf("Salario liquido:     R$ %.2f\n", salario_liquido);

    system("PAUSE");
    return 0;
}
