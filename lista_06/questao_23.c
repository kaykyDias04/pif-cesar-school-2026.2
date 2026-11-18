#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int hora, minuto;
} Hora;

typedef struct {
    char placa[10];
    Hora entrada, saida;
} Veiculo;

int tempoPermanencia(Veiculo veiculo);

int main(void) {
    Veiculo veiculo;
    int minutos, horas_cobradas, fim;
    float valor;

    printf("=== Estacionamento ===\n\n");
    printf("Placa do veiculo (ate 9 caracteres): ");
    if (scanf("%9s", veiculo.placa) != 1) return 1;
    fim = getchar();
    if (fim != '\n' && fim != EOF && fim != ' ' && fim != '\t') {
        printf("[ERRO] Placa muito longa.\n");
        return 1;
    }
    printf("Horario de entrada (hora minuto): ");
    if (scanf("%d %d", &veiculo.entrada.hora, &veiculo.entrada.minuto) != 2) return 1;
    printf("Horario de saida (hora minuto): ");
    if (scanf("%d %d", &veiculo.saida.hora, &veiculo.saida.minuto) != 2) return 1;
    if (veiculo.entrada.hora < 0 || veiculo.entrada.hora > 23 ||
        veiculo.saida.hora < 0 || veiculo.saida.hora > 23 ||
        veiculo.entrada.minuto < 0 || veiculo.entrada.minuto > 59 ||
        veiculo.saida.minuto < 0 || veiculo.saida.minuto > 59) {
        printf("[ERRO] Horario invalido.\n");
        return 1;
    }

    minutos = tempoPermanencia(veiculo);
    horas_cobradas = (minutos + 59) / 60;
    valor = horas_cobradas * 5.0f;
    printf("\nPlaca: %s\n", veiculo.placa);
    printf("Permanencia: %d hora(s) e %d minuto(s)\n", minutos / 60, minutos % 60);
    printf("Horas cobradas: %d\n", horas_cobradas);
    printf("Valor a pagar: R$ %.2f\n\n", valor);

    system("PAUSE");
    return 0;
}

int tempoPermanencia(Veiculo veiculo) {
    int minutos = (veiculo.saida.hora * 60 + veiculo.saida.minuto) -
                  (veiculo.entrada.hora * 60 + veiculo.entrada.minuto);
    /* Sem datas, uma saida anterior a entrada e considerada no dia seguinte. */
    if (minutos < 0) minutos += 24 * 60;
    return minutos;
}
