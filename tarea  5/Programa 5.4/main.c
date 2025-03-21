#include <stdio.h>
#include <stdlib.h>
#define MAX 10


// Prototipos de funciones
void Lectura(int VEC[], int T);
void Imprime(int VEC[], int T);
void Producto(int *X, int *Y, int *Z, int T);

int main(void) {
    int VE1[MAX], VE2[MAX], VE3[MAX];

    // Lectura de los dos vectores
    Lectura(VE1, MAX);
    Lectura(VE2, MAX);

    // Producto de los vectores
    Producto(VE1, VE2, VE3, MAX);

    // Imprimir resultado
    printf("\nProducto de los Vectores");
    Imprime(VE3, MAX);

    return 0;
}

void Lectura(int VEC[], int T) {
    int I;
    printf("\n");
    for (I = 0; I < T; I++) {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &VEC[I]);
    }
}

void Imprime(int VEC[], int T) {
    int I;
    for (I = 0; I < T; I++) {
        printf("\nVEC[%d]: %d", I + 1, VEC[I]);
    }
    printf("\n");
}

void Producto(int *X, int *Y, int *Z, int T) {
    int I;
    for (I = 0; I < T; I++) {
        Z[I] = X[I] * Y[I];
    }
}
