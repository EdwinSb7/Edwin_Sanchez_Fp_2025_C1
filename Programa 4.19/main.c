#include <stdio.h>
#include <stdlib.h>


/* Funciones y parámetros. */
int a, b, c, d;                    /* Variables globales. */

void funcion1(int, int *, int *);    /* Prototipo de función */
int funcion2(int *, int);

void main(void)
{
    int a;
    a = 1;
    b = 2;
    c = 3;
    d = 4;

    printf("\n%d %d %d %d", a, b, c, d);

    // Call funcion2 and update the value of a
    a = funcion2(&a, c);

    printf("\n%d %d %d %d", a, b, c, d);
}

void funcion1(int r, int *b, int *c)
{
    int d;
    a = *c;    // Assign *c to global variable a
    d = a + 3 + *b;

    if (r)  // If r is non-zero
    {
        *b = *b + 2;
        *c = *c + 3;
        printf("\n%d %d %d %d", a, *b, *c, d);
    }
    else  // If r is zero
    {
        *b = *b + 5;
        *c = *c + 4;
        printf("\n%d %d %d %d", a, *b, *c, d);
    }
}

int funcion2(int *d, int c)
{
    int b;
    a = 1;
    b = 7;

    // Call funcion1
    funcion1(-1, d, &b);

    printf("\n%d %d %d %d", a, b, c, *d);

    c += 3;
    (*d) += 2;

    printf("\n%d %d %d %d", a, b, c, *d);

    return c;  // Return the updated value of c
}
