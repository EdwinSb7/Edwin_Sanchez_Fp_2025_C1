#include <stdio.h>
#include <stdlib.h>

/* Lanzamiento de martillo.
   El programa, al recibir como dato N lanzamientos de martillo, calcula el promedio
   de los lanzamientos de la atleta cubana.

   I, N: variables de tipo entero.
   LAN, SLA: variables de tipo real.
*/

int main(void)
{
    int I, N;
    float LAN, SLA = 0;

    // Verificar que el número de lanzamientos sea válido (entre 1 y 11).
    do
    {
        printf("Ingrese el número de lanzamientos (entre 1 y 11):\t");
        scanf("%d", &N);
    }
    while (N < 1 || N > 11);  // Corrección del operador OR `||`.

    // Leer los N lanzamientos.
    for (I = 1; I <= N; I++)
    {
        printf("\nIngrese el lanzamiento %d: ", I);
        scanf("%f", &LAN);
        SLA = SLA + LAN;
    }

    // Calcular el promedio de lanzamientos.
    SLA = SLA / N;

    printf("\nEl promedio de lanzamientos es: %.2f\n", SLA);

    return 0;  // Se recomienda return 0 para indicar ejecución exitosa.
}
