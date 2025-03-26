#include <stdio.h>
#include <stdlib.h>


typedef struct /* Declaracion de la estructura domicilio utilizando un typedef. */
{
    char calle[20];
    int numero;
    int cp;
    char localidad[20];
} domicilio;

struct empleado /* Declaracion de la estructura anidada empleado. */
{
    char nombre[20];
    char departamento[20];
    float sueldo;
    domicilio direccion; /* direccion es un campo de tipo estructura domicilio de la estructura empleado. */
};

void Lectura(struct empleado *a)
/* Funcion que permite leer los campos de un apuntador de tipo estructura empleado. */
{
    printf("\nIngrese el nombre del empleado: ");
    gets(a->nombre);
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    gets(a->departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &a->sueldo);
    fflush(stdin);
    printf("-----Ingrese la direccion del empleado-----");
    printf("\n\tCalle: ");
    gets(a->direccion.calle);
    printf("\tNumero: ");
    scanf("%d", &a->direccion.numero);
    printf("\tCodigo Postal: ");
    scanf("%d", &a->direccion.cp);
    fflush(stdin);
    printf("\tLocalidad: ");
    gets(a->direccion.localidad);
}

void main(void)
{
    struct empleado e0 = {"Arturo", "Compras", 15500.75, "San Jeronimo", 120, 3490, "Toluca"};
    struct empleado *e1, *e2, e3, e4;

    e1 = (struct empleado *)malloc(sizeof(struct empleado));  // Usamos malloc en lugar de new
    if (e1 == NULL) {
        printf("Error al asignar memoria\n");
        return;
    }

    printf("\nIngrese el nombre del empleado 1: ");
    scanf("%s", e1->nombre);  // No se necesita & cuando usas un puntero
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    fgets(e1->departamento, 20, stdin);  // Usamos fgets en lugar de gets
    e1->departamento[strcspn(e1->departamento, "\n")] = 0;  // Eliminar salto de línea
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e1->sueldo);
    printf("-----Ingrese la direccion del empleado-----");
    printf("\n\tCalle: ");
    fflush(stdin);
    fgets(e1->direccion.calle, 20, stdin);  // Usamos fgets en lugar de gets
    e1->direccion.calle[strcspn(e1->direccion.calle, "\n")] = 0;  // Eliminar salto de línea
    printf("\tNumero: ");
    scanf("%d", &e1->direccion.numero);
    printf("\tCodigo Postal: ");
    scanf("%d", &e1->direccion.cp);
    fflush(stdin);
    printf("\tLocalidad: ");
    fgets(e1->direccion.localidad, 20, stdin);  // Usamos fgets en lugar de gets
    e1->direccion.localidad[strcspn(e1->direccion.localidad, "\n")] = 0;  // Eliminar salto de línea

    printf("\nIngrese el nombre del empleado 3: ");
    scanf("%s", e3.nombre);  // No se necesita & cuando usas un puntero
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    fgets(e3.departamento, 20, stdin);  // Usamos fgets en lugar de gets
    e3.departamento[strcspn(e3.departamento, "\n")] = 0;  // Eliminar salto de línea
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e3.sueldo);
    printf("-----Ingrese la direccion del empleado-----");
    printf("\n\tCalle: ");
    fflush(stdin);
    fgets(e3.direccion.calle, 20, stdin);  // Usamos fgets en lugar de gets
    e3.direccion.calle[strcspn(e3.direccion.calle, "\n")] = 0;  // Eliminar salto de línea
    printf("\tNumero: ");
    scanf("%d", &e3.direccion.numero);
    printf("\tCodigo Postal: ");
    scanf("%d", &e3.direccion.cp);
    printf("\tLocalidad: ");
    fflush(stdin);
    fgets(e3.direccion.localidad, 20, stdin);  // Usamos fgets en lugar de gets
    e3.direccion.localidad[strcspn(e3.direccion.localidad, "\n")] = 0;  // Eliminar salto de línea

    /* En la funcion Lectura se leen los campos de una variable, e4, y un apuntador de tipo estructura, *e2. */
    e2 = (struct empleado *)malloc(sizeof(struct empleado));  // Usamos malloc en lugar de new
    if (e2 == NULL) {
        printf("Error al asignar memoria\n");
        return;
    }
    Lectura(e2);
    Lectura(&e4);

    printf("\nDatos del empleado 1\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s", e1->nombre, e1->departamento, e1->sueldo,
           e1->direccion.calle, e1->direccion.numero, e1->direccion.cp, e1->direccion.localidad);

    printf("\nDatos del empleado 4\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s", e4.nombre, e4.departamento, e4.sueldo,
           e4.direccion.calle, e4.direccion.numero, e4.direccion.cp, e4.direccion.localidad);

    // Liberar la memoria al final
    free(e1);
    free(e2);
}
