#include <stdio.h>
#include <stdio.h>

/* Prototipo de la funcion */
int pal(int, int);  /* Prototipo de funcion */

void main(void)
{
    int a, b, c, d;  // Declare local variables

    a = 2;
    c = 3;
    d = 5;

    a = pal(c, d);  // Call pal function and assign the result to 'a'

    printf("\n%d %d %d %d", a, b, c, d);  // Print values after first call to pal

    b = 4;  // Assign value to 'b'
    b = pal(b, a);  // Call pal function again with updated 'b' and 'a'

    printf("\n%d %d %d %d", a, b, c, d);  // Print values after second call to pal
}

int pal(int x, int y)
{
    int c;
    b = x * y;
    c = b + y;
    x++;
    y = y * (y + 1);

    printf("\n%d %d %d %d", b, c, x, y);

    return x;
}
