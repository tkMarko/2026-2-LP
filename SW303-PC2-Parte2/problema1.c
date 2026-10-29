#include <stdio.h>

int sumar(int a, int b, long long *resultado);
int restar(int a, int b, long long *resultado);
int multiplicar(int a, int b, long long *resultado);
int dividir(int a, int b, long long *cociente, int *resto);

int main(void) {
    int a, b, resto;
    long long suma, resta, multiplicacion, cociente;

    printf("Ingrese dos numeros:\n");
    if (scanf("%d %d", &a, &b)) {
        printf("Error: entrada no valida\n");
        return 1;
    }

    if (sumar(a, b, &suma)) {
        printf("Suma -> %lld\n", suma);
    } else {
        printf("Error al sumar\n");
    }

    if (restar(a, b, &resta)) {
        printf("Resta -> %lld\n", resta);
    } else {
        printf("Error al restar\n");
    }

    if (multiplicar(a, b, &multiplicacion)) {
        printf("Multiplicacion -> %lld\n", multiplicacion);
    } else {
        printf("Error al multiplicar\n");
    }

    if (dividir(a, b, &cociente, &resto)) {
        printf("Dividir -> cociente: %lld, resto: %d\n", cociente, resto);
    } else {
        printf("Dividir -> Error (division por cero o puntero nulo)\n");
    }

    return 0;
}
int sumar(int a, int b, long long *resultado){
    if(resultado==NULL){
        printf("Error: puntero nulo\n");
        return 0;
    }else{
        *resultado = (long long)a + b;
        return 1;
    }
}
int restar(int a, int b, long long *resultado){
    if(resultado==NULL){
        printf("Error: puntero nulo\n");
        return 0;
    }else{
        *resultado = (long long)a - b;
        return 1;
    }
}
int multiplicar(int a, int b, long long *resultado){
    if(resultado==NULL){
        printf("Error: puntero nulo\n");
        return 0;
    }else{
        *resultado = (long long)a * (long long)b;
        return 1;
    }
}
int dividir(int a, int b, long long *cociente, int *resto){
    if(b==0 || cociente ==NULL || resto == NULL){
       printf("Error: division por cero\n");
       return 0;
    }
    *cociente = (long long)a/b;
    *resto = a%b; 
    return 1;
    
}