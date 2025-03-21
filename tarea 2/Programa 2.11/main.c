#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int DIS, TIE;
    float BIL;

    // Solicitar la distancia y el tiempo de estancia
    printf("Ingrese la distancia entre ciudades y el tiempo de estancia: ");
    scanf("%d %d", &DIS, &TIE);

    // Calcular el costo del billete
    if ((DIS * 2 > 500) && (TIE > 10)) {
        BIL = DIS * 2 * 0.19 * 0.8;  // Descuento aplicado
    } else {
        BIL = DIS * 2 * 0.19;  // Sin descuento
    }

    // Mostrar el costo del billete
    printf("\n\nCosto del billete: %7.2f", BIL);

    return 0;
}
