#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int T, P, N;

    // Solicitar los valores al usuario
    printf("Ingrese los valores de T, P y N: ");
    scanf("%d %d %d", &T, &P, &N);

    // Verificar que P no sea cero para evitar divisiones por cero
    if (P != 0) {
        // Convertir a double antes de usar pow
        double left = pow((double)T / P, N);
        double right = pow(T, N) / pow(P, N);

        // Comparar los valores considerando posibles errores de precision con numeros flotantes
        if (fabs(left - right) < 1e-6) {
            printf("\nSe comprueba la igualdad");
        } else {
            printf("\nNo se comprueba la igualdad");
        }
    } else {
        printf("\nP tiene que ser diferente de cero");
    }

    return 0;
}
