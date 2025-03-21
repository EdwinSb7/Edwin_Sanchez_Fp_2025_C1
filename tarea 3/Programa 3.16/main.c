#include <stdio.h>
#include <stdlib.h>


/* Calificaciones.
El programa, al recibir un grupo de calificaciones de un alumno, obtiene el promedio de calificaciones de cada uno de ellos y, además, los alumnos con el mejor y peor promedio.
I, MAT, MAMAT y MEMAT: variables de tipo entero.
CAL, SUM, MAPRO, MEPRO y PRO: variables de tipo real.*/

int main(void)
{
    int I, MAT, MAMAT, MEMAT;
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0;

    printf("Ingrese la matrícula del primer alumno:\t");
    scanf("%d", &MAT);

    // Bucle para ingresar los datos de los alumnos
    while (MAT)
    {
        SUM = 0;

        // Bucle para ingresar las calificaciones de cada alumno
        for (I = 1; I <= 5; I++)
        {
            printf("\tIngrese la calificación del alumno %d: ", I);
            scanf("%f", &CAL);
            SUM += CAL;  // Sumar la calificación al total
        }

        PRO = SUM / 5;  // Calcular el promedio

        // Imprimir el promedio del alumno
        printf("\nMatrícula: %d\tPromedio: %5.2f", MAT, PRO);

        // Determinar si este alumno tiene el mejor o peor promedio
        if (PRO > MAPRO)
        {
            MAPRO = PRO;
            MAMAT = MAT;  // Guardar la matrícula del alumno con mejor promedio
        }
        if (PRO < MEPRO)
        {
            MEPRO = PRO;
            MEMAT = MAT;  // Guardar la matrícula del alumno con peor promedio
        }

        // Pedir la matrícula del siguiente alumno
        printf("\n\nIngrese la matrícula del siguiente alumno: ");
        scanf("%d", &MAT);
    }

    // Imprimir los resultados finales
    printf("\n\nAlumno con mejor Promedio:\t%d\t%5.2f", MAMAT, MAPRO);
    printf("\n\nAlumno con peor Promedio:\t%d\t%5.2f", MEMAT, MEPRO);

    return 0;  // Terminar la ejecución correctamente
}
