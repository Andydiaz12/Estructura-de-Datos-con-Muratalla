/*	José Andrés Díaz Escobar
	25 de Enero del 2016
	Escribe un programa que pida tres números y que escriba si son los tres iguales, si hay dos iguales o si son los tres distintos*/

#include <stdio.h>
#include <cstdlib>

int main(){
	float arr[2];
	printf("Ingrese 3 numeros a evaluar\n");
	scanf("%f %f %f", &arr[0], &arr[1], &arr[2]);
	
	if(arr[0] == arr[1] && arr[0] == arr[2]){
	printf("Los tres numeros que has escrito son iguales\n");
	}else{
	if ((arr[0] != arr[1] && arr[0] == arr[2]) || (arr[0] != arr[2] && arr[0] == arr[1]) || (arr[1] == arr[2] && arr[1] != arr[0]))
	printf("Has escrito uno de los numeros dos veces\n");
	else
	printf("Los tres números que has escrito son distintos\n");	
	}
	
	
	system ("PAUSE");
	return 0;
}
