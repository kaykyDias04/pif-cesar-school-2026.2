#include <stdio.h>
#include <stdlib.h>

typedef struct { float x, y; } Ponto;
typedef struct { Ponto inf_esq; Ponto sup_dir; } Retangulo;

float area(Retangulo r);
float perimetro(Retangulo r);
int contemPonto(Retangulo r, Ponto p);

int main(void) {
    Retangulo r1, r2;
    Ponto ponto;

    printf("=== Ponto e Retangulo ===\n\n");
    printf("Canto inferior esquerdo (x y): ");
    if (scanf("%f %f", &r1.inf_esq.x, &r1.inf_esq.y) != 2) return 1;
    printf("Canto superior direito (x y): ");
    if (scanf("%f %f", &r1.sup_dir.x, &r1.sup_dir.y) != 2) return 1;
    if (r1.sup_dir.x <= r1.inf_esq.x || r1.sup_dir.y <= r1.inf_esq.y) {
        printf("[ERRO] O canto superior direito deve ficar acima e a direita do inferior esquerdo.\n");
        return 1;
    }
    printf("Ponto que deseja verificar (x y): ");
    if (scanf("%f %f", &ponto.x, &ponto.y) != 2) return 1;

    printf("\nArea: %.2f\n", area(r1));
    printf("Perimetro: %.2f\n", perimetro(r1));
    printf("O ponto %s do retangulo (a borda tambem conta).\n", contemPonto(r1, ponto) ? "esta dentro" : "esta fora");

    r2 = r1;
    printf("\nRetangulo copiado com r2 = r1:\n");
    printf("Inferior esquerdo: (%.2f, %.2f)\n", r2.inf_esq.x, r2.inf_esq.y);
    printf("Superior direito: (%.2f, %.2f)\n\n", r2.sup_dir.x, r2.sup_dir.y);

    system("PAUSE");
    return 0;
}

float area(Retangulo r) {
    return (r.sup_dir.x - r.inf_esq.x) * (r.sup_dir.y - r.inf_esq.y);
}

float perimetro(Retangulo r) {
    return 2 * ((r.sup_dir.x - r.inf_esq.x) + (r.sup_dir.y - r.inf_esq.y));
}

int contemPonto(Retangulo r, Ponto p) {
    return p.x >= r.inf_esq.x && p.x <= r.sup_dir.x &&
           p.y >= r.inf_esq.y && p.y <= r.sup_dir.y;
}
