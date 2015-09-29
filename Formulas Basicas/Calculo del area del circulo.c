#include<stdio.h>
#include<stdlib.h>
#include<math.h>	//Libreria para operaciones matematicas complejas como raiz cuadrada y exponente

//Programa para el Calculo de un circulo

#define PI 3.1416	//Definimos una constante de codigo la cual sera representada por la palabra PI que equivaldra al valor 3.1416

/*
	NOTA:
	
	Para definir una constante necesitamos escibirla de la siguiente manera:
	
	#define PALABRA_RESERVADA_EN_MAYUSCULAS valor_entero/decimal
	
	Condiciones:
	- Siempre ira antes del main, despues de la inclusión de librerías
	- La palabra reservada siempre, siempre ira en MAYUSCULAS
	- El valor puede ser unicamente entero o decimal
	
	OJO: La palabra reservada no puede ser utilizada como variable en el resto de la ejecución del codigo
	
*/

void main(){
	float numero = 0, total = 0;	//Variables de entrada
	float promedio = 0;		//Variable donde el promedio final

	printf("Introduce un numero X1: ");
	scanf("%f", &numero);	//Introducimos el valor de X1
	total = total + numero;	//Sumamos lo que tiene total con el nuevo numero y lo resultante se lo volvemos a asignar a total
	
	printf("Introduce un numero X2: ");
	scanf("%f", &numero);	//Introducimos el valor de X2
	total = total + numero;	//Sumamos lo que tiene total con el nuevo numero y lo resultante se lo volvemos a asignar a total
	
	printf("Introduce un numero X3: ");
	scanf("%f", &numero);	//Introducimos el valor de X3
	total = total + numero;	//Sumamos lo que tiene total con el nuevo numero y lo resultante se lo volvemos a asignar a total
	
	printf("Introduce un numero X4: ");
	scanf("%f", &numero);	//Introducimos el valor de X4
	total = total + numero;	//Sumamos lo que tiene total con el nuevo numero y lo resultante se lo volvemos a asignar a total
	
	printf("Introduce un numero X5: ");
	scanf("%f", &numero);	//Introducimos el valor de X5
	total = total + numero;	//Sumamos lo que tiene total con el nuevo numero y lo resultante se lo volvemos a asignar a total
	
	promedio =  total / 5;	//Sacamos el promedio dividiendo la sumatoria de los 5 numeros sobre 5
	
	printf("El promedio de los cinco numeros es:  %.2f", promedio);

}
