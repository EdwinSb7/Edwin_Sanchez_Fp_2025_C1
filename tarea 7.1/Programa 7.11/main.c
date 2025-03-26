#include <stdio.h>
#include <stdlib.h>



/* Verifica si un caracter en una posicion especifica de una cadena es una letra minuscula. */

int main(void)
{
    char p, cad[50];
    int n;

    printf("\nIngrese la cadena de caracteres (maximo 50): ");
    fgets(cad, sizeof(cad), stdin);

    printf("\nIngrese la posicion en la cadena que desea verificar: ");
    scanf("%d", &n);

    if ((n > 0) && (n <= 50))
    {
        p = cad[n - 1];
        if (islower(p))
            printf("\n%c es una letra minuscula", p);
        else
            printf("\n%c no es una letra minuscula", p);
    }
    else
    {
        printf("\nEl valor ingresado de n es incorrecto");
    }

    return 0;
}
