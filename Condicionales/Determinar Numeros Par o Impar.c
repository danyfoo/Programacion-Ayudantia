#include<stdio.h>
#include<stdlib.h>

//Programa para determinar si un numero es par o impar

void main(){
	int num = 0, modulo = 0;	//Variables de entrada
	
	printf("Introduce un numero = : ");
	scanf("%d", &num);	//Introducimos el valor de num (el numero a determinar si es par o impar)
	
	modulo = num % 2;	//La operación modulo (%) divide el numero  de la derecha antes del % 
						//entre el numero de la izquierda del % y devuelve el residuo de la operación
						//el cual sera almacenado en la variable modulo
						
						/*EJEMPLOS:
							3 % 1 = 0	equivalente a decir 3/1 = 3 y el residuo es 0
							9 % 5 = 4 	equivalente a decir 9/5 = 1 y el residuo es 4
							105 % 2 = 1	equivalente a decir 105/2 = 51 y el residuo es 1
							
							*Lo que importa del modulo es el residuo*
						*/
	
	//En este caso...											
	//Por lo tanto si un numero es PAR devolvera 0,
	//En caso contrario si es IMPAR devolvera 1
	
	if(modulo == 0){//Si son iguales, entonces...
		printf("%d es un numero PAR", num);
	}else{	//En caso de no ser iguales, entonces...
		printf("%d es un numero IMPAR", num);
	}
}
