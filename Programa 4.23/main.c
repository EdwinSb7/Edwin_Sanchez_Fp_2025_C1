#include <stdio.h>
#include <stdlib.h>

void trueque(int *x, int *y) {
    int tem;
    tem = *x;
    *x = *y;
    *y = tem;
}

int suma(int x) {
    return (x + x);  // This is effectively returning 2 * x
}

int main() {
    int a = 5, b = 10;

    // Demonstrating the trueque function to swap a and b
    printf("Before trueque: a = %d, b = %d\n", a, b);
    trueque(&a, &b);  // Swap the values of a and b
    printf("After trueque: a = %d, b = %d\n", a, b);

    // Demonstrating the suma function to double a number
    int result = suma(a);  // Doubles the value of a
    printf("Double of a = %d\n", result);

    return 0;
}
