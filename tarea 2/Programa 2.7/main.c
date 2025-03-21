#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float P, S, R;

    // Solicitar las ventas de los tres vendedores
    printf("Ingrese las ventas de los tres vendedores: ");
    scanf("%f %f %f", &P, &S, &R);

    // Comparar las ventas y ordenarlas en orden descendente
    if (P >= S && P >= R) {
        if (S >= R)
            printf("\nEl orden es P, S, R: %.2f %.2f %.2f\n", P, S, R);
        else
            printf("\nEl orden es P, R, S: %.2f %.2f %.2f\n", P, R, S);
    }
    else if (S >= P && S >= R) {
        if (P >= R)
            printf("\nEl orden es S, P, R: %.2f %.2f %.2f\n", S, P, R);
        else
            printf("\nEl orden es S, R, P: %.2f %.2f %.2f\n", S, R, P);
    }
    else {
        if (P >= S)
            printf("\nEl orden es R, P, S: %.2f %.2f %.2f\n", R, P, S);
        else
            printf("\nEl orden es R, S, P: %.2f %.2f %.2f\n", R, S, P);
    }

    return 0;
}
