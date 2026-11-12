#include <stdio.h>

typedef struct Configuracion {
    unsigned int flag : 1;      //0b0      //1 bit de ancho 
    unsigned int nivel : 3;     //0b000    //3 bits de ancho
    unsigned int modo : 2;      //0b00     //2 bits de ancho
    unsigned int prioridad : 4; //0b0000   //4 bits de ancho
} confi;

int main(){
    confi c1;

    c1.flag = 1;

    printf("El Flag es %u\n", c1.flag);

    return 0;
}