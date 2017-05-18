/*	José Andrés Díaz Escobar
	05 de Abril del 2016
	Hacer un programa que llene un arreglo de enteros de 5 elementos (a), solicite un escalar (z) y realice la multiplicación del arreglo por el escalar y lo guarde en otro arreglo (c).
Debes hacer las siguientes funciones USANDO APUNTADORES:
"	Función para inicializar un arreglo en 0 (la llamaras 3 veces para inicializar a y c).
"	Función para llenar un arreglo.
"	Función para hacer la multiplicación.
"	Función para imprimir un arreglo (la llamaras 2 veces para imprimir a y c).*/

#include <cstdlib>
#include <stdio.h>

int constante(){
	int x;
	do{
	printf("Ingrese un numero positivo para hacer la multiplicacion:\t");
	scanf("%d", &x);
	if(x<1)
	printf("El numero debe de ser positivo\n");
}while(x<1);
return x;
}

void inicial(int (*a)[5]){
	for(int i=0; i<5; i++){
		(*a)[i]=0;
	}
}

void valores(int (*a)[5]){
	for(int i=0; i<5; i++){
		printf("Ingrese el valor numero %d:\t", i+1);
		scanf("%d", &(*a)[i]);
	}
}

int multi(int (*a)[5], int b, int (*c)[5]){
	for(int i=0; i<5; i++){
		(*c)[i]=((*a)[i]*b);
	}
}

void impresion(int (*a)[5]){
	for(int i=0; i<5; i++){
		printf("%d\t", (*a)[i]);
	}
}

void res(int a){
	printf("\nEl resultado de multiplicar por %d es:\n", a);
}

int main(){
	int original[5], x, result[5], Constante;
	
	inicial(&original);
	inicial(&result);
	
	valores(&original);
	Constante=constante();
	
	multi(&original, Constante, &result);
	
	impresion(&original);
	res(Constante);
	impresion(&result);
	system("Pause");
	return 0;
}


