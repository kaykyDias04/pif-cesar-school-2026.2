#include <stdio.h>
#include <stdlib.h>

void imprimeTabuleiro(char tab[][3]);
char verificaResultado(char tab[][3]);

int main(void) {
    char tab[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char jogador = 'X', resultado = ' ';
    int linha, coluna;

    printf("=== Jogo da Velha ===\n\n");
    printf("Informe linha e coluna de 0 a 2. O jogador X comeca.\n");
    imprimeTabuleiro(tab);

    while (resultado == ' ') {
        printf("\nJogador %c, digite linha e coluna: ", jogador);
        if (scanf("%d %d", &linha, &coluna) != 2) {
            printf("[ERRO] A jogada precisa de dois numeros inteiros.\n");
            return 1;
        }
        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {
            printf("[ERRO] Essa posicao esta fora do tabuleiro. Tente novamente.\n");
            continue;
        }
        if (tab[linha][coluna] != ' ') {
            printf("[ERRO] Essa posicao ja esta ocupada. Escolha outra.\n");
            continue;
        }

        tab[linha][coluna] = jogador;
        imprimeTabuleiro(tab);
        resultado = verificaResultado(tab);
        jogador = (jogador == 'X') ? 'O' : 'X';
    }

    if (resultado == 'E') {
        printf("\nDeu empate!\n\n");
    } else {
        printf("\nJogador %c venceu!\n\n", resultado);
    }

    system("PAUSE");
    return 0;
}

void imprimeTabuleiro(char tab[][3]) {
    int i;
    printf("\n");
    for (i = 0; i < 3; i++) {
        printf(" %c | %c | %c\n", tab[i][0], tab[i][1], tab[i][2]);
        if (i < 2) printf("---+---+---\n");
    }
}

char verificaResultado(char tab[][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        if (tab[i][0] != ' ' && tab[i][0] == tab[i][1] && tab[i][1] == tab[i][2]) {
            return tab[i][0];
        }
        if (tab[0][i] != ' ' && tab[0][i] == tab[1][i] && tab[1][i] == tab[2][i]) {
            return tab[0][i];
        }
    }
    if (tab[1][1] != ' ' &&
        ((tab[0][0] == tab[1][1] && tab[1][1] == tab[2][2]) ||
         (tab[0][2] == tab[1][1] && tab[1][1] == tab[2][0]))) {
        return tab[1][1];
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (tab[i][j] == ' ') return ' ';
        }
    }
    return 'E';
}
