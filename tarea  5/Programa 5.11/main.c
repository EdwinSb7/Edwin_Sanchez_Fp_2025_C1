#include <stdio.h>
#include <stdlib.h>
#define MAX 100


// Prototipos de funciones
void Lectura(int[], int);
int Binaria(int[], int, int);

int main(void) {
    int RES, ELE, TAM, VEC[MAX];

    // Validación del tamaño del arreglo
    do {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > MAX || TAM < 1);

    Lectura(VEC, TAM);

    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);

    RES = Binaria(VEC, TAM, ELE); // Llamada a la función de búsqueda binaria

    if (RES != -1)
        printf("\nEl elemento se encuentra en la posición: %d", RES);
    else
        printf("\nEl elemento no se encuentra en el arreglo");

    return 0;
}

void Lectura(int A[], int T) {
    int I;
    for (I = 0; I < T; I++) {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

int Binaria(int A[], int T, int E) {
    int IZQ = 0, DER = T - 1, CENTRO;

    while (IZQ <= DER) {
        CENTRO = (IZQ + DER) / 2;

        if (A[CENTRO] == E)
            return CENTRO; // Retorna la posición estándar (índice base 0)

        if (A[CENTRO] < E)
            IZQ = CENTRO + 1;
        else
            DER = CENTRO - 1;
    }

    return -1; // Retorna -1 si el elemento no se encuentra
}
