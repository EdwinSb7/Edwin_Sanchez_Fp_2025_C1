#include <stdio.h>
#include <stdlib.h>


/* Rango de calificaciones.
   El programa, al recibir como dato una serie de calificaciones, obtiene
   el rango en el que se encuentran. */

void Rango(float);  /* Prototipo de función. */

int RA1 = 0;  /* Variables globales de tipo entero. */
int RA2 = 0;
int RA3 = 0;
int RA4 = 0;
int RA5 = 0;

void main(void)
{
    float CAL;

    // Solicitar la primera calificacion
    printf("Ingresa la primera calificacion del alumno: ");
    scanf("%f", &CAL);

    while (CAL != -1)  // El ciclo continua hasta que se ingrese -1
    {
        Rango(CAL);  // Llamada a la funcion Rango. Se pasa un parámetro por valor.

        // Solicitar la siguiente calificacion
        printf("Ingresa la siguiente calificacion del alumno: ");
        scanf("%f", &CAL);
    }

    // Mostrar los resultados
    printf("\n0..3.99 = %d", RA1);
    printf("\n4..5.99 = %d", RA2);
    printf("\n6..7.99 = %d", RA3);
    printf("\n8..8.99 = %d", RA4);
    printf("\n9..10 = %d", RA5);
}

void Rango(float VAL)
{
    /* La funcion incrementa una variable dependiendo del valor del parametro VAL. */

    if (VAL < 4)
        RA1++;  // 0..3.99
    else if (VAL < 6)
        RA2++;  // 4..5.99
    else if (VAL < 8)
        RA3++;  // 6..7.99
    else if (VAL < 9)
        RA4++;  // 8..8.99
    else
        RA5++;  // 9..10
}
