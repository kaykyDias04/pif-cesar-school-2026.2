#include <stdio.h>
#include <stdlib.h>

typedef enum { VISITANTE = 1, USUARIO, ADMIN } Nivel;

typedef struct {
    char nome[100];
    Nivel nivel;
} Usuario;

int main(void) {
    Usuario usuario;
    int nivel, fim;

    printf("=== Niveis de Acesso ===\n\n");
    printf("Nome do usuario (ate 99 caracteres): ");
    if (scanf(" %99[^\n]", usuario.nome) != 1) return 1;
    fim = getchar();
    if (fim != '\n' && fim != EOF) {
        printf("\n[ERRO] Nome muito longo.\n\n");
        return 1;
    }
    printf("Nivel (1 - Visitante, 2 - Usuario, 3 - Administrador): ");
    if (scanf("%d", &nivel) != 1) return 1;
    usuario.nivel = (Nivel)nivel;

    printf("\nUsuario: %s\n", usuario.nome);
    switch (usuario.nivel) {
        case VISITANTE:
            printf("Visitante: apenas leitura\n\n");
            break;
        case USUARIO:
            printf("Usuario: leitura e escrita\n\n");
            break;
        case ADMIN:
            printf("Administrador: leitura, escrita e gerenciamento de usuarios\n\n");
            break;
        default:
            printf("[ERRO] Nivel de acesso invalido.\n\n");
            return 1;
    }

    system("PAUSE");
    return 0;
}
