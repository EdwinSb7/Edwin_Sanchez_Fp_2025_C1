#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int TRA, EDA, DIA;
    float COS;

    // Solicitar los datos del usuario
    printf("Ingrese tipo de tratamiento, edad y dias: ");
    scanf("%d %d %d", &TRA, &EDA, &DIA);

    // Determinar el costo base del tratamiento según el tipo
    switch(TRA) {
        case 1: COS = DIA * 2800; break;
        case 2: COS = DIA * 1950; break;
        case 3: COS = DIA * 2500; break;
        case 4: COS = DIA * 1150; break;
        default: COS = -1; break; // Manejo de error para clave incorrecta
    }

    // Verificar si la clave del tratamiento es valida
    if (COS != -1) {
        // Aplicar descuento segun la edad
        if (EDA >= 60)
            COS *= 0.75;  // Descuento del 25%
        else if (EDA <= 25)
            COS *= 0.85;  // Descuento del 15%

        // Imprimir el resultado
        printf("\nClave tratamiento: %d\tDias: %d\tCosto total: $%.2f\n", TRA, DIA, COS);
    } else {
        printf("\nError: La clave del tratamiento es incorrecta.\n");
    }

    return 0;
}
