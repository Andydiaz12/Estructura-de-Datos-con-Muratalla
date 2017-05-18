/*
José Andrés Díaz Escobar
15 de Abril del 2016
4.	ORDENAMIENTO SHELLSORT:
1)	Inicializa un arreglo de flotantes de tamaño 10 con cero.
2)	Llena éste arreglo con datos que te dé el usuario.
3)	Programa el ordenamiento quicksort para éste arreglo.
4)	Debes hacer la impresión de cada iteración del arreglo.
5)	Finalmente imprime el arreglo original y el ordenado*/

#include <stdio.h>
#include <cstdlib>
#include "librerias.h"

void copiaa(float (*a)[10], float (*b)[10]){
	for(int i=0; i<10; i++){
		(*a)[i]=(*b)[i];
	}
}

void shellsortt (float (*a)[10], float n) {
    float  y;
    int i, x, j;
    for (x = n; x /= 2;) {
        for (i = x; i < n; i++) {
            y = (*a)[i];
            for (j = i; j >= x && y < (*a)[j - x]; j -= x) {
                (*a)[j] = (*a)[j - x];
            }
            (*a)[j] = y;
            for(int contador=0; contador<10; contador++){
    	printf("%.2f\t", (*a)[contador]);
	}
        }
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
	shellsortt(&arr, 10);
	impresion(&copia);
	
	
	system ("PAUSE");
	return 0;
}


