/*	José Andrés Díaz eSCOBAR
	24 de Abril del 2016
	ORDENAMIENTO QUICKSORT:
1)	Inicializa un arreglo de flotantes de tamaño 10 con cero.
2)	Llena éste arreglo con datos que te dé el usuario.
3)	Programa el ordenamiento quicksort para éste arreglo.
4)	Debes hacer la impresión de cada iteración del arreglo.
5)	Finalmente imprime el arreglo original y el ordenado.*/

#include <stdio.h>
#include <cstdlib>
#include "libreria.h"
void copia(float (*a)[10], float (*b)[10]){
	for(int i=0; i<10; i++)
	(*b)[i]=(*a)[i];
}



int main(){
	float arr[10], COPIA[10];
	inicializar_arreglo(&arr);
	llenado_arreglo(&arr);
	copia(&arr, &COPIA);
	quicksort(&arr, 0, 9);
	imprimir(&arr);
	printf("\n");
	imprimir(&COPIA);
	
		
	system("PAUSE");
	return 0;
}

