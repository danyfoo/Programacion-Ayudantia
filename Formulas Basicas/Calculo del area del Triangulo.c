#include<stdio.h>
#include<stdlib.h>

//Programa para determinar a partir de dos numeros si son iguales
//o diferentes

void main(){
	float base = 0, altura = 0;	//Variables de entrada
	float area = 0; //Variable donde se almacera el calculo del area del triangulo
					//Como este puede ser decimal se almacena en un valor flotante
	
	printf("Introduce la base: ");
	scanf("%f", &base);	//Introducimos el valor de la base
	
	printf("\nIntroduce la altura: ");
	scanf("%f", &altura);	//Introducimos el valor de la base
	
	area = (base * altura)/2;	//Representa la operación de base * altura entre 2
	
	printf("El triangulo de base: %f cm y de altura: %.2f cm, su area es de: %.2f cm^2", base, altura, area);
	
	//NOTA
	/*
		EL formato de salida %.2f signica que mostrara como maximo hasta 2 decimales
		Si fuera %.3f mostraría 3 decimales,
		Si fuera %.4f mostraría 4 decimales, etc.
		
		Por defecto %f muestra hasta 6 decimales
	*/
}
