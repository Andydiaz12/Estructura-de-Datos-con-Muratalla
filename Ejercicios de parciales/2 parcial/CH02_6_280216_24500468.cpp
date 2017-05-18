/*	José Andrés Díaz Escobar
	28 de Febrero del 2016
	Escribir una función llamada "edades" que reciba 2 edades y decir cual de ellas es la mayor y que diga la diferencia de las edades.

FUNCIÓN 1: que pida la edad (llamarla dos veces en el main() para solicitar las dos edades).
FUNCIÓN 2: que diga cual es la mayor.
FUNCIÓN 3: que calcule la diferencia de las edades.*/

#include <stdio.h>
#include <cstdlib>

int edades(){
	int edad;
	do{
	printf("\nIngrese la edad:\t");
	scanf("%d", &edad);
	if(edad <= 0)
	printf("La edad debe ser mayor a 0\n");
}while (edad <= 0);
	return edad;
}

void mayor(int a, int b){
	if(a < b)
	printf("\t\n%d es el mayor\n", b);
	else if (a > b)
	printf("\t\n%d es el mayor\n", a);
	else
	printf("\t\nLos numeros son iguales\n");
		
}

void diferencia(int a, int b){
	int resta;
	if(a < b){
		resta=b-a;
		printf("\nLa diferencia es de %d unidades\n", resta);
	}
	if(a > b){
		resta=a-b;
		printf("\nLa diferencia es de %d unidades\n", resta);
	}
	else
	printf("\nNo hay diferencia\n");
	
}

int main(){
	int edad[2];
	for(int i=0; i<2; i++){
		edad[i]=edades();
	}
	mayor(edad[0], edad[1]);
	diferencia(edad[0], edad[1]);
	
	system ("PAUSE");
		return 0;
}


