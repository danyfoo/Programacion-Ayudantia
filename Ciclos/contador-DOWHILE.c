#include <stdio.h>
#include <stdlib.h>

//Programa que cuenta del 0 al 9 por medio de un ciclo do-while
void main() {
  //El ciclo do-while es un bucle de codigo que se ejecuta con el mismo comportamiento que
  //un bucle while, con la garantia de que el codigo se ejecute por lo menos una vez.

  /*
    Composicion del Do While
    do {
      CUERPO
    } while(CONDICION_DE_CONTROL);

    CONDICION_DE_CONTROL: Es una expresion logica que mientras se mantenga como verdarero
    permite la siguiente iteracion del ciclo while, pero si es falso termina la ejecucion de
    todo el bloque contenido en el for.
    OJO: ESTA SENTECIA SE COMPARA CADA VEZ QUE INICIE UN CICLO.

    CUERPO: Codigo que se repetira el numero de veces que sea necesario hasta que,
    la condicion de control sea false, se ejecutara por lo menos una vez.
  */
  int a = 0;
  do {
    printf("%d\n", a);
    a = a + 1;
  } while(a < 10);
}
