#include<stdio.h>
#include<stdlib.h>
#include<math.h>	//Libreria para operaciones matematicas complejas como raiz cuadrada y exponente

//Programa para el Calculo de la formula general ax^2 + bx + c

void main(){
	float a = 0, b = 0, c = 0;	//Variables de entrada
	float x1 = 0, x2 = 0; //Variables donde se almacenaran las raices de la ecuación
	float raizCuadrada = 0;	//Almacenaremos el valor de la raiz cuadrada de la formula
	printf("Introduce el valor de A: ");
	scanf("%f", &a);	//Introducimos el valor de a
	
	printf("Introduce el valor de B: ");
	scanf("%f", &b);	//Introducimos el valor de b
	
	printf("Introduce el valor de C: ");
	scanf("%f", &c);	//Introducimos el valor de b
	
	raizCuadrada = (sqrt( pow(b,2) - (4*a*c) ) );	//Representa la operación raiz cuadrada de -b^2 - 4ac
	/*
		sqrt(x) Función donde devuelve la raiz cuadrada del numero que se ingrese, o sea x
		
		pow(x,y) Función donde devuelve el exponente de un numero, elevado a otro, o sea x^y
	*/
	
	x1 = ((-b) + raizCuadrada)/2;
	x2 = ((-b) - raizCuadrada)/2;
	
	printf("La ecuación %.0f x^2 + %.0f x + %.0f, tiene como raices: \n", a, b, c);
	printf("X1 = %.2f\n", x1);
	printf("X2 = %.2f\n", x2);
}
