#include <stdio.h>
#include <stdlib.h>


int main(void) {
    float PRO;

    // Solicita al usuario que ingrese el promedio de un alunmo en un curso universitario, escribe aprobado si promedio es mayor o igual a 6.
    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &PRO);

    if (PRO >= 6) {
        printf("\nAprobado\n");
    } else {
        printf("\nReprobado\n");
    }

    return 0;
}


