#include <stdio.h>

int main(void) {
  printf("%-9s %5s\n", "ALUNO(A)", "NOTA");
  printf("%-9s %5s\n", "=========", "=====");
  printf("%-9s %5.1f\n", "ALINE", 9.0);
  printf("%-9s %5s\n", "MARIO", "DEZ");
  printf("%-9s %5.1f\n", "SERGIO", 4.5);
  printf("%-9s %5.1f\n", "SHIRLEY", 7.0);
  return 0;
}
