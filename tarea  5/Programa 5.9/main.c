#include <stdio.h>
#include <stdlib.h>
#define MAX 100


// Prototipos de funciones
void Lectura(int[], int);
int Busca(int[], int, int);

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

    RES = Busca(VEC, TAM, ELE); // Llamada a la función de búsqueda

    if (RES != -1)
        printf("\nEl elemento se encuentra en la posición %d", RES);
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

int Busca(int A[], int T, int K) {
    int I;
    for (I = 0; I < T; I++) {
        if (A[I] == K)
            return I; // Retorna la posición real del elemento (índice base 0)
    }
    return -1; // Retorna -1 si el elemento no se encuentra
}
