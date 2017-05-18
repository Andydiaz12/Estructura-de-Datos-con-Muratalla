/*	José Andrés Díaz Escobar
	24 de Abril del 2016
	5.	Hacer un programa que llene dos arreglos de enteros de 5 elementos (a y b) y que guarde al suma de ellos en c.
Debes hacer las siguientes funciones USANDO APUNTADORES:
"	Función para inicializar un arreglo en 0 (la llamaras 3 veces para inicializar a, b y c).
"	Función para llenar un arreglo (la llamaras 2 veces para llenar a y b).
"	Función para hacer la suma.
"	Función para imprimir un arreglo (la llamaras 3 veces para imprimir a, b y c).
*/

#include <stdio.h>
#include <cstdlib>

void inicial(int (*a)[5]){
	for (int i=0; i<5; i++){
		(*a)[i]=0;
	}
}

void llenado(int (*a)[5]){
	int valor;
	for(int i=0; i<5; i++){
		printf("Ingrese el valor numero %d:\t", i+1);
		scanf("%d", &valor);
		(*a)[i]=valor;
	}
}

void suma(int (*a)[5], int (*b)[5], int (*c)[5]){
	for(int i=0; i<5; i++){
		(*c)[i]=(*a)[i]+(*b)[i];
	}
}

void impresion(int (*a)[5], int (*b)[5], int (*c)[5]){
	printf("Los valores del primer arreglo son:\n");
	for(int i=0; i<5; i++)
		printf("%d\n", (*a)[i]);
	printf("\nLos valores del segundo arreglo son:\n");
		for(int i=0; i<5; i++)
		printf("%d\n", (*b)[i]);
	printf("\nLos valores de la suma son:\n");
	
		for(int i=0; i<5; i++)
		printf("%d\n", (*c)[i]);
}

void notificacion(){
	printf("\nIngrese los valores del siguiente arreglo\n");
}

int main(){
	int A[5], B[5], C[5];
	inicial(&A);
	inicial(&B);
	inicial(&C);
	
	llenado(&A);
	notificacion();
	llenado(&B);
	
	suma(&A, &B, &C);
	
	impresion(&A, &B, &C);
	
system("PAUSE");
return 0;
}
