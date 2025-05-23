#include <stdio.h>
#include <stdlib.h>


/* Funciones para el manejo de cadenas de caracteres de la biblioteca stdio.h. */
void main(void) {
    char *cad0 = "Buenos dias";   /* Se asignan 11 caracteres mas el caracter de terminación '\0'. */
    char cad1[20] = "Hola";         /* Se asignan cuatro caracteres más el caracter de terminación. */
    char cad2[] = "M\mexico";         /* Se asignan seis caracteres (mas el caracter de terminación). */
    char cad3[] = {'B', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'}; /* Otra forma de asignación. */
    char cad4[20], cad5[20], cad6[20];
    char p;
    int i = 0;

    printf("\nLa cadena cad0 es: ");
    puts(cad0);

    printf("\nLa cadena cad1 es: ");
    printf("%s\n", cad1);

    printf("\nLa cadena cad2 es: ");
    puts(cad2);

    printf("\nLa cadena cad3 es: ");
    puts(cad3);

    printf("\nIngrese una linea de texto (se lee con gets): \n");
    gets(cad4);
    printf("\nLa cadena cad4 es: ");
    puts(cad4);

    fflush(stdin);
    printf("\nIngrese una linea de texto (se lee con scanf): \n");
    scanf("%s", cad5);
    printf("\nLa cadena cad5 es: ");
    printf("%s\n", cad5);

    fflush(stdin);
    printf("\nIngrese una linea de texto (se lee cada caracter con getchar): \n");

    while ((p = getchar()) != '\n') {
        cad6[i++] = p;
    }
    cad6[i] = '\0';

    printf("\nLa cadena cad6 es: ");
    puts(cad6);
}
