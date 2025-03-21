#include <stdio.h>
#include <math.h>

int main(void) {
    int OP, T;
    float RES;

    // Solicitar la opcion y el valor entero
    printf("Ingrese la opcion del calculo y el valor entero: ");
    scanf("%d %d", &OP, &T);

    // Evaluar la opci�n ingresada
    switch(OP) {
        case 1:
            RES = (float)T / 5;  // Se usa conversi�n a float para evitar divisi�n entera
            break;
        case 2:
            RES = pow(T, T);  // Potencia T^T
            break;
        case 3:
        case 4:
            RES = (6 * T) / 2;  // Correcci�n en la precedencia de operadores
            break;
        default:
            RES = 1;  // Valor por defecto
            break;
    }

    // Mostrar el resultado con dos decimales
    printf("\nResultado: %.2f\n", RES);

    return 0;
}
