#include <stdio.h>
int main(){
    //a
    int v[8]={10,20,30,40,50,60,70,80};
    //b
    int *p=v;
    //c.i
    printf("numero en p0: %d\n",*p);
    printf("numero en p1: %d\n",*(p+1));
    printf("numero en p7: %d\n",*(p+7));
    //c.ii
    printf("numero en p3 (p[3]): %d\n",p[3]);
    printf("numero en p3 (3[p]): %d\n",3[p]);
    //c.iii
    printf("diferencia (p+5)-p: %lld\n",(p+5)-p);
    //c.iiii
    printf("tamaño de un int: %zu\n",sizeof(int));
    //d
    int suma=0;
    printf("Recorrido hacia derecha: ");
    for(int i=0;i<8;i++){
        printf("%d ",*(p+i));
        suma+=*(p+i);
    }
    putchar('\n');
    printf("suma final: %d\n",suma);
    //e
    printf("Recorrido hacia izquierda: ");
    p=&v[7];
    for(int i=7;i>=0;i--){
        printf("%d ",*p);
        p--;
    }
    return 0;
}