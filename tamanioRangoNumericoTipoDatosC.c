/*  Codigo en C que muestra los tamaños y los rangos numericos
    de diferentes tipos de datos usando las bibliotecas <stdio.h> y <limits.h>
*/
#include <stdio.h>  //es necesaria para la función printf que utilizamos para mostrar los resultados en la consola.
#include <limits.h> //contiene constantes que representan los límites de los tipos de datos.

int main() {
    printf("Tamaños y rangos numericos de tipos de datos en C:\n\n");
/*  Utiliza las constantes definidas en <limits.h> como CHAR_MIN, CHAR_MAX, INT_MIN, INT_MAX, etc.
    Para mostrar los rangos numéricos de los tipos de datos.
*/
    printf("Tipo de dato 'char':\n");
    printf("Tamaño en bytes: %lu\n", sizeof(char));
    printf("Rango: %d a %d\n\n", CHAR_MIN, CHAR_MAX);
    
    printf("Tipo de dato 'unsigned char':\n");
    printf("Tamaño en bytes: %lu\n", sizeof(unsigned char));
    printf("Rango: 0 a %d\n\n", UCHAR_MAX);
    
    printf("Tipo de dato 'int':\n");
    printf("Tamaño en bytes: %lu\n", sizeof(int));
    printf("Rango: %d a %d\n\n", INT_MIN, INT_MAX);
    
    printf("Tipo de dato 'unsigned int':\n");
    printf("Tamaño en bytes: %lu\n", sizeof(unsigned int));
    printf("Rango: 0 a %u\n\n", UINT_MAX);
    
    printf("Tipo de dato 'short':\n");
    printf("Tamaño en bytes: %lu\n", sizeof(short));
    printf("Rango: %d a %d\n\n", SHRT_MIN, SHRT_MAX);
    
    printf("Tipo de dato 'unsigned short':\n");
    printf("Tamaño en bytes: %lu\n", sizeof(unsigned short));
    printf("Rango: 0 a %u\n\n", USHRT_MAX);
    
    printf("Tipo de dato 'long':\n");
    printf("Tamaño en bytes: %lu\n", sizeof(long));
    printf("Rango: %ld a %ld\n\n", LONG_MIN, LONG_MAX);
    
    printf("Tipo de dato 'unsigned long':\n");
    printf("Tamaño en bytes: %lu\n", sizeof(unsigned long));
    printf("Rango: 0 a %lu\n\n", ULONG_MAX);
    
    return 0;
}
