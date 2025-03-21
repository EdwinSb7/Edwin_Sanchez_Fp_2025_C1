#include <stdio.h>
#include <stdlib.h>


/* N�mina de profesores.
   El programa, al recibir como datos los salarios de los profesores de una
   universidad, obtiene la n�mina y el promedio de los salarios.

   I: variable de tipo entero.
   SAL, NOM y PRO: variables de tipo real.
*/

int main(void)  // Se recomienda usar int main() en lugar de void main()
{
    int I = 0;
    float SAL, PRO, NOM = 0;

    printf("Ingrese el salario del profesor:\t");
    /* Al menos se necesita ingresar un salario para evitar error de ejecuci�n. */
    scanf("%f", &SAL);

    do
    {
        NOM = NOM + SAL;
        I = I + 1;
        printf("Ingrese el salario del profesor (-0 para terminar):\t");
        scanf("%f", &SAL);
    }
    while (SAL != 0);

    PRO = NOM / I;

    printf("\nN�mina: %.2f \t Promedio de salarios: %.2f\n", NOM, PRO);

    return 0;  // Se recomienda return 0 para indicar ejecuci�n exitosa
}
