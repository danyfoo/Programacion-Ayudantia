#include <stdio.h>
#include <stdlib.h>

//Programa que cuenta unicamente los numeros pares del 0 al 20 por medio de un ciclo for, while y do-while
void main() {
  int i = 0;  //Variable de control para el For
  int j = 0;  //Variable de control para el While
  int k = 0;  //Variable de control para el Do-While

  printf("Contador PAR para un Ciclo FOR\n");
  for (i = 0; i <= 20; i++) {
    if (i % 2 == 0) {
      printf("%d\n", i);  //Imprimimos el valor de i
    }
  }

  printf("\n\nContador PAR para un Ciclo WHILE\n");
  while(j <= 20){
    if (j % 2 == 0) {
      printf("%d\n", j);  //Imprimimos el valor de j
    }
    j++;
  }

  printf("\n\nContador PAR para un Ciclo DO-WHILE\n");
  do {
    if (k % 2 == 0) {
      printf("%d\n", k);  //Imprimimos el valor de j
    }
    k++;
  } while(k <= 20);
}
