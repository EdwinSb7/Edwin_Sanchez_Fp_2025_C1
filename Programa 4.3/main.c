#include <stdio.h>
#include <stdlib.h>


/* Prototipo de función. */
void f1(void);

int K = 5; /* Variable global. */

void main(void)
{
    int I;
    for (I = 1; I <= 3; I++)
        f1(); /* Llamada a la función f1. */
}

void f1(void)
{
    int localK = 2; /* Variable local. */
    localK += localK; /* Se duplica el valor de la variable local. */
    printf("\n\nEl valor de la variable local es: %d", localK);

    K = K + localK; /* Uso de la variable global. */
    printf("\nEl valor de la variable global es: %d", K);
}
