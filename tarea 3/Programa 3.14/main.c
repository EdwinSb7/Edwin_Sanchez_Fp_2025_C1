#include <stdio.h>
#include <stdlib.h>


/* Fibonacci.
   El programa calcula y escribe los primeros 50 numeros de Fibonacci.

   I, PRI, SEG, SIG: variables de tipo entero.
*/

int main(void)
{
    int I, PRI = 0, SEG = 1, SIG;

    // Imprime los dos primeros numeros de Fibonacci
    printf("\t%d \t%d", PRI, SEG);

    // Calcula y imprime los siguientes números de Fibonacci
    for (I = 3; I <= 50; I++)  // Comienza desde el tercer número
    {
        SIG = PRI + SEG;  // Calcula el siguiente numero
        PRI = SEG;        // El segundo numero se convierte en el primero
        SEG = SIG;        // El siguiente número se convierte en el segundo
        printf("\t%d", SIG);  // Imprime el siguiente numero
    }

    return 0;  // Termina el programa correctamente
}
