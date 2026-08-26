#include <stdio.h>

int main(void) {
  int n1, n2, n3;
  double media;

  printf("Digite o primeiro numero inteiro: ");
  scanf("%d", &n1);
  printf("Digite o segundo numero inteiro: ");
  scanf("%d", &n2);
  printf("Digite o terceiro numero inteiro: ");
  scanf("%d", &n3);

  media = (double)(n1 + n2 + n3) / 3.0;

  printf("Media aritmetica: %.2f\n", media);

  return 0;
}
