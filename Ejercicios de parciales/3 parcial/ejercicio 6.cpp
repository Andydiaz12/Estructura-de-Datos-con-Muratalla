/*	José Andrés Díaz Escobar
	25 de Enero del 2016
	Escribe un programa que pida tres números y que escriba si son los tres iguales, si hay dos iguales o si son los tres distintos*/

#include <stdio.h>
#include <cstdlib>

int main(){
	int arr[2];
	printf("Ingrese 3 numeros a evaluar\n");
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	
	if(arr[0] == arr[1] && arr[0] == arr[2]){
	printf("Los 3 numeros son iguales\n");
	}else{
	if ((arr[0] != arr[1] && arr[0] == arr[2]) || (arr[0] != arr[2] && arr[0] == arr[1]) || (arr[1] == arr[2] && arr[1] != arr[0]))
	printf("Tienes 2 numeros iguales\n");
	else
	printf("Todos son diferentes\n");	
	}
	
	
	system ("PAUSE");
	return 0;
}
