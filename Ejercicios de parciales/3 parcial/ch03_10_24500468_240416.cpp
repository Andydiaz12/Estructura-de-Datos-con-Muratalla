/*	Jos� Andr�s D�az Escobar
	24 de Abril del 2016
	
10.	BUSQUEDA BINARIA:
1)	Inicializa un arreglo de flotantes de tama�o 10 con cero.
2)	Llena �ste arreglo con datos que te d� el usuario.
3)	Posteriormente deber�s ordenar el arreglo utilizando quicksort.
4)	Muestra el men�: 1) buscar dato 2) salir.
5)	Realizar�s la b�squeda binaria del dato dado y se indicar� si NO se encontr� y SI se encontr� en que posici�n se encuentra. 
6)	PERO ir�s imprimiendo en pantalla cada secci�n en la que se est� realizando la b�squeda. Y al final imprimir�s cuantas 
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
