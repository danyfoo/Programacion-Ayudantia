#include <stdio.h>
#include <stdlib.h>

#define SUCESIONES 20
/*Codigo que demuestra la sucesion de Fibonacci (N sucesiones)*/
void main() {
  int ante_anterior = 0;  //El numero dos posiciones antes del numero actual
  int anterior = 1; //El nnumero una posicion antes del numero actual
  int actual;
  int i;
  /*  SUCESION DE FIBONACCI ES LA SUMA DE LOS 2 NUMEROS ANTECESOES AL ACTUAL, INCIA CON LAS DOS PRIMERAS SUCESIONES EN 0 , 1
      DEMOSTRACION:
      0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393
  */
  printf("%d, %d, ", ante_anterior, anterior);
  for (i = 0; i < SUCESIONES; i++) {
    actual = ante_anterior + anterior;  //Resolvemos el numero que ira ahora en la sucesion que es la suma de los dos anteriores
    printf("%d, ", actual); //Imprimimos en pantalla el numero
    ante_anterior = anterior; //Ahora el numero dos posiciones antes tiene el valor del de una posicion antes
    anterior = actual;  //Ahora el numero de una posicion antes tiene el valor del actual
  }
  printf("... Y la sucesion sigue, joven\n");
}
