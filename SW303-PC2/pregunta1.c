#include <stdio.h>

int x = 100;    //variable global

void funcionA(){
    int x = 10;
    static int y = 5;
    x++;
    y++;
    printf("A: x=%d, y=%d, global=%d\n", x, y, ::x);   //::x accede global
}

void funcionB(){
    static int y = 0;
    x++;    //modifica la variable global
    y++;
    printf("B: x=%d, y=%d", x, y);
}
int main(void){
    funcionA();
    funcionA();
    funcionB();
    funcionA();
    funcionB();

    return 0;
}