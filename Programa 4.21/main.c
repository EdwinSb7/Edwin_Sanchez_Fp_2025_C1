#include <stdio.h>
#include <stdlib.h>



int z, y, w;  // Global variables
float x;       // Global variable for x

// Function prototypes
int F1(float x);
void F2(float t, int *r);

void main(void)
{
    z = 5;
    y = 7;
    w = 2;

    // Perform the division of y and z and store it in x
    x = (float)y / z;

    // Print values before calling F2
    printf("\nPrograma Principal: %d %d %.2f %d", z, y, x, w);

    // Call function F2
    F2(x, &w);

    // Print values after calling F2
    printf("\nPrograma Principal: %d %d %.2f %d", z, y, x, w);
}

int F1(float x)
{
    int k;
    if (x != 0)
    {
        k = z - y;
        x++;  // Increment x
    }
    else
    {
        k = z + y;
    }

    // Print values inside F1
    printf("\nF1: %d %d %.2f %d", z, y, x, k);
    return k;  // Return the result
}

void F2(float t, int *r)
{
    int y = 5;
    z = 0;

    // Print values inside F2
    printf("\nF2: %d %d %.2f %d", z, y, t, *r);

    if (z == 0)
    {
        z = (*r) * 2;
        t = (float)z / 3;
        printf("\nIngresa el valor: ");
        scanf("%d", r);  // User input for r
        printf("\nF2: %d %d %.2f %d", z, y, t, *r);
    }
    else
    {
        z = (*r) * 2;
        printf("\nF2: %d %d %.2f %d", z, y, t, *r);
    }

    // Call F1 and update r with its return value
    *r = F1(t);
}
