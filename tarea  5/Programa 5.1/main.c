#include <stdio.h>
#define CANT 5


void main(void)
{
    int I, NUM, CUE = 0;
    int ARRE[5]; /* Declaración del arreglo */

    // Leer los 5 elementos del arreglo
    for (I = 0; I < 5; I++)
    {
        printf("Ingrese el elemento %d del arreglo: ", I + 1);
        scanf("%d", &ARRE[I]); /* Lectura - asignación del arreglo */
    }

    // Solicitar el número que se va a buscar
    printf("\n\nIngrese el número que se va a buscar en el arreglo: ");
    scanf("%d", &NUM);

    // Comparar el número con los elementos del arreglo
    for (I = 0; I < 5; I++)
    {
        if (ARRE[I] == NUM) /* Si el número se encuentra en el arreglo */
        {
            CUE++;
        }
    }

    // Mostrar cuántas veces se encuentra el número
    printf("\n\nEl %d se encuentra %d veces en el arreglo", NUM, CUE);
}
