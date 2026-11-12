#include <stdio.h>
//Las estructuras tiene un byte adicional por cada atributo
//Por que en memoria existara un fin de atributo
/*
struct Dato{
    float entero;   //4 bytes + 1 de finalización
    float decimal;  //4 bytes + 1 de finalización
    char caracter;  //1 bytes + 1 de finalización

};
*/
union Dato{
    int entero;   //4 bytes + 1 de finalización
    float decimal;  //4 bytes + 1 de finalización
    char caracter;  //1 bytes + 1 de finalización

};

int main(){
    union Dato u1;
    union Dato *x;
    printf("El tipo entero ocupa %d bytes\n", sizeof(int));
    printf("El tipo float ocupa %d bytes\n", sizeof(float));
    printf("El tipo char ocupa %d bytes\n", sizeof(char));
    printf("Un tipo de dato del tipo de estructura Dato ocupa %d bytes\n",sizeof(union Dato));

    //Inicialización
    u1.entero = 120;
    printf("Entero: %d\n", u1.entero);
    u1.decimal = 3.1416;
    printf("Decimal: %f\n", u1.decimal);
    printf("Entero: %d\n", u1.entero);

    printf("(desde el puntero) Decimal: %f\n", x->decimal);

    return 0;
}