#include <stdio.h>
#include <stdlib.h>


/* Calcula la longitud en forma recursiva sin usar strlen. */
int cuenta(char *);  // Prototipo de funcion

int main(void) {
    int i;
    char cad[50];

    printf("\nIngrese la cadena de caracteres: ");
    fgets(cad, sizeof(cad), stdin);

    // Elimina el salto de linea si fgets lo incluye
    for (i = 0; cad[i] != '\0'; i++) {
        if (cad[i] == '\n') {
            cad[i] = '\0';
            break;
        }
    }

    i = cuenta(cad);
    printf("\nLongitud de la cadena: %d\n", i);

    return 0;
}

int cuenta(char *cadena) {
    /* Calcula la longitud de la cadena en forma recursiva */
    if (cadena[0] == '\0')
        return 0;
    else
        return 1 + cuenta(&cadena[1]);
}
