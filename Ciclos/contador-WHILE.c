#include <stdio.h>
#include <stdlib.h>

//Programa que cuenta del 0 al 9 por medio de un ciclo while
void main() {
  //El ciclo while es un bucle de codigo que se ejecuta infinitas veces dentro de un contexto
  //de codigo, es decir, el codigo dentro de los { } se repetira hasta que la CONDICION de
  //indicada dentro de while(CONDICION) no se cumpla.

  /*
    Composicion del While

    while(CONDICION_DE_CONTROL){
      CUERPO
    }

    CONDICION_DE_CONTROL: Es una expresion logica que mientras se mantenga como verdarero
    permite la siguiente iteracion del ciclo while, pero si es falso termina la ejecucion de
    todo el bloque contenido en el for.
    OJO: ESTA SENTECIA SE COMPARA CADA VEZ QUE INICIE UN CICLO.

    CUERPO: Codigo que se repetira el numero de veces que sea necesario hasta que,
    la condicion de control sea false.
  */
  int a = 0;
  while (a < 10) {
    printf("%d\n", a);
    a = a + 1;  //Tomamos el valor actual de a y le sumamos 1, al resultado de esta operacion
                //es asignado hacia a
  }
}
