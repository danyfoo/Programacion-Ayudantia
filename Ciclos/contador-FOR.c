#include <stdio.h>
#include <stdlib.h>

//Programa que cuenta del 0 al 9 por medio de un ciclo for, while y do-while
void main() {
  //El ciclo for es un bucle de codigo que se ejecuta las veces que se le indique dentro de un contexto
  //de codigo, es decir, el codigo dentro de los { } se repetira las veces que el programador le indique

  //Nos sirve para contar, para ejecutar un numero n de veces cierto codigo, etc.

  /*
    Composicion del For

    for (VARIABLE_DE_CONTROL = VALOR_INICIAL; SENTENCIA_CONTROL; INCREMENTO){
      CUERPO
    }

    VARIABLE_DE_CONTROL: Es la variable con la cual iterara nuestro ciclo for,
    tambien controla el estado del ciclo ya que el valor de esta puede indicar cuando
    termine el ciclo o que siga continuando.

    VALOR_INICIAL: Es el valor asignado con el que inicia la variable de control.
    OJO: ESTA ASIGNACION UNICAMENTE SE HACE EN LA PRIMERA ITERACION.

    SENTENCIA_DE_CONTROL: Es una expresion logica que mientras se mantenga como verdarero
    permite la siguiente iteracion del ciclo for, pero si es falso termina la ejecucion de
    todo el bloque contenido en el for. Esta operacion puede o no ser dependiente de la variable de control.
    OJO: ESTA SENTECIA SE COMPARA CADA VEZ QUE INICIE UN CICLO.

    INCREMENTO: Razon de incremento o decremento del ciclo.
    OJO: ESTE INCREMENTO SE REALIZARA AL FINAL DE CADA CICLO.

    CUERPO: Codigo que se repetira el numero de veces que sea necesario hasta que,
    la sentencia de control sea false.
  */
  int i;  //Declaramos la variable que va ser nuestra variable de control
  //Inicializamos nuestra variable de control a 0,
  //indicamos que mientras nuestra variable de control i sea menor a 10 seguira ejecutandose,
  //e indicamos una razon de incremento de 1, el operador ++ es un incremento unario
  //solo incrementara nuestra variable de control i de 1 en 1 al final de cada ciclo.
  for (i = 0; i < 10; i++) {
    printf("%d\n", i);  //Imprimimos el valor de i
  }
}
