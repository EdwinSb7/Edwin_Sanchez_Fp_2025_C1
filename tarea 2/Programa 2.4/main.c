#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float PRE, NPR;

    // Solicitar el precio del producto
    printf("Ingrese el precio del producto: ");
    scanf("%f", &PRE);

    // Aplicar el incremento según el precio ingresado
    if (PRE < 1500)
        NPR = PRE * 1.11;  // Incremento del 11% si es menor a $1500
    else
        NPR = PRE * 1.08;  // Incremento del 8% si es $1500 o más

    // Mostrar el nuevo precio
    printf("\nNuevo precio del producto: %.2f\n", NPR);

    return 0;
}
