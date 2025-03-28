#include <stdio.h>
#include <stdlib.h>

/* Funciones para el manejo de caracteres de la biblioteca ctype.h. */
int main(void) {
    char p1;

    printf("\nIngrese un caracter para analizar si este es un digito: ");
    p1 = getchar();
    getchar(); // Limpiar buffer

    if (isdigit(p1))
        printf("%c es un digito \n", p1);
    else
        printf("%c no es un digito \n", p1);

    printf("\nIngrese un caracter para examinar si este es una letra: ");
    p1 = getchar();
    getchar(); // Limpiar buffer

    if (isalpha(p1))
        printf("%c es una letra \n", p1);
    else
        printf("%c no es una letra \n", p1);

    printf("\nIngrese un caracter para examinar si este es una letra minuscula: ");
    p1 = getchar();
    getchar(); // Limpiar buffer

    if (isalpha(p1)) {
        if (islower(p1))
            printf("%c es una letra minuscula \n", p1);
        else
            printf("%c no es una letra minuscula \n", p1);
    } else {
        printf("%c no es una letra \n", p1);
    }

    printf("\nIngrese una letra para convertirla de mayuscula a minuscula: ");
    p1 = getchar();
    getchar(); // Limpiar buffer

    if (isalpha(p1)) {
        if (isupper(p1))
            printf("%c fue convertida de mayuscula a minuscula: %c\n", p1, tolower(p1));
        else
            printf("%c es una letra minuscula \n", p1);
    } else {
        printf("%c no es una letra \n", p1);
    }

    return 0;
}
