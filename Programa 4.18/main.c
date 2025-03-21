#include <stdio.h>
#include <stdlib.h>


/* Expresion.
   El programa escribe los valores de T, P y Q que satisfacen una determinada expresion.*/

int Expresion(int T, int P, int Q);             /* Prototipo de funcion. */

void main(void)
{
    int EXP, T = 0, P = 0, Q = 0;

    EXP = Expresion(T, P, Q);
    while (EXP < 5500) {
        while (EXP < 5500) {
            while (EXP < 5500) {
                printf("\nT: %d,  P: %d,  Q: %d, Resultado: %d", T, P, Q, EXP);
                Q++; // Increment Q
                EXP = Expresion(T, P, Q); // Update EXP
            }
            P++;  // Increment P
            Q = 0; // Reset Q to 0
            EXP = Expresion(T, P, Q); // Update EXP
        }
        T++;  // Increment T
        P = 0; // Reset P to 0
        Q = 0; // Reset Q to 0
        EXP = Expresion(T, P, Q); // Update EXP
    }
}

int Expresion(int T, int P, int Q)
{
    /* Esta funci�n obtiene el resultado de la expresi�n para los valores de T, P y Q. */
    int RES;
    RES = 15 * pow(T, 4) + 12 * pow(P, 5) + 9 * pow(Q, 6);
    return RES;
}
