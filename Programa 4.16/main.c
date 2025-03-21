#include <stdio.h>
#include <stdlib.h>


/* Temperaturas.
   El programa recibe como datos 24 números reales que representan las
   temperaturas en el exterior en un período de 24 horas. Calcula el
   promedio del día y las temperaturas máxima y mínima con la hora en la
   que se registraron. */

void Acutem(float);           /* Prototipos de funciones. */
void Maxima(float, int);
void Minima(float, int);

float ACT = 0.0;             /* Variable para acumular temperaturas. */
float MAX = -50.0;           /* Variable para la temperatura máxima. */
float MIN = 60.0;            /* Variable para la temperatura mínima. */
int HMAX;                    /* Hora en que se registró la temperatura máxima. */
int HMIN;                    /* Hora en que se registró la temperatura mínima. */

void main(void)
{
    float TEM;
    int I;

    for (I = 1; I <= 24; I++) {
        printf("Ingresa la temperatura de la hora %d: ", I);
        scanf("%f", &TEM);
        Acutem(TEM);       /* Llamada a la función para acumular temperaturas. */
        Maxima(TEM, I);    /* Llamada a la función para calcular la máxima. */
        Minima(TEM, I);    /* Llamada a la función para calcular la mínima. */
    }

    printf("\nPromedio del día: %.2f", (ACT / 24));
    printf("\nMáxima del día: %.2f  \tHora: %d", MAX, HMAX);
    printf("\nMínima del día: %.2f   \tHora: %d", MIN, HMIN);
}

/* Esta función acumula las temperaturas en la variable global ACT
   para posteriormente calcular el promedio. */
void Acutem(float T)
{
    ACT += T;  /* Acumula la temperatura en la variable ACT. */
}

/* Esta función almacena la temperatura máxima y la hora en que se
   produjo en las variables globales MAX y HMAX, respectivamente. */
void Maxima(float T, int H)
{
    if (MAX < T) {
        MAX = T;
        HMAX = H;
    }
}

/* Esta función almacena la temperatura mínima y la hora en que se
   produjo en las variables globales MIN y HMIN. */
void Minima(float T, int H)
{
    if (MIN > T) {
        MIN = T;
        HMIN = H;
    }
}
