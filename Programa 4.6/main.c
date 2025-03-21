#include <stdio.h>
#include <stdlib.h>

/* Prueba de parametros por referencia. */
void f1(int *);  /* Prototipo de funcion. El par�metro es de tipo entero y por referencia. */

void main(void)
{
    int I, K = 4;
    for (I = 1; I <= 3; I++)
    {
        printf("\n\nValor de K antes de llamar a la funcion: %d", K);
        f1(&K);  /* Llamada a la funcion f1. Se pasa la direcci�n de la variable K, por medio del operador de direccion (&). */
        printf("\nValor de K despu�s de llamar a la funci�n: %d", K);
    }
}

void f1(int *R)  /* La funcion f1 recibe un parametro por referencia. */
{
    *R += *R;  /* Doble el valor de K dentro de la funcion. */
}
