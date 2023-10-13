#include <stdio.h>

// Función que no devuelve ningún valor (void)
void saludar() {
    printf("¡Hola! Esta es una función que saluda.\n");
}

// Función que toma un entero como argumento y no devuelve valor (void)
void cuadrado(int num) {
    printf("El cuadrado de %d es %d.\n", num, num * num);
}

int main() {
    // Llamada a la función que no devuelve valor (void)
    saludar();

    int numero = 5;

    // Llamada a la función que toma un argumento y no devuelve valor (void)
    cuadrado(numero);

    return 0;
}
