#include <stdio.h>
#include <stdlib.h>

int meuStrlen(char s[]);
void inverte(char s[]);
void removeChar(char s[], int pos);

int main(void) {
    char texto[100];
    int tamanho, posicao, fim;

    printf("=== Minhas Proprias Funcoes de String ===\n\n");
    printf("Digite um texto (ate 99 caracteres): ");
    if (fgets(texto, sizeof(texto), stdin) == NULL) return 1;
    tamanho = meuStrlen(texto);
    if (tamanho > 0 && texto[tamanho - 1] == '\n') {
        texto[--tamanho] = '\0';
    } else {
        fim = getchar();
        if (fim != '\n' && fim != EOF) {
            printf("[ERRO] O texto ultrapassou o limite de 99 caracteres.\n");
            return 1;
        }
    }

    printf("\nQuantidade de caracteres: %d\n", meuStrlen(texto));
    inverte(texto);
    printf("Texto invertido: %s\n", texto);
    printf("Qual posicao deseja remover do texto invertido (a partir de 0)? ");
    if (scanf("%d", &posicao) != 1) return 1;
    if (posicao < 0 || posicao >= tamanho) {
        printf("[ERRO] Essa posicao nao existe no texto.\n");
        return 1;
    }
    removeChar(texto, posicao);
    printf("Texto depois da remocao: %s\n\n", texto);

    system("PAUSE");
    return 0;
}

int meuStrlen(char s[]) {
    int tamanho = 0;
    while (s[tamanho] != '\0') tamanho++;
    return tamanho;
}

void inverte(char s[]) {
    int inicio = 0, fim = meuStrlen(s) - 1;
    char auxiliar;
    while (inicio < fim) {
        auxiliar = s[inicio];
        s[inicio] = s[fim];
        s[fim] = auxiliar;
        inicio++;
        fim--;
    }
}

void removeChar(char s[], int pos) {
    if (pos < 0 || pos >= meuStrlen(s)) return;
    while (s[pos] != '\0') {
        s[pos] = s[pos + 1];
        pos++;
    }
}
