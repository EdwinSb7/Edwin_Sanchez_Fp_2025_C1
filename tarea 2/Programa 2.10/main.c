#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int NUM;

    // Solicitar el numero al usuario
    printf("Ingrese el n�mero: ");
    scanf("%d", &NUM);

    // Comprobar si el n�mero es nulo, par o impar
    if (NUM == 0) {
        printf("\nNulo");
    } else if (NUM % 2 == 0) {
        printf("\nPar");
    } else {
        printf("\nImpar");
    }

    return 0;
}
