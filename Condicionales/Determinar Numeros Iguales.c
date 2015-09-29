#include<stdio.h>
#include<stdlib.h>

//Programa para determinar a partir de dos numeros si son iguales
//o diferentes

void main(){
	int x = 0, y = 0;	//Variables de entrada
	
	printf("Introduce un numero = X: ");
	scanf("%d", &x);	//Introducimos el valor de X
	
	printf("\nIntroduce un numero = Y: ");
	scanf("%d", &y);	//Introducimos el valor de Y
	
	if(x == y){	//Si son iguales, entonces...
		printf("X y Y son iguales...");
	}else{	//En caso de no ser iguales, entonces...
		printf("X y Y son diferentes...");
	}
}
