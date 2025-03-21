#include <stdio.h>
#include <stdlib.h>


/* Serie.
   El programa imprime los terminos y obtiene la suma de una determinada serie.

   I, SSE y CAM: variable de tipo entero.
*/

int main(void)
{
    int I = 2, CAM = 1;
    long SSE = 0;

    while (I <= 2500)
    {
        SSE = SSE + I;
        printf("\t%d", I);  // Imprime el termino de la serie

        if (CAM)
        {
            I += 5;
            CAM--;
        }
        else
        {
            I += 3;
            CAM++;
        }
    }

    printf("\nLa suma de la serie es: %ld\n", SSE);

    return 0;  // Indicar que el programa termino correctamente
}
