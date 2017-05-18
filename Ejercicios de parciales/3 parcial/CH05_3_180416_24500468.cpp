/*	Jos� Andr�s D�az Escobar
	18 de Abril del 2016
	3.	Modificar�s el ejercicio anterior: Ahora lo que tendr�s que hacer es presentar el siguiente men�:
1.	Agregar proceso.
2.	Eliminar el �ltimo proceso.
3.	Eliminar un proceso espec�fico.
4.	Modificar un proceso.
5.	Listado de procesos activos.
6.	Limpiar lista de procesos.
7.	Salir.

NOTAS:
 	Solo agregar�s el punto 3 y 4 del men�.
 	En el punto 3: pedir�s la clave del proceso si NO lo encuentra deber�s decir que el dato no fue 
	 encontrado y por lo tanto no se elimin� nada de la pila. 
	 Una vez que elimines el dato (es decir en la clave pongas -1 para indicar que est� vaci�) 
	 deber�s recorrer el resto de los datos ya que no puede haber una posici�n vac�a. 
	 Para realizar el recorrido de los datos vas a copiar cadenas por lo que utilizar�s la funci�n: 
	 char * strcpy ( char * destination, const char * source ); de la librer�a */
	 
#include <cstdlib>
#include <stdio.h>
#include "PILA_INICIALES.h"
float dato(){
	float x;
	printf("Ingrese el dato:\t");
	scanf("%f", &x);
	return x;
}

float remplazar(){
	float x;
	printf("Ingrese el dato a reemplazar\n");
	scanf("%f", &x);
	return x;
}

void menu(){
	printf("1.	Agregar proceso.\n2.	Eliminar el �ltimo proceso.\n3.	Eliminar un proceso espec�fico.\n4.	Modificar un proceso.\n5.	Listado de procesos activos.\n6.	Limpiar lista de procesos.\n7.	Salir.\n");
}

int menu_dato(){
	int x;
	do{
	printf("\n\nIngrese la opcion del menu:\t");
	scanf("%d", &x);
	if(x < 1 || x > 7)
		printf("\nOpcion del menu invalida\n");
}while(x < 1 || x > 7);
	return x;
}

int main(){
	float arr[10], x, DATO, cambio, X;
	int TOPE=0, MENU;
	
	inicializar_arreglo(&arr);
	do{
		menu();
		MENU=menu_dato();
		switch(MENU){
			case 1:
				x=lleno(TOPE);
				if(x == 0){
				DATO=dato();
				TOPE=push(DATO, &arr, TOPE);
			}
			break;
			
			case 2:
				x=vacio(TOPE);
				if(x == 0){
					TOPE=pop(&arr, TOPE);
					break;
				}
			break;
			
			case 3:
				DATO=dato();
				TOPE=eliminar_dato(DATO, &arr, TOPE);
			break;
			
			case 4:
				DATO=dato();
				X=remplazar();
				cambio=sustitucion(X, &arr, DATO);
				break;
			
			case 5:
				recorrido(&arr, TOPE);
				break;

			case 6:
				TOPE=inicializar_tope(TOPE);
				break;
				
		} 
		
		
	}while(MENU != 7);
	
	system("pause");
	return 0;
}
