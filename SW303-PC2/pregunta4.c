#include <stdio.h>

int fAckermann(int x, int y){
    static int num_llamadas = 0;
    static int nivel = 0;
    int resultado;

    num_llamadas++;
    nivel++;

    if(x <= 0){
        resultado =y+1;
    }
    else if(y<=0){
        resultado = fAckermann(x-1,1);
    }else{
        resultado = fAckermann(x-1,fAckermann(x,y-1));
    }
    nivel--;

    if(nivel==0){
        printf("Total de llamadas realizadas: %d\n", num_llamadas);
    }
    return resultado;
}

int main(void){
    int resultado = fAckermann(3,4);
    printf("Resultado de Ackerman(3,4): %d\n", resultado);

    return 0;
}