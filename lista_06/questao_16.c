#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char senha[100];
    int tentativas = 0, liberado = 0, fim;

    printf("=== Autenticacao de Usuario ===\n\n");
    while (tentativas < 3 && !liberado) {
        printf("Digite a senha (tentativa %d de 3): ", tentativas + 1);
        if (fgets(senha, sizeof(senha), stdin) == NULL) break;
        if (strchr(senha, '\n') == NULL) {
            fim = getchar();
            if (fim != '\n' && fim != EOF) {
                while ((fim = getchar()) != '\n' && fim != EOF) { }
                printf("Senha muito longa.\n");
                tentativas++;
                continue;
            }
        }
        senha[strcspn(senha, "\n")] = '\0';
        if (strlen(senha) < 6) {
            printf("A senha precisa ter pelo menos 6 caracteres. Essa entrada nao conta como tentativa.\n");
            continue;
        }

        tentativas++;
        if (strcmp(senha, "c@esar2026") == 0) {
            liberado = 1;
        } else {
            printf("Senha incorreta.\n");
        }
    }

    printf("\n%s\n\n", liberado ? "Acesso liberado" : "Acesso bloqueado");

    system("PAUSE");
    return 0;
}
