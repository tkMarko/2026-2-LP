#include "racional.h"
 
/* ---------- Función auxiliar PRIVADA (static) ----------
 * es_primo: devuelve 1 si |n| es primo, 0 en caso contrario.
 * Al ser static, solo es visible dentro de racional.c
 * (main.c no puede llamarla: encapsulamiento).
 */
static int es_primo(int n) {
    int i;
    if (n < 0) n = -n;
    if (n < 2) return 0;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
 
int mcd(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    if (b == 0) return a;        /* caso base */
    return mcd(b, a % b);        /* paso recursivo (Euclides) */
}
 
void simplificar(int *num, int *den) {
    int g;
 
    if (*den == 0) return;       /* fracción inválida: no se toca */
 
    /* Normalizar signo: el denominador siempre positivo. */
    if (*den < 0) {
        *num = -*num;
        *den = -*den;
    }
 
    /* Optimización con es_primo: si el denominador es primo y no
     * divide al numerador, su único divisor común posible sería él
     * mismo (o 1), así que la fracción ya es irreducible. */
    if (es_primo(*den) && *num % *den != 0) {
        return;
    }
 
    g = mcd(*num, *den);
    if (g > 1) {
        *num /= g;
        *den /= g;
    }
}
 
void sumar(int n1, int d1, int n2, int d2, int *n_res, int *d_res) {
    *n_res = n1 * d2 + n2 * d1;  /* a/b + c/d = (ad + cb) / bd */
    *d_res = d1 * d2;
    simplificar(n_res, d_res);
}
 
