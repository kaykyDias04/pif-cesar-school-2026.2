#include <stdio.h>
#include <stdlib.h>

/* Prototipos das funcoes declarados antes da main() */
float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main(void) {
    int opcao;
    float op1, op2, resultado;

    printf("=========================================\n");
    printf("     CALCULADORA DE QUATRO OPERACOES     \n");
    printf("=========================================\n");
    printf("  1 - Adicao (+)\n");
    printf("  2 - Subtracao (-)\n");
    printf("  3 - Multiplicacao (*)\n");
    printf("  4 - Divisao (/)\n");
    printf("  0 - Sair\n");
    printf("-----------------------------------------\n");
    printf("Escolha a operacao desejada: ");
    scanf("%d", &opcao);

    if (opcao == 0) {
        printf("\nCalculadora finalizada. Ate mais!\n\n");
        system("PAUSE");
        return 0;
    }

    if (opcao < 1 || opcao > 4) {
        printf("\n[ERRO] Opcao invalida (%d)! Escolha entre 1 e 4 (ou 0 para sair).\n\n", opcao);
        system("PAUSE");
        return 0;
    }

    printf("\nDigite o primeiro operando: ");
    scanf("%f", &op1);

    printf("Digite o segundo operando: ");
    scanf("%f", &op2);

    printf("\n-----------------------------------------\n");
    switch (opcao) {
        case 1:
            resultado = soma(op1, op2);
            printf("Operacao: %.2f + %.2f = %.2f\n", op1, op2, resultado);
            break;

        case 2:
            resultado = subtrai(op1, op2);
            printf("Operacao: %.2f - %.2f = %.2f\n", op1, op2, resultado);
            break;

        case 3:
            resultado = multiplica(op1, op2);
            printf("Operacao: %.2f * %.2f = %.2f\n", op1, op2, resultado);
            break;

        case 4:
            /* Validacao da divisao por zero antes de chamar a funcao */
            if (op2 == 0.0f) {
                printf("[ERRO CRITICO] Divisao por zero nao permitida!\n");
            } else {
                resultado = divide(op1, op2);
                printf("Operacao: %.2f / %.2f = %.2f\n", op1, op2, resultado);
            }
            break;
    }
    printf("-----------------------------------------\n\n");

    system("PAUSE");
    return 0;
}

/* Implementacoes das funcoes matematicas */
float soma(float a, float b) {
    return a + b;
}

float subtrai(float a, float b) {
    return a - b;
}

float multiplica(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
