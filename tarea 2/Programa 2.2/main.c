#include <stdio.h>
#include <stdlib.h>


int main(void) {
    float PRE, NPR;

    // Solicitar el precio del producto al usuario
    printf("Ingrese el precio del producto: ");
    scanf("%f", &PRE);

    // Aplicar el incremento del 11% si el precio es menor a $1500
    if (PRE < 1500) {
        NPR = PRE * 1.11;
        printf("\nNuevo precio con incremento: %.2f\n", NPR);
    } else {
        NPR = PRE; // No se aplica incremento
        printf("\nEl precio se mantiene: %.2f\n", NPR);
    }

    return 0;
}
