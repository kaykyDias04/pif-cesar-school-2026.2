#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int dias_trabalhados;
    float salario_bruto, imposto, salario_liquido;

    printf("=== Calculo de Salario - Encanador ===\n\n");
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias_trabalhados);

    salario_bruto = dias_trabalhados * 30.00;
    imposto = salario_bruto * 0.08;
    salario_liquido = salario_bruto - imposto;

    printf("\n--- Demonstrativo de Pagamento ---\n");
    printf("Dias trabalhados:     %d\n", dias_trabalhados);
    printf("Salario bruto:        R$ %.2f\n", salario_bruto);
    printf("Imposto retido (8%%):  R$ %.2f\n", imposto);
    printf("Salario liquido:      R$ %.2f\n", salario_liquido);

    system("PAUSE");
    return 0;
}
