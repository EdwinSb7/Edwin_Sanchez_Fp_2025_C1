#include <stdio.h>
#include <stdlib.h>


/* Suma y promedio.
   El programa, al recibir como datos varias cadenas de caracteres que
   contienen reales, los suma y obtiene el promedio de los mismos. */

int main(void)
{
    char c, cad[10];
    int i = 0;
    float sum = 0.0;

    printf("\nDesea ingresar una cadena de caracteres (S/N)? ");
    c = getchar();
    getchar(); // Capturar el salto de linea

    while (c == 'S')
    {
        printf("\nIngrese la cadena de caracteres: ");
        fflush(stdin);
        fgets(cad, sizeof(cad), stdin);

        i++;
        sum += atof(cad);

        printf("\nDesea ingresar otra cadena de caracteres (S/N)? ");
        c = getchar();
        getchar(); // Capturar el salto de linea
    }

    if (i > 0)
    {
        printf("\nSuma: %.2f", sum);
        printf("\nPromedio: %.2f\n", sum / i);
    }
    else
    {
        printf("\nNo se ingresaron datos validos.\n");
    }

    return 0;
}
