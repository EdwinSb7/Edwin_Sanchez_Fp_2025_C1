#include <stdio.h>
#include <stdlib.h>

/* Estad�stico.
El programa, al recibir como dato un arreglo unidimensional de enteros
que contiene calificaciones, calcula la media, la varianza, la
desviaci�n est�ndar y la moda. */

const int MAX = 100;

void Lectura(int *, int);
float Media(int *, int);
float Varianza(int *, int, float);
float Desviacion(float);
void Frecuencia(int *, int, int *);
int Moda(int *, int);

int main(void) {
    int TAM, MOD, ALU[MAX], FRE[11] = {0};
    float MED, VAR, DES;

    do {
        printf("Ingrese el tama�o del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > MAX || TAM < 1);  /* Se verifica que el tama�o del arreglo sea correcto. */

    Lectura(ALU, TAM);
    MED = Media(ALU, TAM);
    VAR = Varianza(ALU, TAM, MED);
    DES = Desviacion(VAR);
    Frecuencia(ALU, TAM, FRE);
    MOD = Moda(FRE, 11);

    printf("\nMedia:      %.2f", MED);
    printf("\nVarianza:   %.2f", VAR);
    printf("\nDesviaci�n: %.2f", DES);
    printf("\nModa:       %d", MOD);

    return 0;
}

void Lectura(int A[], int T) {
    /* La funcion Lectura se utiliza para leer un arreglo unidimensional de T elementos de tipo entero. */
    int I;
    for (I = 0; I < T; I++) {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

float Media(int A[], int T) {
    /* Esta funcion se utiliza para calcular la media. */
    int I;
    float SUMA = 0.0;
    for (I = 0; I < T; I++) {
        SUMA += A[I];
    }
    return SUMA / T;
}

float Varianza(int A[], int T, float M) {
    /* Esta funci�n se utiliza para calcular la varianza. */
    int I;
    float SUMA = 0.0;
    for (I = 0; I < T; I++) {
        SUMA += pow(A[I] - M, 2);
    }
    return SUMA / T;
}

float Desviacion(float V) {
    /* Esta funci�n se utiliza para calcular la desviaci�n est�ndar. */
    return sqrt(V);
}

void Frecuencia(int A[], int P, int B[]) {
    /* Esta funci�n se utiliza para calcular la frecuencia de calificaciones. */
    int I;
    for (I = 0; I < P; I++) {
        if (A[I] >= 0 && A[I] <= 10) {
            B[A[I]]++;
        }
    }
}

int Moda(int A[], int T) {
    /* Esta funci�n se utiliza para calcular la moda. */
    int I, MOD = 0, VAL = A[0];
    int MAX_FREQ = 0;
    for (I = 0; I < T; I++) {
        if (A[I] > MAX_FREQ) {
            MAX_FREQ = A[I];
            MOD = I;
        }
    }
    return MOD;
}
