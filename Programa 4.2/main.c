#include <stdio.h>
#include <stdlib.h>


/* Prototipo de la funcion. */
int cubo(void); /* La función no recibe parametros. */

int I; /* Variable global. */

void main(void)
{
    int CUB;
    for (I = 1; I <= 10; I++)  /* Iteracion de 1 a 10 */
    {
        CUB = cubo();  /* Llamada a la funcion cubo. */
        printf("\nEl cubo de %d es:  %d", I, CUB);
    }
}

/* La funcion calcula el cubo de la variable global I. */
int cubo(void)
{
    return (I * I * I);  /* Calcula el cubo de I */
}
