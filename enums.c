//Librería para entrada y salidas e imprimir en pantalla
#include <stdio.h>

// Definición del enumerador "weekDays" para los días de la semana, asociandolo con un valor entero del 0 al 6
enum weekDays {
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
    today = Monday;     // Asignación del valor 'Sunday' (6) a la variable 'today'

    printf("Day %d", today + 1); // Se imprime "Day" seguido del valor de today + 1. 
    
    return 0; // Retorna un valor (0) para indicar que el programa se ejecutó correctamente
}
