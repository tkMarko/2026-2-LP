#include <stdio.h>


int main(void){
    int  datos[10];
    int suma=0;
    double promedio=0;
    int indice_maximo=0, indice_minimo=0;
    int elem_pares=0, elem_impares=0;
    int in_place=0;
    
    for(int i=0; i<10; i++){
        scanf("%d", &datos[i]);
    }

    int minimo=datos[0];
    int maximo=datos[0];
    
    for(int i=0; i<10; i++){
        suma+=datos[i];
    }
    promedio = suma/10.0;
    for(int i=0; i<10; i++){
        if(maximo<datos[i]){
            maximo=datos[i];
            indice_maximo=i;
        }
    }
    for(int i=0; i<10; i++){
        if(minimo>datos[i]){
            minimo=datos[i];
            indice_minimo=i;
        }
    }
    for(int i=0; i<10; i++){
        if(datos[i]%2==0){
            elem_pares++;
        }else{
            elem_impares++;
        }
    }
    printf("Suma     :%d\n",suma);
    printf("Promedio :%lf\n", promedio);
    printf("Minimo   :%d(indice %d)\n", minimo, indice_minimo);
    printf("Maximo   :%d(indice %d)\n", maximo, indice_maximo);
    printf("Pares    :%d\n", elem_pares);
    printf("Imapres  :%d\n", elem_impares);
    printf("Original: ");
    for(int i=0; i<10; i++){
        printf("%d, ", datos[i]);
    }
    printf("\nInvertido: ");
    for(int i=9; i>=0; i--){
        in_place=datos[i];
        printf("%d,",in_place);
    }


    return 0;
}