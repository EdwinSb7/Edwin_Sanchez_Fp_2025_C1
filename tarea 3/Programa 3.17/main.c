#include <stdio.h>
#include <stdlib.h>


/* Numeros perfectos.
El programa, al recibir como dato un n�mero entero positivo como l�mite, obtiene
los numeros perfectos que hay entre 1 y ese n�mero, y ademas imprime cu�ntos numeros perfectos hay en el intervalo.
I, J, NUM, SUM, C: variables de tipo entero. */

int main(void)
{
    int I, J, NUM, SUM, C = 0;
    printf("\nIngrese el numero l�mite: ");
    scanf("%d", &NUM);

    for (I = 1; I <= NUM; I++)  // Recorrer desde 1 hasta NUM
    {
        SUM = 0;
        for (J = 1; J <= (I / 2); J++)  // Recorrer hasta la mitad de I
        {
            if ((I % J) == 0)  // Verificar si J es divisor de I
                SUM += J;
        }

        if (SUM == I)  // Si la suma de divisores es igual a I, es un numero perfecto
        {
            printf("\n%d es un numero perfecto", I);
            C++;  // Contar los numeros perfectos
        }
    }

    printf("\nEntre 1 y %d hay %d numeros perfectos",
