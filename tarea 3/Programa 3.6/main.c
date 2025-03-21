#include <stdio.h>
#include <stdlib.h>


/* Suma pagos.
   El programa obtiene la suma de los pagos realizados el último mes.
   PAG y SPA: variables de tipo real.
*/

int main(void) // Se recomienda usar int main() en lugar de void main()
{
    float PAG, SPA = 0;

    printf("Ingrese el primer pago:\t");
    scanf("%f", &PAG);

    /* Al utilizar la estructura do-while, al menos se necesita un pago. */
    do
    {
        SPA = SPA + PAG;
        printf("Ingrese el siguiente pago (-0 para terminar):\t");
        scanf("%f", &PAG);
    }
    while (PAG != 0);

    printf("\nEl total de pagos del mes es: %.2f\n", SPA);

    return 0; // Se recomienda return 0 para indicar ejecución exitosa
}
