#include <stdio.h>

//Declaracion de variables
int a, b, c;
float d, e, f;

int main(){
    //Inicializacion de variables
    a = 25;
    b = 75;

    c = a + b ;                   //%d" son marcadores de posicion, indican donde se deben de insertar los valores
    printf("El valor de la suma es: %d", c); //'c' es el argumento que se oasa al printf en el orden que aparecen
}