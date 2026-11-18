#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    float peso, calorias;
} Dieta;

int main(void) {
    Dieta alimentos[5];
    float total = 0.0f;
    int i, mais_calorico = 0, fim;

    printf("=== Controle de Dieta ===\n\n");
    for (i = 0; i < 5; i++) {
        printf("Nome do alimento %d (ate 99 caracteres): ", i + 1);
        if (scanf(" %99[^\n]", alimentos[i].nome) != 1) return 1;
        fim = getchar();
        if (fim != '\n' && fim != EOF) {
            printf("[ERRO] Nome muito longo.\n");
            return 1;
        }
        printf("Peso da porcao (g) e calorias dessa porcao: ");
        if (scanf("%f %f", &alimentos[i].peso, &alimentos[i].calorias) != 2 ||
            alimentos[i].peso <= 0 || alimentos[i].calorias < 0) {
            printf("[ERRO] Use peso positivo e calorias nao negativas.\n");
            return 1;
        }
        total += alimentos[i].calorias;
        if (alimentos[i].calorias > alimentos[mais_calorico].calorias) mais_calorico = i;
    }

    printf("\n--- Alimentos da Refeicao ---\n");
    for (i = 0; i < 5; i++) {
        printf("%s: %.2f g - %.2f kcal\n", alimentos[i].nome, alimentos[i].peso, alimentos[i].calorias);
    }
    printf("Total de calorias: %.2f kcal\n", total);
    printf("Alimento mais calorico: %s (%.2f kcal)\n\n",
           alimentos[mais_calorico].nome, alimentos[mais_calorico].calorias);

    system("PAUSE");
    return 0;
}
