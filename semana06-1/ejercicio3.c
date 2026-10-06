#include <stdio.h>

int main(void){

    int cantidad = 20;
    int *ptr; //se degine el puntero(ptr)
            //es una variable qe¿ue opera con dirección de memoria
            //inicialmente apunta a algún lado de la memoria (tiene un lugar de memoria)
    
    /*Regla: Si se crea el puntero se requiere inicializar an tes de usar*/
    ptr = NULL; //NULL es cero, significa que no se apunta a nada, que no tiene memoria

    //....después de muchas líneas
    if(ptr==NULL){
        ptr=&cantidad;
        printf("Puntero inicializado, su direcccion es %p y su valor es %d", ptr, *ptr);
    }else{
        printf("El puntero ya tiene memoria, no es necesario inicializar\n");
    }
    
    return 0;
}