#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
 /* Diagonal principal.
 El programa, al recibir como dato una matriz de tipo entero, escribe la
 diagonal principal. */
 const intTAM = 10;
  void Lectura(int [][TAM], int);     /* Prototipo de funciones. */
 voidImprime(int [][TAM], int);
 /* Observa que siempre es necesario declarar el número de columnas. Si no lo
 ➥haces, el compilador marcará un error de sintaxis. */
 void main(void)
 {
 intMAT[TAM][TAM];
 Lectura(MAT, TAM);
 Imprime(MAT, TAM);
 }
 voidLectura(int A[][TAM], intF)
 /* La función Lecturase utiliza para leer un arreglo bidimensional. Observa
 ➥que sólo se debe pasar como parámetro el número de filas ya que la matriz
 ➥es cuadrada. */
 {
 intI, J;
 for(I=0; I<F; I++)
 for(J=0; J<F; J++)
 {
 printf(”Ingrese el elemento %d %d: ”, I+1, J+1);
 scanf(”%d”, &A[I][J]);
