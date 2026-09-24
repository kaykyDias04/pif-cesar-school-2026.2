#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float nota;

    printf("=== Validacao de Nota com do-while ===\n\n");

    do {
        printf("Digite uma nota valida (0.0 a 10.0): ");
        scanf("%f", &nota);

        if (nota < 0.0f || nota > 10.0f) {
            printf("[ERRO] Nota %.2f invalida! O valor deve estar entre 0.0 e 10.0.\n\n", nota);
        }
    } while (nota < 0.0f || nota > 10.0f);

    printf("\nNota registrada com sucesso! Valor: %.2f\n\n", nota);

    system("PAUSE");
    return 0;
}
