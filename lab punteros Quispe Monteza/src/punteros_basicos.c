#include <stdio.h>
int main(){
    //a
    int x=42;
    int *p=&x;
    int **pp=&p;
    //b
    //valor de x (numero en x)
    printf("x: %d\n",x);
    //valor de *p (numero que apunta *p)
    printf("valor de *p: %d\n",*p);
    //valor de **pp (numero que apunta **pp)
    printf("valor de **pp: %d\n",**pp);
    //direccion de x (lugar de memoria de x)
    printf("direccion de x: %p\n",(void*)&x);
    //valor de p (lugar de memoria al que apunta p)
    printf("valor de p: %p\n",(void*)p);
    //direccion de p (lugar de memoria de p)
    printf("direccion de p: %p\n",(void*)&p);
    //direccion de pp (lugar de memoria de pp)
    printf("direccion de pp: %p\n",(void*)&pp);
    //c
    //modificando x a traves de p
    *p=100;
    printf("nuevo x modificado a traves de p: %d\n",x);
    **pp=200;
    printf("nuevo x modificado a traves de pp: %d\n",x);
    return 0;
}