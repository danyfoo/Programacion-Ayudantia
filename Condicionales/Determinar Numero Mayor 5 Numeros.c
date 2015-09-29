#include<stdio.h>
#include<stdlib.h>

//Programa para determinar a partir de cinco números cual es el mayor

void main(){
	int numero = 0;	//Variable donde se almacenara cada numero que se comparara con el mayor actual
	int mayor;		//Varaible donde se almacenara el mayor de todos los números

	printf("Introduce un numero X1 = ");
	scanf("%d", &numero);	//Introducimos el valor de X1
	
	mayor =  numero; 	//Como solo hemos introducido un unico numero se considera el mayor hasta el momento
	
	printf("Introduce un numero X2 = ");
	scanf("%d", &numero);	//Introducimos el valor de X2
	
	if(numero > mayor){	//Si el nuevo numero que introducimos es mayor que el mayor hasta el momento, entonces...
		mayor = numero;	//El mayor tomara el valor del nuevo numero
	}
	
	printf("Introduce un numero X3 = ");
	scanf("%d", &numero);	//Introducimos el valor de X3
	
	if(numero > mayor){	//Si el nuevo numero que introducimos es mayor que el mayor hasta el momento, entonces...
		mayor = numero;	//El mayor tomara el valor del nuevo numero
	}
	
	printf("Introduce un numero X4 = ");
	scanf("%d", &numero);	//Introducimos el valor de X4
	
	if(numero > mayor){	//Si el nuevo numero que introducimos es mayor que el mayor hasta el momento, entonces...
		mayor = numero;	//El mayor tomara el valor del nuevo numero
	}
	
	printf("Introduce un numero X5 = ");
	scanf("%d", &numero);	//Introducimos el valor de X5
	
	if(numero > mayor){	//Si el nuevo numero que introducimos es mayor que el mayor hasta el momento, entonces...
		mayor = numero;	//El mayor tomara el valor del nuevo numero
	}
	
	printf("El mayor de todos los numeros es: %d", mayor);
}
