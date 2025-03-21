#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float PRO;

    // Solicitar el promedio del alumno
    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &PRO);

    // Determinar si el alumno aprueba o reprueba
    if (PRO >= 6.0)
        printf("\nAprobado\n");
    else
        printf("\nReprobado\n");

    return 0;
}
