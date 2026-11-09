#ifndef AREAS_H
#define AREAS_H

/* Constante PI para calculos geometricos */
#define PI 3.14159265f

/*
 * Macros com parenteses de protecao em torno de cada parametro
 * e em torno da expressao global resultante.
 */
#define A_CIRC(raio)      (PI * (raio) * (raio))
#define A_RET(base, alt)  ((base) * (alt))
#define A_TRI(base, alt)  (((base) * (alt)) / 2.0f)

#endif /* AREAS_H */
