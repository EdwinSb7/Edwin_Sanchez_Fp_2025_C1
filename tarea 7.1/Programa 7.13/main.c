#include <stdio.h>
#include <stdlib.h>


/* Calcula longitud.
   El programa calcula la longitud de la cadena sin utilizar la funcion strlen. */

int cuenta(char *); /* Prototipo de funcion */

int main(void)
{
    int i;
    char cad[50];

    printf("\nIngrese la cadena de caracteres: ");
    fgets(cad, sizeof(cad), stdin);

    i = cuenta(cad);
    printf("\nLongitud de la cadena: %d\n", i);

    return 0;
}

int cuenta(char *cadena)
/* La funcion calcula la longitud de la cadena. */
{
    int c = 0;
    while (cadena[c] != '\0' && cadena[c] != '\n') /* Evita contar el salto de linea de fgets */
        c++;
    return c;
}
