//Librería para entrada y salidas e imprimir en pantalla
#include <stdio.h>

// Definición del enumerador "weekDays" para los días de la semana, asociandolo con un valor entero del 0 al 6.
// en base a su posicion.
enum weekDays {
               //Posiciones de los dias de la semana
    Monday,    // 0
    Tuesday,   // 1
    Wednesday, // 2
    Thursday,  // 3
    Friday,    // 4
    Saturday,  // 5
    Sunday     // 6
};

int main() {
    enum weekDays today; // Declaración de una variable llamada 'today' del tipo 'enum weekDays'
    today = Monday;     // Asignación del valor 'Monday' (0) a la variable 'today'

    printf("Day %d", today + 1); // Se imprime "Day" seguido del valor de today + 1. (se le suma 1 porque empieza de 0)
    
    return 0; // Retorna un valor (0) para indicar que el programa se ejecutó correctamente
}
