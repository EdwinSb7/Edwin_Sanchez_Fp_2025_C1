#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int CLA, TIE;
    float COS;

    // Solicitar la clave y el tiempo de llamada
    printf("Ingresa la clave y el tiempo en segundos: ");
    scanf("%d %d", &CLA, &TIE);

    // Calcular el costo segun la clave
    switch(CLA) {
        case 1:  COS = (float)TIE * 0.13 / 60; break;
        case 2:  COS = (float)TIE * 0.11 / 60; break;
        case 5:  COS = (float)TIE * 0.22 / 60; break;
        case 6:  COS = (float)TIE * 0.19 / 60; break;
        case 7:
        case 9:  COS = (float)TIE * 0.17 / 60; break;
        case 10: COS = (float)TIE * 0.20 / 60; break;
        case 15: COS = (float)TIE * 0.39 / 60; break;
        case 20: COS = (float)TIE * 0.28 / 60; break;
        default: COS = -1; break; // Manejo de error para claves inválidas
    }

    // Imprimir el resultado
    if (COS != -1) {
        printf("\n\nClave: %d\tTiempo: %d seg\tCosto: $%8.2f\n", CLA, TIE, COS);
    } else {
        printf("\nError: Clave inválida\n");
    }

    return 0;
}
