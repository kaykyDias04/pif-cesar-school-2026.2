#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int dias;
    float salario_bruto, gratificacao, imposto, salario_liquido;

    printf("=== Calculo Salarial do Tecnico ===\n\n");
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    if (dias < 0) {
        printf("\n[ERRO] O numero de dias trabalhados nao pode ser negativo.\n\n");
    } else {
        salario_bruto = dias * 45.00f;
        gratificacao = salario_bruto * 0.05f;
        imposto = salario_bruto * 0.08f;
        salario_liquido = salario_bruto + gratificacao - imposto;

        printf("\n=========================================\n");
        printf("           HOLERITE DETALHADO            \n");
        printf("=========================================\n");
        printf("Dias trabalhados:     %d dia(s)\n", dias);
        printf("Valor por dia:        R$ %10.2f\n", 45.00f);
        printf("-----------------------------------------\n");
        printf("Salario Bruto:        R$ %10.2f\n", salario_bruto);
        printf("(+) Gratificacao (5%%): R$ %10.2f\n", gratificacao);
        printf("(-) Imposto IR (8%%):   R$ %10.2f\n", imposto);
        printf("-----------------------------------------\n");
        printf("Valor Liquido a Receber: R$ %10.2f\n", salario_liquido);
        printf("=========================================\n\n");
    }

    system("PAUSE");
    return 0;
}
