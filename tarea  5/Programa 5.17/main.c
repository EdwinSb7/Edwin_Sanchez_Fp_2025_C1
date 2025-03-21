#include <stdio.h>
#include <stdlib.h>


/* Apuntadores y arreglos */
void main(void) {
    int V1[4] = {1, 3, 5, 7}, V2[4] = {2, 4};
    int *AX, *AY;

    AX = &V1[2];  // AX apunta a V1[2]
    AY = &V2[2];  // AY apunta a V2[2], que no está inicializado

    V2[2] = *(AX + 1);  // V2[2] toma el valor de V1[3] (5 + 1 = 6)
    V2[3] = *AX;        // V2[3] toma el valor de V1[2] (5)

    AX = AX + 1;  // AX se mueve a V1[3]
    V1[0] = *AX;  // V1[0] toma el valor de V1[3] (7)

    // Primer printf: muestra los valores de V1 y V2 después de las primeras manipulaciones
    printf("\nV1[0]=%d V1[1]=%d V1[2]=%d V1[3]=%d \tV2[0]=%d V2[1]=%d V2[2]=%d V2[3]=%d",
           V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);

    V1[2] = *AY;      // V1[2] toma el valor de V2[2] (no se ha asignado un valor previamente, por lo que puede ser un valor basura)
    V1[1] = --*AY;    // V2[2] se decrementa y se asigna a V1[1]
    AX = AX + 1;      // AX se mueve a V1[4], fuera de los límites del arreglo, lo cual es peligroso
    V1[3] = *AX;      // Asigna el valor de lo que AX apunta (que puede estar fuera de los límites)

    // Segundo printf: muestra los valores de V1 y V2 después de las segundas manipulaciones
    printf("\nV1[0]=%d V1[1]=%d V1[2]=%d V1[3]=%d \tV2[0]=%d V2[1]=%d V2[2]=%d V2[3]=%d",
           V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);
}
