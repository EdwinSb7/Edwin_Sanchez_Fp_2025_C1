#include <stdio.h>
#include <stdlib.h>


/* Prototipos de funciones. */
int f1(void);
int f2(void);
int f3(void);   /* Cambié el tipo de la función f3 a int */
int f4(void);

int K = 3;  /* Variable global. */

void main(void)
{
    int I;
    for (I = 1; I <= 3; I++)
    {
        printf("\nEl resultado de la función f1 es: %d", f1());
        printf("\nEl resultado de la función f2 es: %d", f2());
        printf("\nEl resultado de la función f3 es: %d", f3());
        printf("\nEl resultado de la función f4 es: %d", f4());
    }
}

int f1(void)
{
    /* La función f1 utiliza la variable global. */
    K += K;  /* Duplicamos el valor de la variable global */
    return K;  /* Regresa el valor de K */
}

int f2(void)
{
    /* La función f2 utiliza la variable local. */
    int K = 1;  /* Variable local */
    K++;        /* Incrementa la variable local K */
    return K;   /* Regresa el valor de K */
}

int f3(void)
{
    /* La función f3 utiliza la variable estática. */
    static int K = 8;  /* Variable estática, su valor persiste entre llamadas */
    K += 2;  /* Incrementa la variable estática K */
    return K;  /* Regresa el valor de K */
}

int f4(void)
{
    /* La función f4 utiliza dos variables con el mismo nombre: local y global. */
    int localK = 5;  /* Variable local con un nombre diferente */
    localK = localK + K;  /* Uso de la variable local (localK) y global (K) */
    return localK;  /* Regresa el valor de localK */
}
