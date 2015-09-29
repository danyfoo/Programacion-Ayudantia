#include<stdio.h>
#include<stdlib.h>

//Programa para determinar la media estadistica de 5 numeros

void main(){
	int numero = 0;		//Variables de entrada
	int total = 0;		//Varaibles donde sera almacenado la sumatoria de los cinco numeros
	float promedio = 0;	//Variable donde se almacenara el promedio de los 5 numeros
	
	printf("Introduce un numero X1 = ");
	scanf("%d", &numero);
	total = total + numero;	//Sumamos el nuevo numero a la sumatoria total
	
	printf("Introduce un numero X2 = ");
	scanf("%d", &numero);
	total = total + numero;	//Sumamos el nuevo numero a la sumatoria total

	printf("Introduce un numero X3 = ");
	scanf("%d", &numero);
	total = total + numero;	//Sumamos el nuevo numero a la sumatoria total
	
	printf("Introduce un numero X4 = ");
	scanf("%d", &numero);
	total = total + numero;	//Sumamos el nuevo numero a la sumatoria total
	
	printf("Introduce un numero X5 = ");
	scanf("%d", &numero);
	total = total + numero;	//Sumamos el nuevo numero a la sumatoria total
	
	promedio = total/5;	//Sacamos el promedio de los cinco numeros
	
	printf("El promedio de los cinco numeros es de: %.2f", promedio);
}
