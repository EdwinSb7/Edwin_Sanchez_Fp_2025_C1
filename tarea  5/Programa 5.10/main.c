#include <stdio.h>
#include <stdlib.h>
#define MAX 100


// Prototipos de funciones
void Lectura(int[], int);
int Busca(int[], int, int);

int main(void) {
    int RES, ELE, TAM, VEC[MAX];

    // Validaci�n del tama�o del arreglo
    do {
        printf("Ingrese el tama�o del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > MAX || TAM < 1);

    Lectura(VEC, TAM);

    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);

    RES = Busca(VEC, TAM, ELE); // Llamada a la funci�n de b�squeda

    if (RES != -1)
        printf("\nEl elemento se encuentra en la posici�n: %d", RES);
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

int Busca(int A[], int T, int E) {
    int I = 0;
    while (I < T && A[I] <= E) {  // Optimizaci�n: detenerse si E es menor que A[I] (arreglo ordenado)
        if (A[I] == E)
            return I; // Retorna la posici�n est�ndar (�ndice base 0)
        I++;
    }
    return -1; // Retorna -1 si el elemento no se encuentra
}
