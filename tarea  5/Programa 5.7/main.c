#include <stdio.h>
#include <stdlib.h>


// Prototipos de funciones
void Lectura(int *, int);
void Imprime(int *, int);
void Elimina(int *, int *);

int main(void) {
    int TAM, ARRE[100];

    // Validar tamaño del arreglo
    do {
        printf("Ingrese el tamaño del arreglo (1-100): ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1);

    Lectura(ARRE, TAM);
    Elimina(ARRE, &TAM);
    Imprime(ARRE, TAM);

    return 0;
}

void Lectura(int A[], int T) {
    int I;
    printf("\n");
    for (I = 0; I < T; I++) {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

void Imprime(int A[], int T) {
    int I;
    printf("\nArreglo sin elementos repetidos:\n");
    for (I = 0; I < T; I++)
        printf("A[%d]: %d\n", I, A[I]);
}

void Elimina(int A[], int *T) {
    int I, K, L;
    I = 0;

    while (I < (*T - 1)) {
        K = I + 1;
        while (K < *T) {
            if (A[I] == A[K]) {
                // Desplazar los elementos a la izquierda
                for (L = K; L < (*T - 1); L++) {
                    A[L] = A[L + 1];
                }
                (*T)--; // Reducir el tamaño del arreglo
            } else {
                K++; // Solo avanzar si no hubo eliminación
            }
        }
        I++;
    }
}
