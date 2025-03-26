#include <stdio.h>
#include <stdlib.h>

/* Decodifica.
   El programa decodifica una cadena de caracteres compuesta por numeros y letras. */

void interpreta(char *);  /* Prototipo de funcion. */

int main(void) {
    char cad[50];
    printf("\nIngrese la cadena de caracteres: ");
    fgets(cad, sizeof(cad), stdin);

    // Elimina el salto de linea si esta presente
    cad[strcspn(cad, "\n")] = '\0';

    interpreta(cad);
    return 0;
}

void interpreta(char *cadena) {
    /* Esta funcion se utiliza para decodificar la cadena de caracteres. */
    int i = 0, j, k;

    while (cadena[i] != '\0') {
        if (isalpha(cadena[i])) {
            /* Se utiliza isalpha para observar si el caracter es una letra. */

            if (i > 0 && isdigit(cadena[i - 1])) {
                k = cadena[i - 1] - '0';
                /* En la variable entera k se almacena el ascii del numero
                   convertido en caracter menos el ascii del digito '0'. */

                for (j = 0; j < k; j++)
                    putchar(cadena[i]);
            }
        }
        i++;
    }
    putchar('\n');
}
