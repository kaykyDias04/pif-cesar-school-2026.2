#include <stdio.h>
#include <stdlib.h>

/* Prototipos das funcoes declarados antes da main() */
float calcular_media(int a, int b, int c);
int calcular_soma(int a, int b, int c);

int main(void) {
    int n1, n2, n3;
    int soma;
    float media;

    printf("=== Demonstracao da Separacao de Funcoes para Soma e Media ===\n\n");
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &n3);

    soma = calcular_soma(n1, n2, n3);
    media = calcular_media(n1, n2, n3);

    printf("\n-------------------------------------------------------------\n");
    printf("Valores informados: %d, %d e %d\n", n1, n2, n3);
    printf("Resultado retornado por calcular_soma():  %d\n", soma);
    printf("Resultado retornado por calcular_media(): %.2f\n", media);
    printf("-------------------------------------------------------------\n\n");

    system("PAUSE");
    return 0;
}

/* Implementacao da funcao que calcula e retorna apenas a media */
float calcular_media(int a, int b, int c) {
    return (float)(a + b + c) / 3.0f;
}

/* Implementacao da funcao que calcula e retorna apenas a soma */
int calcular_soma(int a, int b, int c) {
    return a + b + c;
}
