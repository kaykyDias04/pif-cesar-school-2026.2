#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ehPalindromo(char s[]);

int main(void) {
    char palavra[100];
    int fim;

    printf("=== Verificacao de Palindromo ===\n\n");
    printf("Digite uma palavra (ate 99 caracteres): ");
    if (scanf("%99s", palavra) != 1) return 1;
    fim = getchar();
    if (fim != '\n' && fim != EOF && fim != ' ' && fim != '\t') {
        printf("[ERRO] A palavra ultrapassou o limite de 99 caracteres.\n");
        return 1;
    }

    if (ehPalindromo(palavra)) {
        printf("\nA palavra e um palindromo.\n\n");
    } else {
        printf("\nA palavra nao e um palindromo.\n\n");
    }

    system("PAUSE");
    return 0;
}

int ehPalindromo(char s[]) {
    int inicio = 0, fim = (int)strlen(s) - 1;
    while (inicio < fim) {
        if (s[inicio] != s[fim]) return 0;
        inicio++;
        fim--;
    }
    return 1;
}
