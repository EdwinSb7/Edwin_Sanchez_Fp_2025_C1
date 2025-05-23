#include <stdio.h>
#include <stdlib.h>


/* Combinacion de variables globales y locales, y parametros por valor y por referencia. */
int a, b, c, d;  /* Variables globales. */

void funcion1(int *, int *);  /* Prototipo de funcion. Los dos paranetros son por referencia. */
int funcion2(int, int *);     /* En este prototipo el primer parámetro es por valor y el segundo por referencia. */

void main(void)
{
    int a;  /* Nota que a es una variable local. */
    a = 1;  /* Se asigna un valor a la variable local a. */
    b = 2;  /* Se asignan valores a las variables globales b, c y d. */
    c = 3;
    d = 4;

    printf("\n%d %d %d %d", a, b, c, d);
    funcion1(&b, &c);  /* Llamada a funcion1, pasando direcciones de b y c. */
    printf("\n%d %d %d %d", a, b, c, d);

    a = funcion2(c, &d);  /* Llamada a funcion2, pasando c por valor y d por referencia. */
    printf("\n%d %d %d %d", a, b, c, d);
}

void funcion1(int *b, int *c)
{
    int d;  /* Variable local. */
    a = 5;  /* Referencia a la variable global a. */
    d = 3;  /* Variable local d. */
    (*b)++;  /* Incrementa el valor de b. */
    (*c) += 2;  /* Incrementa el valor de c en 2. */
    printf("\n%d %d %d %d", a, *b, *c, d);  /* Muestra los valores de a, b, c, y d. */
}

int funcion2(int c, int *d)
{
    int b;
    a++;  /* Incrementa el valor de la variable global a. */
    b = 7;  /* Asigna 7 a la variable local b. */
    c += 3;  /* Incrementa el valor de c en 3. */
    (*d) += 2;  /* Incrementa el valor de d en 2. */
    printf("\n%d %d %d %d", a, b, c, *d);  /* Muestra los valores de a, b, c, y d. */
    return c;  /* Devuelve el valor de c. */
}

