#include<stdio.h>
#include<stdlib.h>
#include<math.h>	//Libreria para operaciones matematicas complejas como raiz cuadrada y exponente

//Programa para el Calculo de la hipotemusa de un triangulo rectangulo

void main(){
	float catetoAdyacente = 0, catetoOpuesto = 0;	//Variables de entrada
	float hipotemusa = 0; //Variable donde se almacenara la hipotemusa
	
	printf("Introduce el valor de cateto adyacente: ");
	scanf("%f", &catetoAdyacente);	//Introducimos el valor de cateto adyacente
	
	printf("Introduce el valor de cateto opuesto: ");
	scanf("%f", &catetoOpuesto);	//Introducimos el valor de cateto opuesto
	
	hipotemusa = ( sqrt( pow(catetoAdyacente,2) + pow(catetoOpuesto,2)) );	//Representa la operación raiz cuadrada de la suma del cuadrado de cada cateto
	/*
		NOTA:
		
		sqrt(x) Función donde devuelve la raiz cuadrada del numero que se ingrese, o sea x
		
		pow(x,y) Función donde devuelve el exponente de un numero, elevado a otro, o sea x^y
	*/
	
	printf("El triangulo rectangulo con: \n\tCateto adyacente = %.0f \n\tCateto opuesto= %.0f\n", catetoAdyacente, catetoOpuesto);
	printf("Tiene como hipotemusa = %.2f\n", hipotemusa);
	/*
		NOTA:
		
		/n Solamente sirve dentro de printf("SECCION ESCRITO",VARIABLES); en la sección de texto, sirve para hacer un salto de carro (enter)
		/t Solamente sirve dentro de printf("SECCION ESCRITO",VARIABLES); en la sección de texto, sirve para hacer una sangria de texto (tabulador o tab)
	*/
}
