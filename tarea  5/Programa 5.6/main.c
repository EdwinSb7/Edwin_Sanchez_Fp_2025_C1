#include <stdio.h>
#include <stdlib.h>


const int MAX = 100;  // Definir la constante para el tamaño del arreglo

// Prototipos de funciones
void Lectura(float *, int);
double Suma(float *, int);

int main(void) {
    float VEC[MAX];
    double RES;

    Lectura(VEC, MAX);
    RES = Suma(VEC, MAX);

    // Imprimir el resultado
    printf("\n\nSuma del cuadrado de los elementos: %.2lf\n", RES);

    return 0;
}

void Lectura(float A[], int T) {
    int I;
    printf("\n");

    for (I = 0; I < T; I++) {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%f", &A[I]);
    }
}

double Suma(float A[], int T) {
    int I;
    double AUX = 0.0;

    for (I = 0; I < T; I++) {
        AUX += pow(A[I], 2);
    }

    return AUX;
}
