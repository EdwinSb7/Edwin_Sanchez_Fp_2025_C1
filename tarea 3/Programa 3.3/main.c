#include <stdio.h>
#include <stdlib.h>

/* Suma pagos.
   El programa, al recibir como datos un conjunto de pagos realizados en el último
   mes, obtiene la suma de los mismos.
   PAG y SPA: variables de tipo real.
*/

int main(void) // Se recomienda usar int main() en lugar de void main()
{
    float PAG, SPA;
    SPA = 0;

    printf("Ingrese el primer pago (0 para finalizar):\t");
    scanf("%f", &PAG);

    while (PAG != 0)
    /* La condición es verdadera mientras el pago sea diferente de cero. */
    {
        SPA = SPA + PAG;
        printf("Ingrese el siguiente pago (0 para finalizar):\t");
        scanf("%f", &PAG);
        /* La lectura de PAG permite modificar la condición del while. */
    }

    printf("\nEl total de pagos del mes es: %.2f\n", SPA);

    return 0; // Se recomienda return 0 para indicar ejecución exitosa
}
