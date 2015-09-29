#include <stdio.h>
#include <stdlib.h>

//Programa que cuenta del 0 al 9 por medio de un ciclo for, while y do-while
void main() {
  //El ciclo for es un bucle de codigo que se ejecuta las veces que se le indique dentro de un contexto
  //de codigo, es decir, el codigo dentro de los { } se repetira las veces que el programador le indique

  /*
    Composicion del For

    for (VARIABLE_DE_CONTROL = VALOR_INICIAL; SENTENCIA_CONTROL; INCREMENTO){
      CUERPO
    }

    VARIABLE_DE_CONTROL: Es la variable con la cual iterara nuestro ciclo for,
    tambien controla el estado del ciclo ya que el valor de esta puede indicar cuando
    termine el ciclo o que siga continuando.

    VALOR_INICIAL: Es el valor asignado con el que inicia la variable de control.

    SENTENCIA_DE_CONTROL: Es una expresion logica que mientras se mantenga como verdarero
    permite la siguiente iteracion del ciclo for, pero si es falso termina la ejecucion de
    todo el bloque contenido en el for. Esta operacion puede o no ser dependiente de la variable de control.

    INCREMENTO:
  */
  int i;
  for (i = 0; i < 10; i++) {
    printf("%d\n", i);
  }
}
