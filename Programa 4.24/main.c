#include <stdio.h>
#include <stdlib.h>


/* Parámetros y funciones. */
int f1(void);
int f2(void);
int f3(void);
int f4(void);
int K = 5;

int main(void) {
    int I;
    for (I = 1; I <= 4; I++) {
        printf("\n\nEl resultado de la función f1 es: %d", f1());
        printf("\nEl resultado de la función f2 es: %d", f2());
        printf("\nEl resultado de la función f3 es: %d", f3());
        printf("\nEl resultado de la función f4 es: %d", f4());
    }
    return 0;
}

int f1(void) {
    K *= K;  // Multiply K by itself (K = K * K)
    return K;
}

int f2(void) {
    int K = 3;  // Local K, initialized to 3
    K++;  // Increment local K
    return K;  // Return the incremented local K
}

int f3(void) {
    static int K = 6;  // Static variable, retains its value between calls
    K += 3;  // Add 3 to static K
    return K;  // Return the updated static K
}

int f4(void) {
    int K = 4;  // Local K
    K = K + ::K;  // Global K is used here
    return K;  // Return the result of adding local K and global K
}
