/*	José Andrés Díaz Escobar
	24 de Abril del 2016
	
10.	BUSQUEDA BINARIA:
1)	Inicializa un arreglo de flotantes de tamaño 10 con cero.
2)	Llena éste arreglo con datos que te dé el usuario.
3)	Posteriormente deberás ordenar el arreglo utilizando quicksort.
4)	Muestra el menú: 1) buscar dato 2) salir.
5)	Realizarás la búsqueda binaria del dato dado y se indicará si NO se encontró y SI se encontró en que posición se encuentra. 
6)	PERO irás imprimiendo en pantalla cada sección en la que se está realizando la búsqueda. Y al final imprimirás cuantas 
comparaciones hizo para encontrarlo.*/

#include <stdio.h>
#include <cstdlib>
#include "libreria.h"
int menu(){
	int x;
	printf("1.\tBuscar dato\n2\tSalir.\n");
	do{
	printf("Ingrese la opcion deseada:\t");
	scanf("%d", &x);
	if(x<1 || x>2){
	printf("Opcion del menu invalida\n");
	system("PAUSE");
	system("CLS");
}
}while(x<1 || x>2);
	return x;
}

float dato(){
	float x;
	printf("Ingrese el dato a buscar:\t");
	scanf("%f", &x);

	return x;
}

int main(){
	float arr[10], DATO;
	int MENU;
	inicializar_arreglo(&arr);
	llenado_arreglo(&arr);
	quicksort(&arr, 0, 9);
	imprimir(&arr);
	do{
		MENU=menu();
		switch (MENU){
			case 1:
				DATO=dato();
				busquedabinaria(&arr, DATO);
				break;
		}
	}while(MENU != 2);	
	system("PAUSE");
	return 0;
}
