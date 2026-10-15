#include <stdio.h>
#include "racional.h"

/**
 * Función auxiliar de interfaz para solicitar una fracción válida al usuario.
 */
void leer_fraccion(int numero_fraccion, int *num, int *den) {
    printf("--- Fraccion %d ---\n", numero_fraccion);
    printf("Ingrese el numerador: ");
    scanf("%d", num);
    
    do {
        printf("Ingrese el denominador (distinto de 0): ");
        scanf("%d", den);
        if (*den == 0) {
            printf("Error: El denominador no puede ser cero. Intente de nuevo.\n");
        }
    } while (*den == 0);
}

int main(void) {
    int n1, d1;
    int n2, d2;
    int n_res, d_res;

    // 1. Pedir al usuario las dos fracciones
    leer_fraccion(1, &n1, &d1);
    leer_fraccion(2, &n2, &d2);

    // 2. Calcular la suma (internamente también la simplifica)
    sumar(n1, d1, n2, d2, &n_res, &d_res);

    // 3. Mostrar el resultado simplificado
    // 3. Mostrar el resultado simplificado
    if (d_res == 1) {
        // Si el denominador es 1, es un número entero exacto 
        printf("\nResultado simplificado: %d\n", n_res);
    } else {
        // Si no, se imprime como fracción irreducible (y opcionalmente su decimal)
        printf("\nResultado simplificado: %d/%d (aprox. %.2f)\n",n_res, d_res, (double)n_res / d_res);
    }

    return 0;
}