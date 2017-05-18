/*	Jos� Andr�s D�az Escobar
	24 de Abril del 2016
	
2.	Hacer un programa en C en el que utilizar�s matrices con apuntadores (funci�n para inicializar en 1, para llenar, para imprimir).
Deber�s hacer una matriz A de 10x10, la cual llenar�s con los m�ltiplos de 2 comenzando por el dos (no debes pedir ning�n dato), por ejemplo:
2	4	6	8	10	12 	14	16	18	20
�..*/

#include <stdio.h>
#include <cstdlib>

void inicial(int (*a)[10][10]){
	for(int y=0; y<10; y++){
		for(int x=0; x<10; x++){
			(*a)[y][x]=1;
		}
	}
}

void llenado(int (*a)[10][10]){
	int i=2;
	for(int y=0; y<10; y++){
		for(int x=0; x<10; x++){
			(*a)[y][x]=i;
			i=i+2;
		}
	}
}

void impresion(int (*a)[10][10]){
	for(int y=0; y<10; y++){
		for(int x=0; x<10; x++){
			printf("%d\t", (*a)[y][x]);
		}
	}
}

int main(){
int matriz[10][10];

inicial(&matriz);
llenado(&matriz);
impresion(&matriz);
system("PAUSE");
return 0;
}

