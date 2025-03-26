#include <stdio.h>
#include <stdlib.h>

/* Bienes raices.
   El programa maneja informacion sobre las propiedades que tiene una empresa
   de bienes raices de la ciudad de Lima, Peru, tanto para venta como para renta. */

typedef struct {
    char zona[20];
    char calle[20];
    char colonia[20];
} ubicacion;

typedef struct {
    char clave[5];
    float scu;  /* Superficie cubierta. */
    float ste;  /* Superficie terreno. */
    char car[50];  /* Caracteristicas. */
    ubicacion ubi;
    float precio;
    char dispo;  /* Disponibilidad. */
} propiedades;

void Lectura(propiedades[], int);
void F1(propiedades[], int);
void F2(propiedades[], int);

int main(void) {
    propiedades PROPIE[100];
    int TAM;
    do {
        printf("Ingrese el numero de propiedades: ");
        scanf("%d", &TAM);
    } while(TAM > 100 || TAM < 1);

    Lectura(PROPIE, TAM);
    F1(PROPIE, TAM);
    F2(PROPIE, TAM);

    return 0;
}

void Lectura(propiedades A[], int T) {
    int I;
    for (I = 0; I < T; I++) {
        printf("\n\tIngrese datos de la propiedad %d", I + 1);
        printf("\nClave: ");
        while(getchar() != '\n');
        gets(A[I].clave);
        printf("Superficie cubierta: ");
        scanf("%f", &A[I].scu);
        printf("Superficie terreno: ");
        scanf("%f", &A[I].ste);
        printf("Caracteristicas: ");
        while(getchar() != '\n');
        gets(A[I].car);
        printf("\tZona: ");
        gets(A[I].ubi.zona);
        printf("\tCalle: ");
        gets(A[I].ubi.calle);
        printf("\tColonia: ");
        gets(A[I].ubi.colonia);
        printf("Precio: ");
        scanf("%f", &A[I].precio);
        printf("Disponibilidad (Venta-V  Renta-R): ");
        while(getchar() != '\n');
        scanf("%c", &A[I].dispo);
    }
}

void F1(propiedades A[], int T) {
    int I;
    printf("\n\t\tListado de Propiedades para Venta en Miraflores");
    for (I = 0; I < T; I++) {
        if ((A[I].dispo == 'V') && (strcmp(A[I].ubi.zona, "Miraflores") == 0)) {
            if ((A[I].precio >= 450000) && (A[I].precio <= 650000)) {
                printf("\nClave de la propiedad: ");
                puts(A[I].clave);
                printf("\nSuperficie cubierta: %.2f", A[I].scu);
                printf("\nSuperficie terreno: %.2f", A[I].ste);
                printf("\nCaracteristicas: ");
                puts(A[I].car);
                printf("Calle: ");
                puts(A[I].ubi.calle);
                printf("Colonia: ");
                puts(A[I].ubi.colonia);
                printf("Precio: %.2f\n", A[I].precio);
            }
        }
    }
}

void F2(propiedades A[], int T) {
    int I;
    float li, ls;
    char zon[20];
    printf("\n\t\tListado de Propiedades para Renta");
    printf("\nIngrese zona geografica: ");
    while(getchar() != '\n');
    gets(zon);
    printf("Ingrese el limite inferior del precio: ");
    scanf("%f", &li);
    printf("Ingrese el limite superior del precio: ");
    scanf("%f", &ls);

    for (I = 0; I < T; I++) {
        if ((A[I].dispo == 'R') && (strcmp(A[I].ubi.zona, zon) == 0)) {
            if ((A[I].precio >= li) && (A[I].precio <= ls)) {
                printf("\nClave de la propiedad: ");
                puts(A[I].clave);
                printf("\nSuperficie cubierta: %.2f", A[I].scu);
                printf("\nSuperficie terreno: %.2f", A[I].ste);
                printf("\nCaracteristicas: ");
                puts(A[I].car);
                printf("Calle: ");
                puts(A[I].ubi.calle);
                printf("Colonia: ");
                puts(A[I].ubi.colonia);
                printf("Precio: %.2f\n", A[I].precio);
            }
        }
    }
}
