#include <stdio.h>
#include <stdlib.h>


/* Funciones y parámetros. */
int F1(int, int *);              /* Prototipo de función. */

int A = 3;
int B = 7;
int C = 4;                       /* Variables globales. */
int D = 2;

void main(void)
{
    A = F1(C, &D);
    printf("\n%d %d %d %d", A, B, C, D);

    C = 3;  // Resetting C to 3
    C = F1(A, &C);
    printf("\n%d %d %d %d", A, B, C, D);
}

int F1(int X, int *Y)
{
    int A;
    A = X * (*Y);  // Multiply X with value of *Y
    C++;            // Increment the global C
    B += *Y;        // Add value of *Y to global B
    printf("\n%d %d %d %d", A, B, C, D);

    (*Y)--;  // Decrement the value of *Y
    return C;  // Return global C
}
