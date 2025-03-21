#include <stdio.h>
#include <stdlib.h>


/* Pares e impares.
   El programa, al recibir como datos N numeros enteros, calcula cuantos
   de ellos son pares y cuántos impares, con la ayuda de una funcion. */
void parimp(int NUM, int *P, int *I);  // Prototipo de función.

void main(void)
{
    int I, N, NUM, PAR = 0, IMP = 0;
    printf("Ingresa el numero de datos: ");
    scanf("%d", &N);
    for (I = 1; I <= N; I++)
    {
        printf("Ingresa el numero %d:", I);
        scanf("%d", &NUM);
        parimp(NUM, &PAR, &IMP);  // Llamada a la funcion. Paso de parametros por valor y por referencia.
    }
    printf("\nNumero de pares: %d", PAR);
    printf("\nNúmero de impares: %d", IMP);
}

void parimp(int NUM, int *P, int *I)
{
    /* La funcion incrementa el parametro *P o *I, según sea el numero par o impar. */
    if (NUM % 2 == 0)
        *P += 1;  // Incrementa los pares
    else
        *I += 1;  // Incrementa los impares
}
