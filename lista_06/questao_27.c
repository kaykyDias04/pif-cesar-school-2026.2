#include <stdio.h>
#include <stdlib.h>

typedef union { int i; float f; char c; } Valor;
typedef enum { INTEIRO, REAL, CARACTERE } Tipo;

typedef struct {
    Tipo tipo;
    Valor valor;
} Registro;

int main(void) {
    Registro registros[3];
    int i, tipo;

    printf("=== Dado Generico com Union ===\n\n");
    for (i = 0; i < 3; i++) {
        printf("Tipo do registro %d (0 - inteiro, 1 - real, 2 - caractere): ", i + 1);
        if (scanf("%d", &tipo) != 1 || tipo < INTEIRO || tipo > CARACTERE) {
            printf("[ERRO] Tipo invalido.\n");
            return 1;
        }
        registros[i].tipo = (Tipo)tipo;
        printf("Valor: ");
        switch (registros[i].tipo) {
            case INTEIRO:
                if (scanf("%d", &registros[i].valor.i) != 1) return 1;
                break;
            case REAL:
                if (scanf("%f", &registros[i].valor.f) != 1) return 1;
                break;
            case CARACTERE:
                if (scanf(" %c", &registros[i].valor.c) != 1) return 1;
                break;
        }
    }

    printf("\n--- Registros Informados ---\n");
    for (i = 0; i < 3; i++) {
        printf("Registro %d: ", i + 1);
        switch (registros[i].tipo) {
            case INTEIRO: printf("%d (inteiro)\n", registros[i].valor.i); break;
            case REAL: printf("%.2f (real)\n", registros[i].valor.f); break;
            case CARACTERE: printf("%c (caractere)\n", registros[i].valor.c); break;
        }
    }

    /* Os campos compartilham memoria: cabe o maior membro, com eventual ajuste de alinhamento. */
    printf("\nsizeof(Valor): %zu bytes\n\n", sizeof(Valor));

    system("PAUSE");
    return 0;
}
