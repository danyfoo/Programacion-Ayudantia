#include <stdio.h>
#include <stdlib.h>

#define NIVELES 5
/*Codigo que genera una piramide de simbolos * cada uno con un numero impar de simbolos*/
void main() {

  int i, j;
  int numSimbolos = 1;
  /*  PIRAMIDE DE SIMBOLOS
      DEMOSTRACION:

      *           <- nivel 0 = 1 elemento
      ***         <- nivel 1 = 3 elemento
      *****       <- nivel 2 = 5 elemento
      *******     <- nivel 3 = 1 elemento
      *********   <- nivel 4 = 1 elemento
      *********** <- nivel 5 = 1 elemento

  */

  for (i = 0; i <= NIVELES; i++, numSimbolos+=2) {
    for (j = 0; j < numSimbolos; j++) {
      printf("*");
    }
    printf("\n");
  }
}
