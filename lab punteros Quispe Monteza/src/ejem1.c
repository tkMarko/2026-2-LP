#include <stdio.h>

//parametro de paso por valor 
void agregar_uno(int n){// se crea una copia de la memoria de la variable
    n++;
    printf("Dentro de la funcion, el valor de n es: %d\n", n);
}

//parametro de paso por referencia 
void agregar_uno2(int *n){// n es referencia (es la direccion de memoria de n)
    (*n)++;
    printf("Dentro de la funcion, el valor de n es: %d\n",*n); // n es desreferencia 
}

int main(void){
    
    int n=5;

    printf("--------------Sin usar referencia----------------\n");
    printf("Antes de entrar a la funcion, el valor de n es %d\n", n);
    agregar_uno(n);
    printf("Despues de entrar a la funcion, el valor de n es %d\n", n);

    printf("--------------Usando referencia----------------\n");
    printf("Antes de entrar a la funcion, el valor de n es %d\n", n);
    agregar_uno2(&n);
    printf("Despues de entrar a la funcion, el valor de n es %d\n", n);

    return 0;

}