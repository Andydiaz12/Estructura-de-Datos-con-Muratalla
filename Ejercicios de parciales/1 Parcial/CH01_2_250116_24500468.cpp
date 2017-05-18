/*	José Andrés Díaz Escobar
	25 de Enero del 2016
	Programa que solicita al usuario una cantidad de metros y muestra su equivalencia en: cm, mm, millas y pulgadas. */
	
#include <stdio.h>
#include <cstdlib>

int main(){
	float arr[4];
	printf("Ingrese la cantidad de metros a convertir\n");
	scanf("%f", &arr[0]);
	
	arr[1]=arr[0]*100;
	arr[2]=arr[0]*1000;
	arr[3]=arr[0]*0.000621371;
	arr[4]=arr[0]*39.3701;
	
	printf("TABLA DE EQUIVALENCIAS\n%.2fm equivalen a %.2fcm\n%.2fm equivalen a %.2fmm\n%.2fm equivalen a %.2fmi\n%.2fm equivalen a %.2fpulg", arr[0], arr[1], arr[0], 
	arr[2], arr[0], arr[3], arr[0], arr[4]);
	getchar();
	return 0;
}
