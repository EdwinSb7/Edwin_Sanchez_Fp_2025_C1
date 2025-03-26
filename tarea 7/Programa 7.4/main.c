#include <stdio.h>
#include <stdlib.h>

/* Declaracion de cadenas de caracteres y asignacion de valores. */

void main(void) {
    char *cad0;
    cad0 = "Argentina";  /* La declaracion y la asignacion son correctas. */
    puts(cad0);
    cad0 = "Brasil";  /* Correcto. Se modifica el contenido de la posicion en memoria a la que apunta la variable cad0. */
    puts(cad0);

    char cad1[100];  /* Se reserva espacio en memoria para la cadena */
    gets(cad1);  /* Correcto. Primero se le asigna un valor a la posicion de memoria a la que apunta cad1. */
    puts(cad1);

    char cad2[20] = "Mexico";  /* Correcto. */
    puts(cad2);
    gets(cad2);  /* El valor de una cadena declarada como cadena[longitud] se puede modificar. */
    puts(cad2);

    /* Incorrecto. No se puede asignar una cadena de caracteres a una posicion especifica de un array de caracteres */
    /* cad2[10] = "Guatemala"; */
}
