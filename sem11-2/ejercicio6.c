#include <stdio.h>
#include <math.h>
/*
    El objetivo de puntero a funciones es lograr el "polimorfismo"
*/
double seno(double x){
    return sin(x);
}

double balistica(double x){
    return -x*x;
}

double cubica(double x){
    return x*x*x;
}

/*
//Esta es la forma tradicional de graficar una función
//Si se desea graficar otra función hay que copiar y redefinir esta funcion
void graficar(double xmin, double xmax){
    for(double dx=xmin; dx < xmax; dx +=0.1){
        //Aquí se llama la funcion generadora del gráfico
        seno(dx);//realmente sería plot(seno(dx));
    }
}
    */

    //Esta función esta lista para gráficar cualquier función
void graficar(double xmin, double xmax, double (*funcion)(double)){
    for(double dx=xmin; dx < xmax; dx +=0.1){
        //Aquí se llama la funcion generadora del gráfico
        funcion(dx);//realmente sería plot(seno(dx));
    }
}

int main(){
    
   printf("Graficando el seno\n"); 
   graficar(-3.14, 3.14, seno);  //grafica el seno

    //Y como se hace para graficar la parabola(balistica)?
    printf("\nGraficando el movimiento de una bala\n");
    graficar(0,25,balistica);

    //graficar la funcion cubuca
    printf("\nGraficando la funcion cubica\n");
    graficar(0,5,cubica);

    return 0;
}