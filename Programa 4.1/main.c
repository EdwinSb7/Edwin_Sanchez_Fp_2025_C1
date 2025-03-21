#include <stdio.h>
#include <stdlib.h>

/* Prototipo de la funcion. */
int cubo(int x);   /* Se pasa `I` como parametro. */

void main(void)
{
    int CUB;
    for (int I = 1; I <= 10; I++)  /* Usamos una variable local `I` */
    {
        CUB = cubo(I);  /* Llamamos a la funcion cubo con `I` como parametro. */
        printf("\nEl cubo de %d es:  %d", I, CUB);  /* Imprimimos el resultado en `main`. */
    }
}

/* La funcion calcula el cubo de un número pasado como parametro. */
int cubo(int x)
{
    return (x * x * x);
}
