#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float SAL;
    int NIV;

    // Solicitar datos al usuario
    printf("Ingrese el nivel académico del profesor (1-4): ");
    scanf("%d", &NIV);

    printf("Ingrese el salario actual: ");
    scanf("%f", &SAL);

    // Aplicar incremento de salario según el nivel
    switch(NIV) {
        case 1: SAL *= 1.0035; break;
        case 2: SAL *= 1.0041; break;
        case 3: SAL *= 1.0048; break;
        case 4: SAL *= 1.0053; break;
        default:
            printf("\nNivel inválido. No se realizó ningún cambio.\n");
            return 1; // Código de error
    }

    // Mostrar el nuevo salario
    printf("\nNivel: %d \tNuevo salario: %.2f\n", NIV, SAL);

    return 0;
}
