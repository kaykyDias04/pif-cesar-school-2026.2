#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int total_segundos;
    int horas, minutos, segundos, resto;

    printf("=== Decomposicao do Tempo ===\n\n");
    printf("Digite a quantidade inteira de segundos: ");
    scanf("%d", &total_segundos);

    if (total_segundos < 0) {
        printf("\n[ERRO] O tempo em segundos deve ser maior ou igual a zero.\n\n");
    } else {
        horas = total_segundos / 3600;
        resto = total_segundos % 3600;
        minutos = resto / 60;
        segundos = resto % 60;

        printf("\n%d segundo(s) correspondem a: %d hora(s), %d minuto(s) e %d segundo(s).\n",
               total_segundos, horas, minutos, segundos);
        printf("Formato digital: %02d:%02d:%02d\n\n", horas, minutos, segundos);
    }

    system("PAUSE");
    return 0;
}
