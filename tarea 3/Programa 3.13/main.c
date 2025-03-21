#include <stdio.h>
#include <stdlib.h>

/* Serie de ULAM.
   El programa, al recibir como dato un entero positivo, obtiene y escribe
   la serie de ULAM.

   NUM: variable de tipo entero.
*/

int main(void)
{
    int NUM;

    printf("Ingresa el número para calcular la serie: ");
    scanf("%d", &NUM);

    if (NUM > 0)
    {
        printf("\nSerie de ULAM\n");
        printf("%d \t", NUM);

        while (NUM != 1)
        {
            if (NUM % 2 == 0)  // Si el número es par
                NUM = NUM / 2;
            else  // Si el número es impar
                NUM = NUM * 3 + 1;

            printf("%d \t", NUM);
        }
    }
    else
    {
        printf("\nNUM debe ser un entero positivo");
    }

    return 0;  // Indicar que el programa termino correctamente
}
