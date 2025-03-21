#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int MAT, CAR, SEM;
    float PRO;

    // Solicitar datos del estudiante
    printf("Ingrese matricula: ");
    scanf("%d", &MAT);

    printf("Ingrese carrera (1-Industrial 2-Telematica 3-Computacion 4-Mecanica): ");
    scanf("%d", &CAR);

    printf("Ingrese semestre: ");
    scanf("%d", &SEM);

    printf("Ingrese promedio: ");
    scanf("%f", &PRO);

    // Evaluar si el estudiante puede ser asistente según su carrera y requisitos
    switch(CAR) {
        case 1: // Industrial
            if (SEM >= 6 && PRO >= 8.5) {
                printf("\n%d %d %5.2f - Puede ser asistente\n", MAT, CAR, PRO);
            } else {
                printf("\n%d %d %5.2f - No cumple los requisitos\n", MAT, CAR, PRO);
            }
            break;

        case 2: // Telematica
            if (SEM >= 5 && PRO >= 9.0) {
                printf("\n%d %d %5.2f - Puede ser asistente\n", MAT, CAR, PRO);
            } else {
                printf("\n%d %d %5.2f - No cumple los requisitos\n", MAT, CAR, PRO);
            }
            break;

        case 3: // Computacion
            if (SEM >= 6 && PRO >= 8.8) {
                printf("\n%d %d %5.2f - Puede ser asistente\n", MAT, CAR, PRO);
            } else {
                printf("\n%d %d %5.2f - No cumple los requisitos\n", MAT, CAR, PRO);
            }
            break;

        case 4: // Mecanica
            if (SEM >= 7 && PRO >= 9.0) {
                printf("\n%d %d %5.2f - Puede ser asistente\n", MAT, CAR, PRO);
            } else {
                printf("\n%d %d %5.2f - No cumple los requisitos\n", MAT, CAR, PRO);
            }
            break;

        default:
            printf("\nError en la carrera\n");
            break;
    }

    return 0;
}

