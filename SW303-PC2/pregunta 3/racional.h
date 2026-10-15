#ifndef RACIONAL_H
#define RACIONAL_H

/**
  Calcula el Máximo Común Divisor (MCD) de dos números enteros
  de forma recursiva mediante el algoritmo de Euclides
 */
int mcd(int x, int y);

/**
 * Simplifica una fracción a su forma irreducible modificando 
 * directamente el numerador y el denominador mediante punteros.
 */
void simplificar(int *num, int *den);

/**
 * Suma dos fracciones (n1/d1 + n2/d2) y entrega el resultado 
 * ya simplificado a través de los punteros de salida.
 *
 */
void sumar(int n1, int d1, int n2, int d2, int *n_res, int *d_res);

#endif // RACIONAL_H