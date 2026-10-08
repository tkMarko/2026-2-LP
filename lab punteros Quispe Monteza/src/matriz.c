#include <stdio.h>

int main(){
    int m[3][4];

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &m[i][j]);
        }
    }

    printf("Matriz 3x4: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%4d \t", m[i][j]);
        }
        printf("\n");
    }
//sumas de filas
    for(int i=0; i<3; i++){
        int sumaf=0;
        printf("suma fila %d= ",i+1);
        for(int j=0; j<4; j++){
            sumaf+=m[i][j];
        }
        printf("%d\n", sumaf);
    }
//sumas de columnas
    for(int j=0; j<4; j++){
        int sumac=0;
        printf("suma columna %d= ",j+1);
        for(int i=0; i<3; i++){
            sumac+=m[i][j];
        }
        printf("%d\n", sumac);
    }
//suma total
    int suma_total =0;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            suma_total+=m[i][j];
        }
    }
    printf("Suma total: %d\n", suma_total);
//transpuesta
    printf("Transpuesta 4x3: \n");
    for(int j=0; j<4; j++){
        for(int i=0; i<3; i++){
            printf("%4d \t", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}