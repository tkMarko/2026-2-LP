#include <stdio.h>
#define FILAS 5
#define COLUMNAS 4

int main(void){
    
    // Definir un arreglo bidimensional
    double matriz[FILAS][COLUMNAS]; 

    // Inicialiszamos sus elementos con cero
    for(size_t f=0; f<FILAS; f++){
        for(size_t c=0; c<COLUMNAS; c++){
            matriz[f][c] = 0.0;
        }
    }

    //Mostar la matiz
    for(size_t f=0; f<FILAS; f++){
        for(size_t c=0; c<COLUMNAS; c++){
            printf("\t%lf",matriz[f][c]);
        }
        printf("\n");
    }

    return 0;
}