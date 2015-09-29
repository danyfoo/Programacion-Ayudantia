#include<stdio.h>
#include<stdlib.h>

//Programa para determinar a partir de dos numeros cual 
//es el mayor y cual es el menor

void main(){
	int x = 0, y = 0;	//Variables de entrada
	int mayor, menor;	//Varaibles donde iran respectivamente el numero mayor 
						//y el menor despues de ser comparados

	printf("Introduce un numero = X: ");
	scanf("%d", &x);	//Introducimos el valor de X
	
	printf("\nIntroduce un numero = Y: ");
	scanf("%d", &y);	//Introducimos el valor de Y
	
	if(x == y){	//Preguntamos primeramente si los dos numeros son iguales
		printf("X y Y son iguales...");
	}else{
		//En caso de no ser iguales hacemos la comparación
		if(x>y){	//Si X es mayor que Y, entonces ...
			mayor = x;	//X es el mayor
			menor = y;	//Y es el menor
		}
		else{	//Si no lo es, entonces ...
			mayor = y;	//Y es el mayor
			menor = x;	//X es el menor
		}
		
		printf("El numero mayor es %d", mayor);		//Imprimimos al numero mayor
		printf("\nEl numero menor es %d", menor);	//Imprimimos al numero menor
	}
}
