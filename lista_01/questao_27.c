#include <stdio.h>

int main(void) {
  int total_segundos;
  int horas, minutos, segundos;

  printf("Digite o tempo em segundos: ");
  scanf("%d", &total_segundos);

  horas = total_segundos / 3600;
  minutos = (total_segundos % 3600) / 60;
  segundos = total_segundos % 60;

  printf(
      "%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s).\n",
      total_segundos, horas, minutos, segundos);

  return 0;
}
