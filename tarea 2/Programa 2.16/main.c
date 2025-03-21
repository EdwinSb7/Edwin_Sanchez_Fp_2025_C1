#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int CLA, CAT, ANT, RES = 0; // Inicializar RES en 0

    // Solicitar datos al usuario
    printf("\nIngrese la clave, categoria y antiguedad del trabajador: ");
    scanf("%d %d %d", &CLA, &CAT, &ANT);

    // Evaluar la categoria y antiguedad
    switch (CAT) {
        case 3:
        case 4:
            if (ANT >= 5) RES = 1;
            break;
        case 2:
            if (ANT >= 7) RES = 1;
            break;
        default:
            RES = 0;
            break;
    }

    // Mostrar resultado
    if (RES)
        printf("\nEl trabajador con clave %d reune las condiciones para el puesto.\n", CLA);
    else
        printf("\nEl trabajador con clave %d no reune las condiciones para el puesto.\n", CLA);

    return 0;
}
