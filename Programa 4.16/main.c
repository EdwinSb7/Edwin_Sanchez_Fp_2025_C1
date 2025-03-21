#include <stdio.h>
#include <stdlib.h>


/* Temperaturas.
   El programa recibe como datos 24 n�meros reales que representan las
   temperaturas en el exterior en un per�odo de 24 horas. Calcula el
   promedio del d�a y las temperaturas m�xima y m�nima con la hora en la
   que se registraron. */

void Acutem(float);           /* Prototipos de funciones. */
void Maxima(float, int);
void Minima(float, int);

float ACT = 0.0;             /* Variable para acumular temperaturas. */
float MAX = -50.0;           /* Variable para la temperatura m�xima. */
float MIN = 60.0;            /* Variable para la temperatura m�nima. */
int HMAX;                    /* Hora en que se registr� la temperatura m�xima. */
int HMIN;                    /* Hora en que se registr� la temperatura m�nima. */

void main(void)
{
    float TEM;
    int I;

    for (I = 1; I <= 24; I++) {
        printf("Ingresa la temperatura de la hora %d: ", I);
        scanf("%f", &TEM);
        Acutem(TEM);       /* Llamada a la funci�n para acumular temperaturas. */
        Maxima(TEM, I);    /* Llamada a la funci�n para calcular la m�xima. */
        Minima(TEM, I);    /* Llamada a la funci�n para calcular la m�nima. */
    }

    printf("\nPromedio del d�a: %.2f", (ACT / 24));
    printf("\nM�xima del d�a: %.2f  \tHora: %d", MAX, HMAX);
    printf("\nM�nima del d�a: %.2f   \tHora: %d", MIN, HMIN);
}

/* Esta funci�n acumula las temperaturas en la variable global ACT
   para posteriormente calcular el promedio. */
void Acutem(float T)
{
    ACT += T;  /* Acumula la temperatura en la variable ACT. */
}

/* Esta funci�n almacena la temperatura m�xima y la hora en que se
   produjo en las variables globales MAX y HMAX, respectivamente. */
void Maxima(float T, int H)
{
    if (MAX < T) {
        MAX = T;
        HMAX = H;
    }
}

/* Esta funci�n almacena la temperatura m�nima y la hora en que se
   produjo en las variables globales MIN y HMIN. */
void Minima(float T, int H)
{
    if (MIN > T) {
        MIN = T;
        HMIN = H;
    }
}
