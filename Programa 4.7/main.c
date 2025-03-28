#include <stdio.h>
#include <stdlib.h>


/* Prueba de parametros por valor. */
int f1(int);  /* Prototipo de funci�n. El parametro es por valor y de tipo entero. */

void main(void)
{
    int I, K = 4;
    for (I = 1; I <= 3; I++)
    {
        printf("\n\nValor de K antes de llamar a la funcion: %d", ++K);
        printf("\nValor de K despu�s de llamar a la funci�n: %d", f1(K));
        /* Llamada a la funcion f1. Se pasa una copia de la variable K. */
    }
}

int f1(int R)
{
    R += R;  /* R se duplica, pero solo afecta a la copia local de K. */
    return R;
}
