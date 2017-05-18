/*	José Andrés Díaz Escobar
	5 de Marzo del 2016
	Hacer un programa en C que inicialice un arreglo de 5 datos flotantes en -1 y posteriormente lo llene solicitándole datos al usuario.
NOTA: 
 	Debes hacer dos funciones y DEBES de pasar como argumento un apuntador al arreglo (como el ejemplo de clase).*/
 	
#include <stdio.h>
#include <cstdlib>

void impresion(int (*a)[10]){
	for(int i=0;i<10;i++){
		printf("%d", (*a)[i]);
	}
}

void vacio(){
	printf("El arreglo ha sido inicializado:\n");
}

void relleno(){
	printf("Los datos con el llenado son:\n");
}

void inicializacion(int (*a)[10]){
	for(int i=0; i<10; i++){
		(*a)[i]=0;
	}
}

void datos(int (*a)[10]){
	for(int x=0; x<10; x++){
		printf("Ingrese el dato numero %d:\t", x+1);
		scanf("%d", &(*a)[x]);
	}
}

int main(){
	int arr[10], i;
	inicializacion(&arr);
	vacio();
	for(int y=0; y<10; y++){
		printf("%d\n", arr[i]);
	}
	
	datos(&arr);
	relleno();
	
	for(int p=0; p<10; p++){
		printf("%d\n", arr[p]);
	}
	
	system("Pause");
	return 0;
}

