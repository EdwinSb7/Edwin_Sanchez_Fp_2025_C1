#include <stdio.h>
#include <math.h>

int main(void) {
    int R, T, Q;
    double RES;

    // Solicitar los valores de R, T y Q
    printf("Ingrese los valores de R, T y Q: ");
    scanf("%d %d %d", &R, &T, &Q);

    // Calcular la expresion
    RES = pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2);

    // Verificar si el resultado es menor que 820
    if (RES < 820) {
        printf("\nR = %d\tT = %d\tQ = %d\n", R, T, Q);
    }

    return 0;
}
