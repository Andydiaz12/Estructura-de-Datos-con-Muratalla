/*
José Andrés Díaz Escobar
15 de Abril del 2016
4.	ORDENAMIENTO INSERTSORT:
1)	Inicializa un arreglo de flotantes de tamaño 10 con cero.
2)	Llena éste arreglo con datos que te dé el usuario.
3)	Programa el ordenamiento quicksort para éste arreglo.
4)	Debes hacer la impresión de cada iteración del arreglo.
5)	Finalmente imprime el arreglo original y el ordenado*/

#include <cstdlib>
#include <stdio.h>
#include "librerias.h"

void copiaa(float (*a)[10], float (*b)[10]){
	for(int i=0; i<10; i++){
		(*a)[i]=(*b)[i];
	}
}


void insertt(float (*a)[10]){
	float y=0;	
	int k=1, i=0;
	for(k; k<10; k++){
		y = (*a)[k];
		for(i=k-1; (i>=0 && y < (*a)[i]); i--){
			(*a)[i+1]=(*a)[i];
				
		}
		(*a)[i+1]=y;
	
		for(int O=0; O<10; O++)
		printf("%.2f\t", (*a)[O]);
	}
}

void impresion(float (*a)[10]){
	printf("El arreglo original es:\n");
	for(int i=0; i<10; i++){
		printf("%.2f\t", (*a)[i]);
	}
}

int main(){
	float arr[10], copia[10];
	inicializar_arreglo(&arr);
	llenado_arreglo(&arr);
	copiaa(&copia, &arr);
	insertt(&arr);
	impresion(&copia);
	
	system("PAUSE");
	return 0;
}

