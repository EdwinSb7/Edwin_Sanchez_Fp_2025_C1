#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float X;
    int Y;

    // Solicitar el valor de Y
    printf("Ingrese el valor de Y: ");
    scanf("%d", &Y);

    // Evaluar la funcion segun el valor de Y
    if (Y < 0 || Y > 50) {
        X = 0;
    } else if (Y <= 10) {
        X = 4.0 / Y - Y;  // Se usa 4.0 para evitar division entera
    } else if (Y <= 25) {
        X = pow(Y, 3) - 12;
    } else {
        X = pow(Y, 2) + pow(Y, 3) - 18;  // Se usa '-' correcto
    }

    // Mostrar el resultado
    printf("\n\nY = %d\tX = %8.2f\n", Y, X);

    return 0;
}

