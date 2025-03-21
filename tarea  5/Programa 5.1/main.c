#include <stdio.h>
#define CANT 5


void main(void)
{
    int I, NUM, CUE = 0;
    int ARRE[5]; /* Declaraci�n del arreglo */

    // Leer los 5 elementos del arreglo
    for (I = 0; I < 5; I++)
    {
        printf("Ingrese el elemento %d del arreglo: ", I + 1);
        scanf("%d", &ARRE[I]); /* Lectura - asignaci�n del arreglo */
    }

    // Solicitar el n�mero que se va a buscar
    printf("\n\nIngrese el n�mero que se va a buscar en el arreglo: ");
    scanf("%d", &NUM);

    // Comparar el n�mero con los elementos del arreglo
    for (I = 0; I < 5; I++)
    {
        if (ARRE[I] == NUM) /* Si el n�mero se encuentra en el arreglo */
        {
            CUE++;
        }
    }

    // Mostrar cu�ntas veces se encuentra el n�mero
    printf("\n\nEl %d se encuentra %d veces en el arreglo", NUM, CUE);
}
