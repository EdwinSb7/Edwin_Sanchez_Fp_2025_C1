#include <stdio.h>
#include <stdlib.h>
#define TAM 100


// Prototipos de funciones
void Imprime(int[], int);
void Primo(int, int *);

int main(void) {
    int P[TAM] = {2};  // Solo inicializamos con el primer primo
    int FLA, J = 1, PRI = 3;

    while (J < TAM) {
        FLA = 1;
        Primo(PRI, &FLA);  // Llamada a la función que determina si PRI es primo
        if (FLA) {
            P[J] = PRI;
            J++;
        }
        PRI += 2;  // Saltamos los números pares
    }

    Imprime(P, TAM);
    return 0;
}

void Primo(int A, int *B) {
    int DI = 3;
    while (*B && (DI <= sqrt(A))) {  // Optimización usando raíz cuadrada
        if ((A % DI) == 0)
            *B = 0;
        DI += 2;  // Solo revisamos números impares
    }
}

void Imprime(int Primos[], int T) {
    int I;
    for (I = 0; I < T; I++)
        printf("Primos[%d]: %d\n", I, Primos[I]);
}
