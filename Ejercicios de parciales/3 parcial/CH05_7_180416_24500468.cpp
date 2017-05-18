	/*	José Andrés Díaz Escobar
	18 de Abril del 2016
	Utiliza tu librería sobre colas para:
a.	Deberás inicializar el arreglo en -1.
b.	Mostrarás el siguiente menú:
1)	Agregar dato.
2)	Eliminar dato como cola.
3)	Eliminar dato con Max delete.
4)	Eliminar dato con Min delete.
5)	Eliminar dato específico.
6)	Imprimir cola.
7)	Salir.
NOTA: 
 	Para éste ejercicio puedes utilizar tu librería. 
 	En el caso de "Eliminar dato como cola" debes eliminar como se hace en teoría de colas, es decir el primer dato introducido.
 	En el caso de "Eliminar dato con Max delete" y "Min delete" debes llamar tus funciones que ya programaste.
 	En el caso de "Eliminar dato específico" el usuario te dirá que dato eliminar, si no existe se lo deberás indicar y sí SI existe deberás eliminarlo y recorrer los datos para no dejar posiciones vacias.
 	No olvides verificar el overflow y underflow.*/
 	
#include <stdio.h>
#include <cstdlib>
#include "COLA_INICIALES.h"
#include "PILA_INICIALES.h"

float quitar(){
	int x;
printf("Ingrese el dato a quitar:\t");
scanf("%f", &x);
return x;
}

int menu(){
	int x;

	printf("1)\tAgregar dato.\n2)\tEliminar dato como cola.\n3)\tEliminar dato como Max delete.\n4)\tEliminar dato como Min delete.\n5)\tEliminar dato especifico.\n6)\tImprimir Cola.\n7)\tSalir.\n");
	do{
printf("\n\tIngrese la opcion que desee realizar:\t");
scanf("%d", &x);
if(x < 1 || x > 7)
printf("Opcion invalida\n");
	}while((x < 1 || x > 7));
	return x;
}

int main(){
	float arr[10], QUITAR;
	int FRENTE=0, MENU, VACIO, LLENO;
	inicializar(&arr);
	do{
	MENU=menu();
	switch (MENU){
		case 1:
			LLENO=lleno(FRENTE);
			if(LLENO == 0)
			FRENTE=insert(&arr, FRENTE);
			break;
		case 2:
			VACIO=vacio(FRENTE);
			if(VACIO == 0)
			FRENTE=remove(&arr, FRENTE);
			break;
		case 3:
			VACIO=vacio(FRENTE);
			if(VACIO == 0)
			FRENTE=maxdelete(&arr, FRENTE);
			break;
		case 4:
			VACIO=vacio(FRENTE);
			if(VACIO == 0)
			FRENTE=mindelete(&arr, FRENTE);
			break;
		case 5:
			VACIO=isEmpty(FRENTE);
			if(VACIO == 0){
			QUITAR=quitar();		
			FRENTE=eliminar_dato(QUITAR, &arr, FRENTE);
		}
			break;
		case 6:
			imprimir(&arr, FRENTE);
			break;
	}
	}while(MENU != 7);
	system("PAUSE");
	return 0;
}

