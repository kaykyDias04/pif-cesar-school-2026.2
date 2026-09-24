#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const int SENHA_CORRETA = 2026;
    int senha_digitada;
    int tentativa;
    int autenticado = 0;

    printf("=== Sistema de Autenticacao ===\n\n");

    for (tentativa = 1; tentativa <= 3; tentativa++) {
        printf("Tentativa %d de 3 - Digite a senha numerica: ", tentativa);
        scanf("%d", &senha_digitada);

        if (senha_digitada == SENHA_CORRETA) {
            autenticado = 1;
            printf("\nAcesso Concedido!\n");
            printf("Numero de tentativas utilizadas: %d\n\n", tentativa);
            break;
        } else {
            if (tentativa < 3) {
                printf("Senha incorreta! Voce ainda tem %d tentativa(s).\n\n", 3 - tentativa);
            }
        }
    }

    if (!autenticado) {
        printf("\nConta Bloqueada por Seguranca!\n\n");
    }

    system("PAUSE");
    return 0;
}
