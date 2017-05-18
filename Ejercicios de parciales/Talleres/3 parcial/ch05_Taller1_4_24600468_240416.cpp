/*	José Andrés Díaz Escobar
	24 de Abril del 2016
	4.	Hacer un programa en C para ordenar un arreglo de 10 datos flotantes. Deberás llenar el arreglo y posteriormente mostrar el siguiente menú:
1.	Ordenar por Shell.
2.	Ordenar por Bubble.
3.	Ordenar por Quick.
4.	Ordenar por Insert.
5.	Busqueda Secuencial.
6.	Busqueda Binario.
7.	Salir.
NOTA: Después de hacer el ordenamiento solicitado mostrarás el arreglo original y el arreglo ordenado. ES FORSOZO QUE UTILICES TU LIBRERÍA, EN CASO CONTRARIO NO SERÁ CALIFICADO.
*/

#include <stdio.h>
#include <cstdlib>
#include "libreria.h"

int pedir_dato(){
	float x;
	printf("Ingrese el dato a buscar:\t");
	scanf("%f", &x);
	return x;
}

int menu(){
	int x;
printf("1.	Ordenar por Shell.\n2.	Ordenar por Bubble.\n3.	Ordenar por Quick.\n4.	Ordenar por Insert.\n5.	Busqueda Secuencial.\n6.	Busqueda Binario.\n7.	Salir.\n");
do{
	printf("Ingrese la opcion deseada:\t");
	scanf("%d", &x);
	if(x<1 || x > 7){
	printf("Opcion del menu invalida.\n");
	system("PUASE");
	system("cls");
}
}while(x<1 || x > 7);

return x;	
}

int main(){
	int MENU;
	float datos[10], DATO;
	inicializar_arreglo(&datos);
	llenado_arreglo(&datos);
	do{
	MENU=menu();
	
	switch (MENU){
		case 1:
			shellsort(&datos);
			imprimir(&datos);
			break;
		case 2:
			burbuja(&datos);
			imprimir(&datos);
			break;
		case 3:
			quicksort(&datos, 0, 9);
			imprimir(&datos);
			break;
		case 4:
			insert(&datos);
			imprimir(&datos);
			break;
		case 5:
			DATO=pedir_dato();
			busqueda_secuencial(&datos, DATO);
			break;
		case 6:
			DATO=pedir_dato();
			busquedabinaria(&datos, DATO);
			break;
			
	}
}while(MENU != 7);
	system("PAUSE");
	return 0;
}
