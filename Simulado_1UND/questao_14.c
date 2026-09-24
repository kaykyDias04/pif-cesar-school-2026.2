#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const int SENHA_SECRETA = 2026;
    int senha_digitada;
    int tentativa;
    int acertou = 0;

    printf("=== Sistema de Autenticacao de Senha ===\n\n");

    for (tentativa = 1; tentativa <= 3; tentativa++) {
        printf("Tentativa %d de 3 - Digite a senha numerica: ", tentativa);
        scanf("%d", &senha_digitada);

        if (senha_digitada == SENHA_SECRETA) {
            acertou = 1;
            printf("\nAcesso Concedido!\n");
            printf("Tentativas utilizadas: %d\n\n", tentativa);
            break;
        } else {
            if (tentativa < 3) {
                printf("Senha incorreta! Voce ainda possui %d tentativa(s).\n\n", 3 - tentativa);
            }
        }
    }

    if (!acertou) {
        printf("\nConta Bloqueada por Seguranca!\n\n");
    }

    system("PAUSE");
    return 0;
}
