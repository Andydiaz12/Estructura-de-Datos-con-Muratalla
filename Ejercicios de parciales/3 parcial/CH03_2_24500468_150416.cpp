/*
José Andrés Díaz Escobar
15 de Abril del 2016
2.	ORDENAMIENTO BURBUJA:
1)	Inicializa un arreglo de flotantes de tamaño 10 con cero.
2)	Llena éste arreglo con datos que te dé el usuario.
3)	Programa el ordenamiento burbuja para éste arreglo.
4)	Debes hacer la impresión de cada iteración del arreglo.
5)	Finalmente imprime el arreglo original y el ordenado.*/


#include <stdio.h>
#include <cstdlib>
#include "librerias.h"

void burbujaa(float (*a)[10]){
	int i=0, x=0, j=0;
	for (i; i<=9; i++){
		for(j=i+1; j<=9;j++){
			if((*a)[i]>(*a)[j]){
			x=(*a)[i];
			(*a)[i]=(*a)[j];
			(*a)[j]=x;
			for(int p=0; p<10; p++){
				
			printf("%.2f\t", (*a)[p]);
			}
			}
		}
	}
}

void copia(float (*a)[10], float (*b)[10]){
	for(int i=0; i<10; i++){
		(*a)[i]=(*b)[i];
	}
}

void impresion(float (*a)[10]){
	printf("El arreglo original es:\n");
	for(int i=0; i<10; i++){
		printf("%.2f\t", (*a)[i]);
	}
}

int main(){
	float arr[10], copiaa[10];
	inicializar_arreglo(&arr);
	llenado_arreglo(&arr);
	copia(&copiaa, &arr);
	burbujaa(&arr);
	impresion(&copiaa);
	
	
	system("PAUSE");
return 0;
}
