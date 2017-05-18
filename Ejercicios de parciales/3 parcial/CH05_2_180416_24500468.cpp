/*	Jos� Andr�s D�az Escobar
	18 de Abril del 2016
	Ahora haremos una pila un poco m�s pr�ctica. Vas a realizar un administrador de tareas para un 
	sistema operativo para esto necesitar�s almacenar dos datos: clave del proceso (entero), nombre del proceso (cadena) 
	y aplicaci�n que lo ejecuta (cadena). Lo que tendr�s que hacer es presentar el siguiente men�:
1.	Agregar proceso.
2.	Eliminar proceso.
3.	Listado de procesos activos.
4.	Limpiar lista de procesos.
5.	Salir.
NOTAS:
 	Considera que m�ximo tienes 10 procesos disponibles.
 	La clave del proceso ser� un entero positivo.
 	Recuerda que es una pila, por lo que eliminar proceso eliminar�s el ULTIMO introducido.
 	En listado de procesos imprimir�s el listado de ejecuci�n (como si fuera la salida de la pila).
 	En limpiar procesos vaciar�s la pila y me dir�s "Han sido eliminados todos los procesos".
 	No olvides implementar tu funci�n isEmpty, es decir si te mando a limpiar o imprimir la lista y est� vac�a deber�s dec�rmelo.*/
 	
#include <cstdlib>
#include <stdio.h>
#include "PILA_INICIALES.h"

int menu(){
	int x;
	do{
		printf("1.	Agregar proceso.\n2.	Eliminar proceso.\n3.	Listado de procesos activos.\n4.	Limpiar lista de procesos.\n5.	Salir.\n");
		
		printf("\n\tIngrese la opcion deseada:\t");
		scanf("%d", &x);
		if(x < 1 || x > 5)
		printf("Opcion del menu invalida\n");
		}while(x < 1 || x > 5);
	return x;
}

float valor(){
	float x;
	printf("Ingrese el dato:\t");
	scanf("%f", &x);
	return x;
}

int main(){
	float arr[10], VALOR;
	int MENU, LLENO, VACIO, TOPE=0;

	do{
	MENU=menu();
	switch(MENU){
		case 1:
			LLENO=lleno(TOPE);
			if(LLENO == 0){
				VALOR=valor();
				TOPE=push(VALOR, &arr, TOPE);
			}
			break;
		case 2:
			VACIO=vacio(TOPE);
			if(VACIO == 0)
			TOPE=pop(&arr, TOPE);
			break;
		case 3:
			recorrido(&arr, TOPE);
			break;
		case 4:
			TOPE=inicializar_tope(TOPE);
			break;			
			
	}		
	}while(MENU != 5);
	
	system("PAUSE");
	return 0;
}
