#include <stdio.h>
#include <stdlib.h>

/* Cubo-3.
El programa calcula el cubo de los 10 primeros numeros naturales con la
ayuda de una función y utilizando parámetros por valor. */

int cubo(int); /* Prototipo de función. El parametro es de tipo entero. */

void main(void)
{
    int I;
    for (I = 1; I <= 10; I++)
    {
        printf("\nEl cubo de %d es: %d", I, cubo(I));
        /* Llamada a la funcion cubo. El paso del parámetro es por valor. */
    }
}

int cubo(int K)
{
    /* K es un parametro por valor de tipo entero. */
    /* La función calcula el cubo del parametro K. */
    return (K * K * K);
}
